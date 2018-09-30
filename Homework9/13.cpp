#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("glyphs-linux.txt");
ofstream fout("output.txt");
#define cout fout

char glyph[256][10][10], rows[256];

bool isValid(char* s)
{
	for (int i = 0; i < strlen(s); i++)
		if (s[i] != ' ')
			return true;
	return false;
}

void init()
{
	char s[1010];
	char ch = 'A';
	while (ch <= 'z' && fin.getline(s, 1010))
	{
		if (!isValid(s))
			continue;
		strcpy(glyph[ch][0], s);
		int i = 0;
		for (i = 1; i < 7; i++)
		{
			if (!fin.getline(glyph[ch][i], 10) || (i >= 2 && !isValid(glyph[ch][i])))
				break;
		}
		rows[ch] = i + 1;
		ch++;
		if (ch == 'Z' + 1)
			ch = 'a';
	}
}

void printChar(char ch, int row)
{
	row = (row + rows[ch]) % 7;
	for (int i = 0; i < 7; i++)
		if (i < strlen(glyph[ch][row]) && glyph[ch][row][i] != ' ')
			cout << ch;
		else
			cout << " ";
}

void printString(char* s)
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < strlen(s); j++)
			printChar(s[j], i);
		cout << endl;
	}
}

int main()
{
	char s[1010];
	init();
	cin.getline(s, 1010);
	printString(s);
	return 0;
}