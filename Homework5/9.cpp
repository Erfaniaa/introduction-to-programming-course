#include <iostream>

using namespace std;

int main()
{
	int n;
	//baraye cheshmak zadan (emtiazi):
	cout << "\033[5;32;40m";
	//range text ham sabz mishe.
	//tooye gnome-terminale man kar nakard. tooye xterm kar mikone vali.
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i - 1; j++)
			cout << " ";
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = 1; j <= i - 1; j++)
			cout << " ";
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	cout << "\033[m";
	return 0;
}