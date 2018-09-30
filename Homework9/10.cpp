#include <iostream>

using namespace std;

int n, mat[1010][1010], mark[1010], cnt;

void dfs(int v, int color)
{
	mark[v] = color;
	for (int u = 1; u <= n; u++)
		if (mat[v][u] && !mark[u])
			dfs(u, color);
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> mat[i][j];
	for (int i = 1; i <= n; i++)
		if (!mark[i])
			dfs(i, ++cnt);
	cout << cnt << endl;
}