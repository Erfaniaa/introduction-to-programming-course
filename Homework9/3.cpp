#include <iostream>
#include <cstring>

using namespace std;

void bigSum(char* a, char* b, char* c)
{
	while (strlen(a) < strlen(b))
	{
		for (int i = strlen(a); i >= 0; i--)
			a[i + 1] = a[i];
		a[0] = '0';
	}
	while (strlen(a) > strlen(b))
	{
		for (int i = strlen(b); i >= 0; i--)
			b[i + 1] = b[i];
		b[0] = '0';
	}
	strcpy(c, a);
	int carry = 0;
	for (int i = strlen(a) - 1; i >= 0; i--)
	{
		c[i] = ((carry + a[i] - 48 + b[i] - 48) % 10) + 48;
		carry = (carry + a[i] - 48 + b[i] - 48) / 10;
	}
	if (carry)
	{
		for (int i = strlen(c); i >= 0; i--)
			c[i + 1] = c[i];
		c[0] = carry + 48;
	}
}

void bigMul(char* a, char* b, char* c)
{
	c[0] = '0';
	c[1] = 0;
	for (int i = strlen(b) - 1; i >= 0; i--)
	{
		char tmp[1010];
		strcpy(tmp, a);
		int carry = 0;
		for (int j = strlen(a) - 1; j >= 0; j--)
		{
			tmp[j] = (((b[i] - 48) * (a[j] - 48) + carry) % 10) + 48;
			carry = ((b[i] - 48) * (a[j] - 48) + carry) / 10;
		}
		if (carry)
		{
			for (int j = strlen(tmp); j >= 0; j--)
				tmp[j + 1] = tmp[j];
			tmp[0] = carry + 48;
		}
		for (int j = 1; j <= strlen(b) - 1 - i; j++)
			strcat(tmp, "0");
		char c2[1010];
		strcpy(c2, c);
		bigSum(c2, tmp, c);
	}
}

int main()
{
	int n = 100;
	//cin >> n;
	cout << n << "! = ";
	char ans[1010], tmp[1010], a[10];
	ans[0] = '1';
	ans[1] = 0;
	for (int i = 1; i <= n; i++) //n < 1000
	{
		a[1] = a[2] = a[3] = 0;
		if (i < 10)
			a[0] = i + 48;
		else if (i < 100)
		{
			a[0] = i / 10 + 48;
			a[1] = i % 10 + 48;
		}
		else if (i < 1000)
		{
			a[0] = i / 100 + 48;
			a[1] = (i / 10) % 10 + 48;
			a[2] = i % 10 + 48;
		}
		strcpy(tmp, ans);
		bigMul(tmp, a, ans);
	}
	cout << ans << endl;
	return 0;
}