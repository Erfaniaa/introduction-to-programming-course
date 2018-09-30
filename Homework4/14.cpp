#include <stdio.h>

using namespace std;

char color1, color2;

int main()
{
	scanf("%c %c", &color1, &color2);
	if (color1 == 'r')
	{
		if (color2 == 'b')
			printf("Purple\n");
		if (color2 == 'y')
			printf("Orange\n");
	}
	if (color1 == 'b')
	{
		if (color2 == 'r')
			printf("Purple\n");
		if (color2 == 'y')
			printf("Green\n");
	}
	if (color1 == 'y')
	{
		if (color2 == 'b')
			printf("Green\n");
		if (color2 == 'r')
			printf("Orange\n");
	}
	return 0;
}