	#include <iostream>
	using namespace std;

	struct node
	{
		int data; node* link;
	};

	class queue
	{
		private:
			node* front; node* rear;
		public:
			queue()
			{
				front = rear = NULL;
			}

			void addq(int item)
			{
				node* temp;
				temp = new node;
				if (temp == NULL)
					cout << endl << "Queue is full";
				temp->data = item;
				temp->link = NULL;
				if (front == NULL)
				{
					rear = front = temp;
					return;
				}
				rear->link = temp;
				rear = rear->link;
			}

			int delq()
			{
				if (front == NULL)
				{
					cout << endl << "Queue is empty";
					return NULL;
				}
				node* temp;
				int item;

				item = front->data;
				temp = front;
				front = front->link;
				delete temp;
				return item;
			}

			~queue()
			{
				if (front == NULL)
				{
					return;
				}
				node* temp;
				while (front != NULL)
				{
					temp = front;
					front = front->link;
					delete temp;
				}
			}
	};

	int main()
	{
		queue a;
		for (int j = 11; j <= 17; j++)
		{
			a.addq(j);
		}

		int i;
		i = a.delq();
		cout << "\nItem extracted = " << i;

		i = a.delq();
		cout << "\nItem extracted = " << i;

		i = a.delq();
		cout << "\nItem extracted = " << i;
	}
