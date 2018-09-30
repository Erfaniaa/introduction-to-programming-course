#include <iostream>

using namespace std;

int mod11(int x)
{
	while (x < 0)
		x += 11;
	if (x < 11)
		return x;
	int t = 0, p = 1;
	while (x)
	{
		t += p * (x % 10);
		p *= -1;
		x /= 10;
	}
	return mod11(t);
}

int main()
{
	int num;
	cin >> num;
	cout << mod11(num) << endl;
	return 0;
}