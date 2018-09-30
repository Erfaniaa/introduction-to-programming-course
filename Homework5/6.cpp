#include <iostream>

using namespace std;

int main()
{
	int a, b, mul;
	cin >> a >> b;
	mul = a * b;
	while (a)
	{
		b %= a;
		swap(a, b);
	}
	//ke mim mim = haselzarb / be mim mim :D
	//b = be mim mim (be raveshe nardebani ya oqlidos mohasebe shode)
	cout << mul / b;
	return 0;
}