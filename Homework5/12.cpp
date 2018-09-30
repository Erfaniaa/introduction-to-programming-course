#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, c, x, y, r;
	cout << "Zarayebe mo'adeleye khatte ax+by+c=0 ra vared konid (a, b, c):" << endl;
	cin >> a >> b >> c;
	cout << "Mokhtasate markaze dayere ra vared konid (x, y):" << endl;
	cin >> x >> y;
	cout << "Sho'ae dayere ra vared konid (r):" << endl;
	cin >> r;
	double dis = (a * x + b * y + c) / sqrt(a * a + b * b);
	if (dis < 0)
		dis = -dis;
	double dif = dis - r;
	if (dif < 0)
		dif = -dif;
	if (dif < 1e-5)
		cout << "Khat va dayere momas hastand." << endl;
	else if (dis < r)
		cout << "Khat va dayere moteqate hastand." << endl;
	else
		cout << "Khat va dayere eshteraki baham nadarand." << endl;
	return 0;
}