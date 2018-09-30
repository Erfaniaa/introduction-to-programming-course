#include <iostream>

using namespace std;

void search(int a[], int n, int x)
{
	bool found = false;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
		{
			cout << i << " "; //0-based indice
			found = true; 
		}
	if (!found)
		cout << "not found";
	cout << endl;
}

int main()
{
	int n = 20, x, a[110];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> x;
	search(a, n, x);
	return 0;
}