#include <iostream>

using namespace std;

double solve(double &x, double &y, double a1, double b1, double c1, double a2, double b2, double c2) //(2 x 2)
{
	if (a2 * b1 == a1 * b2)
		return 1;
	else
	{
		double det = a2 * b1 - a1 * b2;
		x = (b2 * c1 - b1 * c2) / -det;
		y = (a1 * c2 - a2 * c1) / -det;
		return 0;
	}
}

/*
Equations form:
c11 * x1 + c12 * x2 + c13 * x3 + ... + c1n * xn = d1
c21 * x1 + c22 * x2 + c23 * x3 + ... + c2n * xn = d2
c31 * x1 + c32 * x2 + c33 * x3 + ... + c3n * xn = d3
.
.
.
cn1 * x1 + cn2 * x2 + cn3 * x3 + ... + cnn * xn = dn
*/

double ansX[101], c[101][101], d[101];
//answers array, coefficients array, equation value's array

int solve(int n, int row) //(n x n)
{
	if (row == 1)
	{
		if (c[1][1] == 0)
			return 1;
		ansX[1] = d[1] / c[1][1];
	}
	else
	{
		if (c[row][row] == 0)
		{
			bool flag = false;
			for (int j = 1; j <= row - 1; j++)
				if (c[j][row] != 0)
				{
					flag = true;
					for (int i = 1; i <= row; i++)
						c[row][i] += c[j][i];
					d[row] += d[j];
					break;
				}
			if (!flag)
				return 1;
		}
		for (int j = 1; j <= row - 1; j++)
		{
			for (int i = 1; i <= row - 1; i++)
				c[j][i] -= c[row][i] * c[j][row] / c[row][row];
			d[j] -= c[j][row] * d[row] / c[row][row];
		}
		//delete the last row and the last column of the matrix and solve the problem recursively
		if (solve(n, row - 1))
			return 1;
		double temp = d[row];
		for (int i = 1; i <= row - 1; i++)
			temp -= ansX[i] * c[row][i];
		temp /= c[row][row];
		ansX[row] = temp;
	}
	return 0;
}

int main()
{
	double a1, b1, c1, a2, b2, c2;
	double x, y;
	cout << "Equation form: ax+by=c" << endl;
	cout << "Enter coeffecients of the first equation:" << endl;
	cin >> a1 >> b1 >> c1;
	cout << "Enter coeffecients of the second equation:" << endl;
	cin >> a2 >> b2 >> c2;
	if (solve(x, y, a1, b1, c1, a2, b2, c2))
		cout << "Zero or infinite number of answers!" << endl;
	else
		cout << "Answers: " << x << " " << y << endl << endl;
	/* Emtiazi (n x n): */
	int n;
	cout << "Enter n:" << endl;
	cin >> n;
	cout << "Enter coeffecients:" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cin >> c[i][j]; //c[i][1] * x_1 + c[i][2] * x_2 + c[i][3] * x_3 + ... + c[i][n] * x_n = d[n]
		cin >> d[i];
	}
	if (solve(n, n))
		cout << "Zero or infinite number of answers!" << endl;
	else
	{
		cout << "Answers: ";
		for (int i = 1; i <= n; i++)
			cout << ansX[i] << " ";
	}
	return 0;
}