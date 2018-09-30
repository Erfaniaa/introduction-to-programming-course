#include <stdio.h>

using namespace std;

int x1, x2, x3, x4, x5, maxNum1, maxNum2;
//maxNum1: bozorgtarin adad
//maxNum2: dovvomin bozorgtarin adad (mitavanad ba bozorgtarin adad barabar ham bashad)

int main()
{
	scanf("%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5); //chon te'dad sabet (5ta) bood, bedune estefade az while va for code ro neveshtam.
	maxNum1 = -(1 << 31); //-INF
	maxNum2 = -(1 << 31); //-INF
	if (x1 >= maxNum1)
	{
		maxNum2 = maxNum1;
		maxNum1 = x1;
	}
	else if (x1 >= maxNum2)
		maxNum2 = x1;
	if (x2 >= maxNum1)
	{
		maxNum2 = maxNum1;
		maxNum1 = x2;
	}
	else if (x2 >= maxNum2)
		maxNum2 = x2;
	if (x3 >= maxNum1)
	{
		maxNum2 = maxNum1;
		maxNum1 = x3;
	}
	else if (x3 >= maxNum2)
		maxNum2 = x3;
	if (x4 >= maxNum1)
	{
		maxNum2 = maxNum1;
		maxNum1 = x4;
	}
	else if (x4 >= maxNum2)
		maxNum2 = x4;
	if (x5 >= maxNum1)
	{
		maxNum2 = maxNum1;
		maxNum1 = x5;
	}
	else if (x5 >= maxNum2)
		maxNum2 = x5;
	printf("The first maximum: %d ", maxNum1);
	printf("The second maximum: %d", maxNum2);
	return 0;
}