#include <iostream>

using namespace std;

inline void printTwoDigits(int x)
{
	if (x < 10)
		cout << 0 << x;
	else
		cout << x % 100;
}

inline void printTime(int seconds)
{
	printTwoDigits(seconds / 3600);
	cout << ":";
	printTwoDigits(seconds / 60 % 60);
	cout << ":";
	printTwoDigits(seconds % 60);
	cout << endl;
}

inline void wait()
{
	int tmp = time(NULL);
	while (time(NULL) == tmp)
		;
}

int main()
{
	int t, timer = 0;
	cin >> t;
	int start = time(NULL);
	system("clear"); //works on Linux terminal
	printTime(time(NULL) - start);
	while (timer < t)
	{
		wait();
		timer = time(NULL) - start;
		system("clear"); //works on Linux terminal
		printTime(timer);
	}
	cout << "Finished!" << endl;
	return 0;
}