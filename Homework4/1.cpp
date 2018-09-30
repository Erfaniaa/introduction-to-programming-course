#include <stdio.h>
#include <iostream>

using namespace std;

float r;

int main()
{
	scanf("%f", &r);
	printf("Qotre dayere: %f\n", 2 * r);
	printf("Mohite dayere: %f\n", 2 * 3.14 * r);
	printf("Masahate dayere: %f\n", 3.14 * r * r);
	return 0;
}