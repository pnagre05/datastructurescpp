	//stack implementation
	#include <iostream>
	using namespace std;

	const int MAX = 10;

	class queue
	{
		private:
			int arr[MAX];
			int front, rear;
		public:
			queue()
			{
				front = -1;
				rear = -1;
			}

			void addq(int x)
			{
				if (rear == MAX - 1)
				{
					cout << endl << "Queue is full";
					return;
				}
				rear++;
				arr[rear] = x;
				if (front == -1)
				{
					front = 0;
				}
			}

			int del()
			{
				int data;
				if (front == -1)
				{
					cout << endl << "Queue is empty";
					return NULL;
				}
				data = arr[front];
				if (front == rear)
				{
					front = rear = -1;
				}
				else
				{
					front++;
				}
				return data;
			}
	};

	int main()
	{
		queue a;
		for (int i = 11; i <= 21; i++)
		{
			a.addq(i);
		}

		int i;
		i= a.del();
		cout << endl << "Item deleted = " << i;

		i = a.del();
		cout << endl << "Item deleted = " << i;


		i = a.del();
		cout << endl << "Item deleted = " << i;

		i = a.del();
		cout << endl << "Item deleted = " << i;


	}
