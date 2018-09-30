#include <iostream>

using namespace std;

int getAndSum();
int sum(int n);
void getAndPrintSum();
void printSum(int n);

int main()
{
	int n;
	cin >> n;
	cout << sum(n) << endl;
	printSum(n);
	cout << getAndSum() << endl;
	getAndPrintSum();
}

int getAndSum()
{
	int n;
	cin >> n;
	int ret = 0;
	while (n)
	{
		ret += n % 10;
		n /= 10;
	}
	return ret;
}

int sum(int n)
{
	int ret = 0;
	while (n)
	{
		ret += n % 10;
		n /= 10;
	}
	return ret;
}

void getAndPrintSum()
{
	int n;
	cin >> n;
	int ret = 0;
	while (n)
	{
		ret += n % 10;
		n /= 10;
	}
	cout << ret << endl;
}

void printSum(int n)
{
	int ret = 0;
	while (n)
	{
		ret += n % 10;
		n /= 10;
	}
	cout << ret << endl;
}