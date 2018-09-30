#include <iostream>

using namespace std;

int sum(int a[], int l, int r)
{
	if (l == r)
		return a[l];
	return sum(a, l, (l + r) / 2) + sum(a, (l + r) / 2 + 1, r);
}

int getMin(int a[], int l, int r)
{
	if (l == r)
		return a[l];
	return min(getMin(a, l, (l + r) / 2), getMin(a, (l + r) / 2 + 1, r));
}

double avg(int a[], int l, int r)
{
	if (l == r)
		return a[l];
	int mid = (l + r) / 2;
	return (avg(a, l, mid) * (mid - l + 1) + avg(a, mid + 1, r) * (r - mid)) / (r - l + 1);
}

bool isPrime(int x)
{
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0)
			return false;
	return x > 1;
}

int primesSum(int a[], int l, int r)
{
	if (l == r)
		return isPrime(a[l]) * a[l];
	return primesSum(a, l, (l + r) / 2) + primesSum(a, (l + r) / 2 + 1, r);
}

void printReverse(int a[], int l, int r)
{
	if (r < l)
		return;
	cout << a[r] << " ";
	printReverse(a, l, r - 1);
}

int n, arr[1010];

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << "Sum: " << sum(arr, 0, n - 1) << endl;
	cout << "Min: " << getMin(arr, 0, n - 1) << endl;
	cout << "Average: " << avg(arr, 0, n - 1) << endl;
	cout << "Sum of prime numbers: " << primesSum(arr, 0, n - 1) << endl;
	cout << "Reverse: ";
	printReverse(arr, 0, n - 1);
	return 0;
}