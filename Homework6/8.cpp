#include <iostream>

using namespace std;

void printPos(double t)
{
	cout << "Pos.x: " << -0.31 * t * t + 7.2 * t + 28 << endl;
	cout << "Pos.y: " << +0.22 * t * t - 9.1 * t + 30 << endl;
}

void printVelocity(double t)
{
	cout << "v.x: " << -0.31 * t * 2 + 7.2 << endl;
	cout << "v.y: " << +0.22 * t * 2 - 9.1 << endl;
}

void printAccel(double t)
{
	cout << "a.x: " << -0.31 * 2 << endl;
	cout << "a.y: " << +0.22 * 2 << endl;
}

int main()
{
	double t;
	cin >> t;
	printPos(t);
	cout << endl;
	printVelocity(t);
	cout << endl;
	printAccel(t);
	return 0;
}