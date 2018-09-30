#include <iostream>

using namespace std;

void hanoi(int n, int a, int b, int c) //source: a, destination: b
{
	if (n == 1)
	{
		if (a == 1 && b == 2)
		{
			cout << "Move from " << a << " to " << c << endl;
			cout << "Move from " << c << " to " << b << endl;
		}
		else
			cout << "Move from " << a << " to " << b << endl;
	}
	else
	{
		if (a == 1 && b == 2)
		{
			hanoi(n - 1, a, c, b);
			hanoi(n - 1, c, b, a);
			cout << "Move from " << a << " to " << c << endl;
			hanoi(n - 1, b, c, a);
			hanoi(n, c, b, a);
		}
		else
		{
			hanoi(n - 1, a, c, b);
			cout << "Move from " << a << " to " << b << endl;
			hanoi(n - 1, c, b, a);
		}
	}
}

int main()
{
	int n;
	cin >> n;
	hanoi(n, 1, 2, 3);
	return 0;
}