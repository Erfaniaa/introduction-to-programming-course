#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	//agar adadha be tartib dade nashode bashan, mitunim sorteshun konim avval
	//va ba'desh check konim bebinim adadha tashkile donbaleye hendesi midan ya na
	/*
	for (int i = 1; i <= 3; i++)
	{
		if (abs(d) < abs(c))
			swap(d, c);
		if (abs(c) < abs(b))
			swap(c, b);
		if (abs(b) < abs(a))
			swap(b, a);
	}
	cout << a << " " << b << " " << c << " " << d << endl;
	*/
	if (!a && !b && !c && !d)
		cout << "Jomle omumi: 0" << endl;
	else if (!a || !b || !c || !d)
		cout << "Tasa'ode hendesi nist." << endl;
	else
	{
		double q = b / a;
		if (q == c / b && q == d / c)
			cout << a << "*(" << q << ")^(n-1)" << endl; //^ haman tavan ast!
		else
			cout << "Tasa'ode hendesi nist." << endl;
	}
	return 0;
}