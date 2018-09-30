#include <iostream>

using namespace std;

int getState(int num) //hash the 7-segment state :D
{
	//           6543210
	if (num == 0)
		return 0b1110111;
	if (num == 1)
		return 0b0100100;
	if (num == 2)
		return 0b1011101;
	if (num == 3)
		return 0b1101101;
	if (num == 4)
		return 0b0101110;
	if (num == 5)
		return 0b1101011;
	if (num == 6)
		return 0b1111011;
	if (num == 7)
		return 0b0100101;
	if (num == 8)
		return 0b1111111;
	if (num == 9)
		return 0b1101111;
	//           6543210
	return 0;
}

bool isActive(int state, int i)
{
	return state & (1 << i);
}

void printCount(char ch, int cnt)
{
	for (int i = 1; i <= cnt; i++)
		cout << ch;
}

void printRow(int digit, int rowNum, int size)
{
	int state = getState(digit);
	for (int i = 0, j = 0; i <= 6; i += 3, j += size + 1)
		if (rowNum == j)
		{
			cout << " ";
			printCount(isActive(state, i) ? '_' : ' ', size);
			cout << "  ";
			return;
		}
	cout << (((rowNum <= size && isActive(state, 1)) || (rowNum > size && isActive(state, 4))) ? '|' : ' ');
	printCount(' ', size);
	cout << (((rowNum <= size && isActive(state, 2)) || (rowNum > size && isActive(state, 5))) ? '|' : ' ');
	cout << " ";
}

void printAll(int num, int size)
{
	int num2 = 0, zeros = 0;
	bool flag = true;
	while (num)
	{
		num2 = num2 * 10 + (num % 10);
		if (num % 10)
			flag = false;
		num /= 10;
		if (flag)
			zeros++;
	}
	for (int l = 0; l <= 2 * size + 2; l++)
	{
		num = num2;
		while (num2)
		{
			printRow(num2 % 10, l, size);
			num2 /= 10;
		}
		for (int i = 1; i <= zeros; i++)
			printRow(0, l, size);
		cout << endl;
		num2 = num;
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	printAll(a, b);
	return 0;
}