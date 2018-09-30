#include <iostream>
#include <cstdlib>

using namespace std;

double Cos(double x)
{
	double num = 1, ret = 1;
	double fact = 1;
	for (int i = 1; i < 1000; i++)
	{
		num *= -x * x;
		fact *= (2 * i - 1) * (2 * i);
		ret += num / fact; 
	}
	return ret;
}

double Tan(double x)
{
	return Cos(3.141592653 / 2 - x) / Cos(x); //tan(x) = sin(x) / cos(x) = cos(Pi / 2 - x) / cos(x)
}

int power(int a, int b)
{
	int ret = 1;
	for (int i = 1; i <= b; i++)
		ret *= a;
	return ret;
}

int fact(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
		ret *= i;
	return ret;
}

int main()
{
	char ch;
	double mem = 0, tmp, x;
	while (cout << "Enter a character: " && cin >> ch && ch != '$')
	{
		if (ch == 'S' || ch == 's')
		{
			cout << "Enter a number: ";
			cin >> mem;
		}
		if (ch == 'C' || ch == 'c')
		{
			system("clear"); //works on Linux terminal
			mem = 0;
		} 
		if (ch == '!')
		{
			if (mem < 0)
			{
				cout << "Error!" << endl << endl;
				continue;
			}
			mem = fact(mem);
		}
		if (ch == 'f' || ch == 'F')
		{
			mem = (int)mem;
		}
		if (ch == 'T' || ch == 't')
		{
			if (Cos(mem) == 0)
			{
				cout.precision(4);
				cout << "Tan is not defined for " << fixed << mem << endl << endl;
				continue;
			}
			mem = Tan(mem);
		}
		if (ch == 'p' || ch == 'P')
		{
			cout << "Enter a number: ";
			cin >> x;
			mem = power(mem, (int)x);
		}
		if (ch == '%')
		{
			cout << "Enter a number: ";
			cin >> x;
			if (x == 0)
			{
				cout << "Error: Division by zero" << endl << endl;
				continue;
			}
			mem = (int)mem % (int)x;
		}
		if (ch == '+')
		{
			cout << "Enter a number: ";
			cin >> x;
			mem += x;
		}
		if (ch == '-')
		{
			cout << "Enter a number: ";
			cin >> x;
			mem -= x;
		}
		if (ch == '*')
		{
			cout << "Enter a number: ";
			cin >> x;
			mem *= x;
		}
		if (ch == '/')
		{
			cout << "Enter a number: ";
			cin >> x;
			if (x == 0)
			{
				cout << "Error: Division by zero" << endl << endl;
				continue;
			}
			mem /= x;
		}
		cout.precision(4);
		cout << "The calculated number is: " << fixed << mem << endl << endl;
	}
	return 0;
}