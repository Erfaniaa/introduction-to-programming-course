#include <iostream>

using namespace std;

int main()
{
	int x, temp = 0;
	for (int i = 1; i <= 10; i++)
	{
		cin >> x;
		temp ^= i;
		temp ^= x;
	}
	cout << temp << endl;
	return 0;
}