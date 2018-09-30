#include <iostream>

using namespace std;

const int capacity = 100000;
int st[capacity], size;

void push(int x)
{
	if (size < capacity)
		st[size++] = x;
}

int pop()
{
	if (size > 0)
		return st[--size];
	else
		return -1; //error: stack is empty
}

void print()
{
	for (int i = 0; i < size; i++)
		cout << st[i] << " ";
	cout << endl;
}

int main()
{
	int n;
	cout << "Enter the number of queries: ";
	cin >> n;
	while (n--)
	{
		int q, num;
		cout << "Pop(1) or push(0)? ";
		cin >> q;
		if (q == 0) //push
		{
			cout << "Enter a number: ";
			cin >> num;
			push(num);
		}
		if (q == 1) //pop
		{
			if (size > 0)
				cout << "The top element, " << pop() << " popped." << endl;
			else
				cout << "Error: stack is empty!" << endl;
		}
		cout << "Stack elements: ";
		print();
	}
	return 0;
}