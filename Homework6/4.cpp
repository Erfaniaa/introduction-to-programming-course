#include <iostream>

using namespace std;

double degToRad(double x)
{
	return x * 3.141592653 / 180;
}

double calc(double x, int n) //n >= 1
{
	double num = 1, ret = 1;
	double fact = 1;
	for (int i = 1; i < n; i++)
	{
		num *= -x * x;
		fact *= (2 * i - 1) * (2 * i);
		ret += num / fact; 
	}
	return ret;
}

double x;
int n;

int main()
{
	cin >> x >> n;
	cout << calc(degToRad(x), n) << endl;
	return 0;
}