#include <stdio.h>

using namespace std;

int num;

int main()
{
	scanf("%d", &num);
	if ((num != 0) && !(num & (num - 1)))
		printf("Tavani az 2 hast!");
	else
		printf("Tavani az 2 nist!");
	return 0;
}