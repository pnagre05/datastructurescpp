//stack implementation
#include <iostream>
using namespace std;

const int MAX = 10;

class stack
{
	private:
		int arr[MAX];
		int top;
	public:
		stack()
		{
			top = -1;
		}

		void push(int item)
		{
			if (top == MAX - 1)
			{
				cout << endl << "Stack is full";
				return;
			}
			top++;
			arr[top] = item;
		}
		int pop()
		{
			if (top == -1)
			{
				cout << endl << "Stack is empty";
				return NULL;
			}

			int data = arr[top];
			top--;

			return data;
		}
};

int main()
{
	stack s;
	for (int i = 11; i <= 21; i++)
	{
		s.push(i);
	}

	int l;
	l = s.pop();
	cout << endl << "Item popped = " << l;

	l = s.pop();
	cout << endl << "Item popped = " << l;

	l = s.pop();
	cout << endl << "Item popped = " << l;

	l = s.pop();
	cout << endl << "Item popped = " << l;

	return 0;
}
