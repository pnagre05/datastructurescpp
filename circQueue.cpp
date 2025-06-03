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
				if ((rear == MAX - 1 && front == 0) || (rear + 1 == front))
				{
					cout << endl << "Queue is full";
					return;
				}
				if (rear == MAX - 1)
					rear = 0;
				else
					rear++;
				arr[rear] = x;
				if (front == -1)
					front = 0;
			}

			int del()
			{
				int d;
				if (front == -1)
				{
					cout << endl << "Queue is Empty";
					return NULL;
				}
				else
				{
					d = arr[front];
					if (front == rear)
					{
						front = -1;
						rear = -1;
					}
					else
					{
						if (front == MAX - 1)
							front = 0;
						else
							front++;
					}
					return d;
				}
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
