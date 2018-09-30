#include <stdio.h>

using namespace std;

int n, rem;

int main()
{
	scanf("%d", &n);
	n--;
	rem = (n + 3) % 7;
	if (rem == 6)
		printf("jom'e\n");
	else
	{
		if (rem > 0)
			printf("%d", rem);
		printf("shanbe\n");
	}
	return 0;
}