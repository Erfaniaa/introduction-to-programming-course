#include <iostream>
#include <cstring>

using namespace std;

void compress(char* s, char* dest)
{
	int len = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		int cnt = 1;
		while (i + 1 < strlen(s) && s[i + 1] == s[i])
		{
			i++;
			cnt++;
		}
		dest[len++] = cnt + '0';
		dest[len++] = s[i];
	}
	dest[len] = 0;
}

void unhash(char* s, char* dest)
{
	int len = 0;
	for (int i = 0; i < strlen(s); i += 2)
		for (int j = 1; j <= (int)s[i] - 48; j++)
			dest[len++] = s[i + 1];
	dest[len] = 0;
}

int main()
{
	char s[1010], h[1010], u[1010];
	cin >> s;
	compress(s, h);
	cout << h << endl;
	unhash(h, u);
	cout << u << endl;
	return 0;
}