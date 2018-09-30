#include <iostream>

using namespace std;

int mod11(int n)
{
	int p = 1, ret = 0;
	while (n)
	{
		ret += n % 10;
		p *= -1;
		n /= 10;
	}
	while (ret > 11)
		ret -= 11;
	while (ret < 0)
		ret += 11;
	return ret;
}

int num;

int main()
{
	cin >> num;
	cout << mod11(num) << endl;
	return 0;
}