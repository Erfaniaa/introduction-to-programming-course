#include <iostream>

using namespace std;

bool isPrime(int x)
{
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0)
			return false;
	return x != 1;
}

void printPrimes(int n)
{
	for (int i = 1; i < n; i++)
		if (isPrime(i))
			cout << i << endl;
}

int main()
{
	int n;
	cin >> n;
	printPrimes(n);
	return 0;
}