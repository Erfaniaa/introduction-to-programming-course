#include <iostream>
#include <cstring>

using namespace std;

void lowerCase(char* s)
{
	for (int i = 0; i < strlen(s); i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
}

void reverse(char* s, char* dest)
{
	for (int i = 0; i < strlen(s); i++)
		dest[strlen(s) - 1 - i] = s[i];
	dest[strlen(s)] = 0;
}

int main()
{
	char s[1010], t[1010], t2[1010];
	cin.getline(s, 1010);
	cin >> t;
	lowerCase(s);
	lowerCase(t);
	reverse(t, t2);
	int ans = 0;
	for (int i = 0; i <= strlen(s) - strlen(t); i++)
	{
		bool flag1 = true, flag2 = true;
		for (int j = i; j < i + strlen(t); j++)
			if (s[j] != t[j - i])
			{
				flag1 = false;
				break;
			}
		for (int j = i; j < i + strlen(t2); j++)
			if (s[j] != t2[j - i])
			{
				flag2 = false;
				break;
			}
		ans += flag1 || flag2;
	}
	cout << ans << endl;
	return 0;
}