#include <stdio.h>

using namespace std;

int a, b, carry, sum;

int main()
{
	scanf("%d%d", &a, &b);
	sum = (a | b) & ~(a & b);
	carry = a & b;
	printf("Sum: %d ", sum);
	printf("Carry: %d", carry);
	return 0;
}