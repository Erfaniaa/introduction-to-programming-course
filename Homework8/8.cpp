#include <iostream>

using namespace std;

int c[3][3];

void sum(int a[3][3], int b[3][3])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];
}

void mul(int a[3][3], int b[3][3])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < 3; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
}

void printMatrix(int a[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	int a[3][3], b[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> b[i][j];
	sum(a, b);
	cout << "Sum:" << endl;
	printMatrix(c);
	mul(a, b);
	cout << "Mul:" << endl;
	printMatrix(c);
	return 0;
}