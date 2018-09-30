#include <iostream>

using namespace std;

int main()
{
	int n, len = 1, x = 0, y = 0;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		if (i % 4 == 1)
			x += len;
		if (i % 4 == 2)
			y += len;
		if (i % 4 == 3)
			x -= len;
		if (i % 4 == 0)
			y -= len;
		if (i % 2 == 0)
			len++;
	}
	cout << "(" << x << "," << y << ")" << endl;
	return 0;
}