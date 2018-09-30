#include <iostream>

using namespace std;

int q, n, a[100010];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
	cout << "The sorted array: ";
	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
	cout << endl;
	cout << "Enter the number of queries: ";
	cin >> q;
	while (q--)
	{
		cout << "Enter a number to be inserted: ";
		int x;
		cin >> x;
		int idx = ++n;
		a[idx] = x;
		while (idx > 1 && x < a[--idx])
			swap(a[idx], a[idx + 1]);
		cout << "The array: ";
		for (int i = 1; i <= n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}