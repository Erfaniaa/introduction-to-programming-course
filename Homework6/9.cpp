#include <iostream>

using namespace std;

void change(int &squares, int &triangles, int &circles)
{
	int c = squares + circles;
	int s = triangles;
	int t = c;
	squares = s;
	triangles = t;
	circles = c;
}

int main()
{
	int n, x = 0, y = 2, z = 1;
	cin >> n;
	//farz shode ke dar marhaleye "yek"om yek dayere va do mosallas darim
	for (int i = 1; i < n; i++)
		change(x, y, z);
	//cout << "Squares: " << x << endl;
	cout << "Triangles: " << y << endl;
	//cout << "Circles: " << z << endl;
	return 0;
}