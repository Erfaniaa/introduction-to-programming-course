#include <iostream>

using namespace std;

int main()
{
	int x, y, x2 = 0, y2 = 0;
	scanf("%d.%d", &x, &y);
	while (y)
	{
		y2 = 10 * y2 + (y % 10);
		y /= 10;
	}
	while (x)
	{
		x2 = 10 * x2 + (x % 10);
		x /= 10;
	}
	printf("%d.%d\n", y2, x2);
	return 0;
}