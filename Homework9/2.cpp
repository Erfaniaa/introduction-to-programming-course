#include <iostream>

using namespace std;

int n, m, len, a[100010], b[100010], c[100010];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	cin >> m;
	for (int i = 1; i <= m; i++)
		cin >> b[i];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (b[j] == a[i])
			{
				c[++len] = a[i];
				break;
			}
	for (int i = 1; i <= len; i++)
		cout << c[i] << " ";
	return 0;
}