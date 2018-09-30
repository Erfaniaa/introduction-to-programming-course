#include <stdio.h>

using namespace std;

int x1, x2, y1, y2, ans1, ans2;
//x1, y1, ans1: bakhshe sahih
//x2, y2, ans2: bakhshe a'shari

int main()
{
	printf("Bakhshe sahihe adade avval ra vared konid:\n");
	scanf("%d", &x1);
	printf("Bakhshe a'sharie adade avval ra vared konid:\n");
	scanf("%d", &x2);
	printf("Bakhshe sahihe adade dovvom ra vared konid:\n");
	scanf("%d", &y1);
	printf("Bakhshe a'sharie adade dovvom ra vared konid:\n");
	scanf("%d", &y2);
	ans2 = (x2 + y2) % 100000;
	ans1 = (x2 + y2) / 100000 + (x1 + y1);
	printf("%d.%d\n", ans1, ans2);
	return 0;
}