#include <iostream>

using namespace std;

bool isValid(long long num, int base)
{
	while (num)
	{
		if (num % 10 >= base)
			return false;
		num /= 10;
	}
	return true;
}

long long convertToBase10(long long num, int base)
{
	long long p = 1, ret = 0;
	while (num)
	{
		ret += (num % 10) * p;
		p *= base;
		num /= 10;
	}
	return ret;
}

long long convertFromBase10(long long num, int base)
{
	long long p = 1, ret = 0;
	while (num)
	{
		ret += (num % base) * p;
		p *= 10;
		num /= base;
	}
	return ret;
}

long long convert(long long num, int base1, int base2)
{
	long long tmp = convertToBase10(num, base1);
	return convertFromBase10(tmp, base2);
}

long double convertDouble(long double num, int base)
{
	long long intPart = num;
	long long tmp = 1;
	long double nonIntPart = num - intPart;
	while (nonIntPart != (long long)nonIntPart)
	{
		tmp *= 10;
		nonIntPart *= base;
	}
	long long ret1 = convertFromBase10(intPart, base);
	long double ret2 = convertFromBase10(nonIntPart, base);
	return ret1 + ret2 / tmp + 1 * 1e-9;
}

int main()
{
	long long x;
	int b1, b2;
	cout << "Int conversion:" << endl;
	cin >> x >> b1 >> b2;
	if (!isValid(x, b1))
		cout << "Invalid conversion" << endl;
	else
		cout << convert(x, b1, b2) << endl;
	long double y;
	cout << "Float conversion:" << endl;
	cin >> y >> b2;
	cout.precision(8);
	cout << fixed << convertDouble(y, b2) << endl;
	return 0;
}