#include <iostream>

using namespace std;

int main()
{
	int i = 2, j = 3; //ta'ine meqdare avvalieye i va j (do va se)
	do
	{
		i++; //yek vahed be i ezafe kon
		if (i % 3 == 0 || i % 5 == 0) //agar i mazrabe 3 ya 5 (ya hardo) bood, be j do vahed ezafe kon 
			j += 2;
		cout << i << " " << j << endl; //meqdare i va j ra chaap kon
	} while (i < j); //karhaye darune khatte 10 ta 13 ra anjam bede ta vaqti ke sharte i<j naqz beshe (ba tavajjoh be ziad shodane dota dotaye j)
	return 0;
}

//output:
/*
3 5
4 5
5 7
6 9
7 9
8 9
9 11
10 13
11 13
12 15
13 15
14 15
15 17
16 17
17 17
*/