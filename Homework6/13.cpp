#include <iostream>

using namespace std;

double mySqrt(int n)
{
	double l = 0, r = 1000 * 1000 * 1000;
	while (r - l > 1e-5)
	{
		double mid = (l + r) / 2;
		if (mid * mid < n)
			l = mid;
		else
			r = mid;
	}
	return r;
}

int num;

int main()
{
	cin >> num;
	cout.precision(4);
	cout << fixed << mySqrt(num) << endl;
	return 0;
}