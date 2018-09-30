#include <iostream>

using namespace std;

int countZeros(int x)
{
	return x ? countZeros(x / 10) + !(x % 10) : 0;
}

int main()
{
	int num;
	cin >> num;
	cout << countZeros(num) << endl;
	return 0;
}