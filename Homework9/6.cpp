#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char s[1010], t[1010];
	cin >> s;
	cin >> t;
	for (int i = 0; i <= strlen(s) - strlen(t); i++)
	{
		bool flag = true;
		for (int j = i; j < i + strlen(t); j++)
			if (s[j] != t[j - i])
			{
				flag = false;
				break;
			}
		if (flag)
		{
			cout << "Found at index " << i << endl; //0-based
			return 0;
		}
	}
	cout << "Not found!" << endl;
	return 0;
}