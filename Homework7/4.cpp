#include <iostream>

using namespace std;

void tajzie(int x)
{
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0)
		{
			int cnt = 0;
			while (x % i == 0)
			{
				cnt++;
				x /= i;
			}
			cout << i << "^" << cnt;
			if (x != 1)
			{
				cout << " * " ;
				tajzie(x);
			}
			return;
		}
	cout << x << "^1"; 
}

int main()
{
	int num;
	cin >> num;
	if (num == 1)
		cout << 1 << endl;
	else
		tajzie(num);
	return 0;
}