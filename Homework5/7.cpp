#include <iostream>

using namespace std;

int main()
{
	int x;
	while (cin >> x && x)
	{
		if (x % 1000 == 0)
		{
			int p = 1, ans = 0;
			while (x)
			{
				ans += p * (x % 10);
				p *= 2;
				x /= 10;
			}
			cout << "Bar 8 bakhshpazir ast. Mabnaye 10: " << ans << endl;
		}
		else
			cout << "Bar 8 bakhshpazir nist." << endl;	
	}
	cout << "Sefr vared shod. Tamam!" << endl;
	return 0;
}