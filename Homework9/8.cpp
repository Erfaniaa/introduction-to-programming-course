#include <iostream>
#include <cstring>

using namespace std;

int solve(char* s)
{
	int ret = 0;
	for (int i = strlen(s) - 1; i >= 0; i--)
		if (s[i] >= '0' && s[i] <= '9')
			ret = ret * 10 + (int)s[i] - 48;
	return ret;
}

int main()
{
	char s[1010];
	cin >> s;
	cout << solve(s) << endl;
	return 0;
}