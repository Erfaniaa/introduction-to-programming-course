#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n = 7, a[1010][1010];
	//cin >> n;
	//it works for all odd numbers (including 7 :D)
	int m = n / 2;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i; j++)
		{
			int x = j - m;
			int y = i - m;
			if (y > -abs(x) && y < abs(x))
				swap(a[i][j], a[i][n - j - 1]); //swap horizontal
			if (x > -abs(y) && x < abs(y))
				swap(a[i][j], a[n - i - 1][j]); //swap vertical
		}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout.width(3);
			cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}