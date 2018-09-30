#include <iostream>

using namespace std;

int power3(int x)
{
	return x * x * x;
}

int main()
{
	int num;
	cin >> num;
	if (num < 100 || num > 999)
	{
		cout << "Not a 3-digit number" << endl;
		return 0;
	}
	int dig1 = num % 10;
	int dig2 = num / 10 % 10;
	int dig3 = num / 100;
	if (power3(dig1) + power3(dig2) + power3(dig3) == num)
		cout << "It's an Armstrong number." << endl;
	else
		cout << "It's not an Armstrong number." << endl;
	return 0;
}