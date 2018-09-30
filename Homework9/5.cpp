#include <iostream>
#include <cstring>

using namespace std;

void reverse(char* s, int l, int r)
{
	for (int i = l; i <= (l + r) / 2; i++)
		swap(s[i], s[l + r - i]);
}

int main()
{
	char s[1010];
	int l = -1;
	cin >> s;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == '@')
			l = i + 1;
		if (s[i] == '$' && l != -1)
		{
			reverse(s, l, i - 1);
			l = -1;
		}
	}
	cout << s << endl;
}