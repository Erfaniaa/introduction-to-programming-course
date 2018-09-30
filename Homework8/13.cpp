#include <iostream>

using namespace std;

int a[4][4]; //0 for empty, 1 for X, 2 for O
char ch[] = {' ', 'X', 'O'};

int isEqual(int x, int y, int z)
{
	return (x && x == y && y == z) ? x : 0;
}

int win()
{
	int ret = 0;
	//Check rows:
	ret = max(ret, isEqual(a[1][1], a[1][2], a[1][3]));
	ret = max(ret, isEqual(a[2][1], a[2][2], a[2][3]));
	ret = max(ret, isEqual(a[3][1], a[3][2], a[3][3]));
	//Check columns:
	ret = max(ret, isEqual(a[1][1], a[2][1], a[3][1]));
	ret = max(ret, isEqual(a[1][2], a[2][2], a[3][2]));
	ret = max(ret, isEqual(a[1][3], a[2][3], a[3][3]));
	//Check diagonals:
	ret = max(ret, isEqual(a[1][1], a[2][2], a[3][3]));
	ret = max(ret, isEqual(a[1][3], a[2][2], a[3][1]));
	return ret;
}

void printRow(int row)
{
	cout << ch[a[row][1]] << " | " << ch[a[row][2]] << " | " << ch[a[row][3]] << endl;
}

void print()
{
	printRow(1);
	cout << "---------" << endl;
	printRow(2);
	cout << "---------" << endl;
	printRow(3);
}

int main()
{
	int turns = 0;
	while (turns < 9 && !win())
	{
		print();
		int r, c;
		do
		{
			cout << "It's '" << ch[turns % 2 + 1] << "' turn. Enter a row and a column number: "; //1-based
			cin >> r >> c;
		} while (a[r][c]);
		a[r][c] = turns % 2 + 1;
		turns++;
	}
	print();
	if (win())
		cout << "'" << ch[win()] << "' win!" << endl;
	else
		cout << "Tie!" << endl;
	return 0;
}