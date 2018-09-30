#include <iostream>

using namespace std;

void mySwap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void sortArrays(int a[], int b[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (b[i] < b[j])
			{
				mySwap(b[i], b[j]);
				mySwap(a[i], a[j]);
			}
}

void printArrays(int a[], int b[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << ": " << b[i] << endl;
}

int main()
{
	int n = 20, num[110], score[110];
	//cin >> n;
	for (int i = 0; i < n; i++)
		cin >> num[i] >> score[i];
	sortArrays(num, score, n);
	printArrays(num, score, n);
	return 0;
}