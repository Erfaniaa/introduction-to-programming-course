#include <iostream>

using namespace std;

bool isEqual(int a[110][110], int startRow, int startColumn, int b[110][110], int r2, int c2)
{
	for (int i = startRow; i < startRow + r2; i++)
		for (int j = startColumn; j < startColumn + c2; j++)
			if (a[i][j] != b[i - startRow][j - startColumn])
				return false;
	return true;
}

bool search(int a[110][110], int r1, int c1, int b[110][110], int r2, int c2) //search for matrix b in matrix a
{
	for (int i = 0; i <= r1 - r2; i++)
		for (int j = 0; j <= c1 - c2; j++)
			if (isEqual(a, i, j, b, r2, c2))
				return true;
	return false;
}

int main()
{
	int a[110][110], b[110][110], r1, c1, r2, c2;
	cin >> r1 >> c1;
	for (int i = 0; i < r1; i++)
		for (int j = 0; j < c1; j++)
			cin >> a[i][j];
	cin >> r2 >> c2;
	for (int i = 0; i < r2; i++)
		for (int j = 0; j < c2; j++)
			cin >> b[i][j];
	if (search(a, r1, c1, b, r2, c2))
		cout << "B is a submatrix of A." << endl;
	else
		cout << "B is not a submatrix of A." << endl;
	return 0;
}