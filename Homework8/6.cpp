#include <iostream>

using namespace std;

int solve(int a[], int n)
{
	int ret = 1, tmp = 1;
	for (int i = 1; i < n; i++)
	{
		if (a[i] >= a[i - 1])
		{
			tmp++;
			if (tmp > ret)
				ret = tmp;
		}
		else
			tmp = 1;
	}
	return ret;
}

int main()
{
	int n, arr[1010];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << solve(arr, n) << endl;
	return 0;
}