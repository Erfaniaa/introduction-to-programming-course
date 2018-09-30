#include <stdio.h>

using namespace std;

int x, y;

int main()
{
	scanf("%d%d", &x, &y);
	x = x + y;
	y = x - y; //(x + y) - y = x
	x = x - y; //(x + y) - x = y
	printf("%d %d", x, y);
	return 0;
}