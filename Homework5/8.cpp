#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	//farz: 1 <= n <= 10
	//qesmate balaye shekl:
	for (int i = 1; i <= n; i++)
	{
		//serfan baraye beham nakhordane shekl be ezaye n = 10:
		if (n == 10 && i != 10)
			cout << " ";
		for (int j = 1; j <= 2 * n - 1; j++)
		{
			int p = j - n;
			if (p < 0)
				p = -p;
			p++;
			if (p <= i)
				cout << p << " ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	//qesmate payine shekl:
	for (int i = n - 1; i >= 1; i--)
	{
		//serfan baraye beham nakhordane shekl be ezaye n = 10:
		if (n == 10)
			cout << " ";
		for (int j = 1; j <= 2 * n - 1; j++)
		{
			int p = j - n;
			if (p < 0)
				p = -p;
			p++;
			if (p <= i)
				cout << p << " ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	return 0;
}