#include <iostream>

using namespace std;

int comb(int n, int k)
{
	if (k > n)
		return 0;
	if (k == 0)
		return 1;
	return comb(n - 1, k - 1) + comb(n - 1, k);
}

int main()
{
	int n;
	cin >> n; //line's count
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << comb(i, j) << " ";
		cout << endl;
	}
	return 0;
}