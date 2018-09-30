#include <stdio.h>

using namespace std;

int num;

int main()
{
	scanf("%d", &num);
	if (num < 0)
		num = -num;
	printf("%d", num);
	return 0;
}