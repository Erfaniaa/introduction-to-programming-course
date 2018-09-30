#include <iostream>
#include <cstdlib>

using namespace std;

void mySwap(float &x, float &y)
{
	float temp = x;
	x = y;
	y = temp;
}

void swapIdx(float a[], int &sz, int idx1, int idx2)
{
	if (idx1 >= 1 && idx1 <= sz && idx2 >= 1 && idx2 <= sz)
		mySwap(a[idx1], a[idx2]);
}

void sort(float a[], int &sz)
{
	for (int i = 1; i <= sz; i++)
	{
		int minIdx = i;
		for (int j = i + 1; j <= sz; j++)
			if (a[j] < a[minIdx])
				minIdx = j;
		mySwap(a[minIdx], a[i]);
	}
}

void search(float a[], int &sz, int x)
{
	for (int i = 1; i <= sz; i++)
		if (a[i] == x)
			cout << i << " ";
	cout << endl;
}

void reverse(float a[], int &sz)
{
	for (int i = 1; i <= sz / 2; i++)
		mySwap(a[i], a[sz - i + 1]);
}

void shiftLeft(float a[], int &sz, int left, int right)
{
	left = max(1, left);
	right = min(sz, right);
	for (int i = left; i <= right; i++)
		a[i - 1] = a[i];
}

void shiftRight(float a[], int &sz, int left, int right)
{
	left = max(1, left);
	right = min(sz, right);
	for (int i = right; i >= left; i--)
		a[i + 1] = a[i];
}

void insertAtFirst(float a[], int &sz, int x)
{
	shiftRight(a, sz, 1, sz);
	sz++;
	a[1] = x; 
}

void insertAtPos(float a[], int &sz, int x, int pos)
{
	shiftRight(a, sz, pos + 1, sz);
	sz++;
	a[pos + 1] = x; 
}

void removeElementAtPos(float a[], int &sz, int pos)
{
	shiftLeft(a, sz, pos + 1, sz);
	sz--;
}

void removeElements(float a[], int &sz, int x)
{
	for (int i = 1; i <= sz; i++)
		if (a[i] == x)
		{
			shiftLeft(a, sz, i + 1, sz);
			sz--;
		}
}

void randomShuffle(float a[], int &sz)
{
	for (int i = sz; i >= 1; i--)
		mySwap(a[i], a[1 + rand() % i]);
}

void print(float a[], int &sz)
{
	for (int i = 1; i <= sz; i++)
		cout << a[i] << " ";
	cout << endl;
}

int getSize(float a[], int &sz)
{
	return sz; //:|
}

void showMenu()
{
	cout << "Menu:" << endl;
	cout << "a) Sort" << endl;
	cout << "b) Search" << endl;
	cout << "c) Reverse" << endl;
	cout << "d) Insert at first" << endl;
	cout << "e) Insert at pos" << endl;
	cout << "f) Remove element at pos" << endl;
	cout << "g) Remove elements by value" << endl;
	cout << "h) Random shuffle" << endl;
	cout << "i) Swap two indices" << endl;
	cout << "j) Print size" << endl;
	cout << "k) Print elements" << endl;
	cout << "q) Quit" << endl;
}

#define get(x) cout << "Enter " << #x << ": ", cin >> x;

int n, x, p, q;
char ch;
float arr[5010];

int main()
{
	get(n);
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	showMenu();
	while (cin >> ch && ch != 'q')
	{
		if (ch == 'a')
			sort(arr, n);
		if (ch == 'b')
		{
			get(x);
			search(arr, n, x);
		}
		if (ch == 'c')
			reverse(arr, n);
		if (ch == 'd')
		{
			get(x);
			insertAtFirst(arr, n, x);
		}
		if (ch == 'e')
		{
			get(x);
			get(p);
			insertAtPos(arr, n, x, p);
		}
		if (ch == 'f')
		{
			get(p);
			removeElementAtPos(arr, n, p);
		}
		if (ch == 'g')
		{
			get(x);
			removeElements(arr, n, x);
		}
		if (ch == 'h')
			randomShuffle(arr, n);
		if (ch == 'i')
		{
			get(p);
			get(q);
			swapIdx(arr, n, p, q);
		}
		if (ch == 'j')
			cout << getSize(arr, n) << endl;
		if (ch == 'k')
			print(arr, n);
		showMenu();
	}
	cout << "Finished." << endl;
	return 0;
}