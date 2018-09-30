#include <stdio.h>
#include <cmath>

using namespace std;

float px1, py1, px2, py2, px3, py3;

int main()
{
	scanf("%f%f", &px1, &py1);
	scanf("%f%f", &px2, &py2);
	scanf("%f%f", &px3, &py3);
	float dis1 = sqrt((px1 - px2) * (px1 - px2) + (py1 - py2) * (py1 - py2));
	float dis2 = sqrt((px3 - px2) * (px3 - px2) + (py3 - py2) * (py3 - py2));
	float dis3 = sqrt((px1 - px3) * (px1 - px3) + (py1 - py3) * (py1 - py3));
	if (dis1 + dis2 == dis3 || dis1 + dis3 == dis2 || dis2 + dis3 == dis1)
		printf("Rooye yek khat hastand!\n");
	else
		printf("Rooye yek khat nistand!\n");
	if (dis1 <= dis2 && dis1 <= dis3)
		printf("Noqteye avval va noqteye dovvom");
	else if (dis2 <= dis3)
		printf("Noqteye dovvom va noqteye sevvom");
	else
		printf("Noqteye avval va noqteye sevvom");
	printf(" beham nazdiktarand!\n");
	return 0;
}