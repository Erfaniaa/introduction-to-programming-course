#include <iostream>

using namespace std;

int main()
{
	int n, m, a[110][110];
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];
	for (int j = 1; j <= m; j++)
		for (int i = 1; i <= n; i++)
			for (int k = i + 1; k <= n; k++)
				if ((j % 2 == 0 && a[k][j] > a[i][j]) || (j % 2 == 1 && a[k][j] < a[i][j]))
					swap(a[i][j], a[k][j]);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}