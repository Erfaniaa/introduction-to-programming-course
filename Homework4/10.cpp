#include <stdio.h>

using namespace std;

int x1, x2, x3, x4, x5, minNum, maxNum;

int main()
{
	scanf("%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5); //chon te'dad sabet (5ta) bood, bedune estefade az while va for code ro neveshtam.
	minNum = x1;
	if (minNum > x2)
		minNum = x2;
	if (minNum > x3)
		minNum = x3;
	if (minNum > x4)
		minNum = x4;
	if (minNum > x5)
		minNum = x5;
	maxNum = x1;
	if (maxNum < x2)
		maxNum = x2;
	if (maxNum < x3)
		maxNum = x3;
	if (maxNum < x4)
		maxNum = x4;
	if (maxNum < x5)
		maxNum = x5;
	printf("Minimum: %d ", minNum);
	printf("Maximum: %d", maxNum);
	return 0;
}