#include <iostream>

using namespace std;

int main()
{
	int num, sal, maqta, reshte;
	int cSal, cMaqta, cReshte;
	cout << "Shomare daneshjuyi ra vared konid:" << endl;
	cin >> num;
	cout << "Saale vorud ra vared konid:" << endl;
	cin >> sal;
	cout << "Codee maqta'e tahsili ra vared konid:" << endl;
	cin >> maqta;
	cout << "Codee reshte ra vared konid:" << endl;
	cin >> reshte;
	if (num < 10000000 || num >= 100000000)
		cout << "Shomare daneshjuyie namo'tabar ast!" << endl;
	else
	{
		cSal = num / 1000000 % 100;
		cMaqta = num / 100000 % 10;
		cReshte = num / 1000 % 100;
		if (cSal != sal || cMaqta != maqta || cReshte != reshte)
			cout << "Shomareye daneshjuyi namo'tabar ast!" << endl;
		else
		{
			int cnt = 0;
			while (num)
			{
				cnt += num % 2;
				num /= 2;
			}
			if (cnt % 2 == 0)
				cout << "Shomareye daneshjuyi mo'tabar ast!" << endl;
			else
				cout << "Shomareye daneshjuyi namo'tabar ast!" << endl;
		}
	}
	return 0;
}