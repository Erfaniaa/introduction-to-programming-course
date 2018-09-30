#include <iostream>

using namespace std;

char p[20];

void printPermutations(int n, int k, int mask) //n <= 9
{
	if (k)
	{
		for (int i = 0; i < n; i++)
			if (!(mask & (1 << i)))
			{
				p[k - 1] = (char)('a' + i);
				printPermutations(n, k - 1, mask | (1 << i));
			}
	}
	else
	{
		for (int i = n - 1; i >= 0; i--)
			cout << p[i];
		cout << endl;
	}
}

int main()
{
	int n = 4;
	//cin >> n;
	printPermutations(n, n, 0);
	return 0;
}