#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a[1010][1010], n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[n - i - 1][j] = n - abs(i - j);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}