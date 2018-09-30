#include <iostream>
#include <cstdlib>

using namespace std;

int getIdx(int a[], int row, int column, int size)
{
	return size * row + column; //0-based
}

void randomize(int a[], int rows, int columns)
{
	srand(time(NULL));
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			a[getIdx(a, i, j, columns)] = rand() % (rows * columns) + 1;
}

void printMatrix(int a[], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout.width(4);
			cout << a[getIdx(a, i, j, columns)];
		}
		cout << endl;
	}
}

int main()
{
	int rows, columns, a[1010];
	cin >> rows >> columns;
	randomize(a, rows, columns);
	printMatrix(a, rows, columns);
	return 0;
}