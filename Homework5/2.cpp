#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 20; i++)
	{
		for (int j = 1; j <= 20; j++)
		{
			cout.width(4);
			cout << i * j;
		}
		cout << endl;
	}
	return 0;
}