#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int myMoney = 100, gameMoney = 500;
	srand(time(NULL));
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int selectedColor = rand() % 2; //0 for red and 1 for black
		int selectedNum = rand() % 38;
		int color = rand() % 2;
		int num = rand() % 38;
		if (selectedColor == color && selectedNum == num) //win a round
		{
			myMoney += gameMoney;
			gameMoney = 100;
		}
		else
		{
			gameMoney += myMoney;
			myMoney = 100;
		}
		cout << "Now my money is: " << myMoney << endl;
	}
	cout << "Finished!" << endl;
	//cout << "Now my money is: " << myMoney;
	return 0;
}