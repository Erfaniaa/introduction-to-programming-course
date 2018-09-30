#include <iostream>

using namespace std;

int main()
{
	char teamName[255][1010];
	cin.getline(teamName['h'], 1010);
	cin.getline(teamName['a'], 1010);
	int n, t, num, a[255][1010], ans2[1010], ans3[1010], cnt = 0;
	char team, color, ans1[1010];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> t >> team >> num >> color;
		if (a[team][num] || color == 'r')
		{
			ans1[cnt] = team;
			ans2[cnt] = num;
			ans3[cnt++] = t;
		}
		else
			a[team][num] = 1;
	}
	for (int i = 0; i < cnt; i++)
		cout << teamName[ans1[i]] << " " << ans2[i] << " " << ans3[i] << endl;
	return 0;
}