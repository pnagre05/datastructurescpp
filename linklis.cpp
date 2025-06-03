	//linkedlist implementation
	#include <iostream>
	using namespace std;

	class linklist
	{
		private:
			struct node
			{
				int data;
				node* link;
			} *p;
		public:
			linklist();
			void append(int num);
			void addatbeg(int num);
			void addafter(int c, int num);
			void del(int num);
			void display();
			int count();
			~linklist();
	};

	linklist::linklist()
	{
		p = NULL;
	}

	void linklist::append(int num)
	{
		node* q, * t;

		if (p == NULL)
		{
			p = new node;
			p->data = num;
			p->link = NULL;
		}
		else
		{
			q = p;
			while (q->link != NULL)
				q = q->link;
			t = new node;
			t->data = num;
			t->link = NULL;
			q->link = t;
		}
	}

	void linklist::addatbeg(int num)
	{
		node* q;

		q = new node;
		q->data = num;
		q->link = p;
	}

	void linklist::addafter(int c, int num)
	{
		node* q, * t;
		int i;
		for (i = 0, q = p; i < c; i++)
		{
			q = q->link;

			if (q == NULL)
			{
				cout << endl << "There are less than " << c << " elements.";
				return;
			}
		}
		t = new node;
		t->data = num;
		t->link = q->link;
		q->link = t;
	}

	void linklist::del(int num)
	{
		node* q, * r;
		q = p;
		if (q->data == num)
		{
			p = q->link;
			delete q;
			return;
		}
		r = q;
		while (q != NULL)
		{
			if (q->data == num)
			{
				r->link = q->link;
				delete q;
				return;
			}
			r = q;
			q = q->link;
		}

		cout << endl << "Element " << num << " not found";
	}

	void linklist::display()
	{
		node* q;
		cout << endl;

		for (q = p; q != NULL; q = q->link)
		{
			cout << endl << q->data;
		}
	}

	int linklist::count()
	{
		node* q; 
		int c = 0;
		for (q = p; q != NULL; q = q->link)
		{
			c++;
		}
		return c;
	}

	linklist::~linklist()
	{
		node* q;
		if (p == NULL)
		{
			return;
		}
		while (p != NULL)
		{
			q = p->link;
			delete p;
			p = q;
		}
	}

	int main() 
	{
		linklist ll;
		cout << endl << "Num of elements in list = " << ll.count();
		ll.append(11);
		ll.append(22);
		ll.append(33);
		ll.append(44);
		ll.append(55);
		ll.append(66);

		ll.addatbeg(100);
		ll.addatbeg(200);
		ll.addatbeg(300);

		ll.addafter(3, 333);
		ll.addafter(6, 444);

		ll.display();
		cout << endl << "Num of elements in list = " << ll.count();

		ll.del(300);
		ll.del(66);
		ll.del(0);

		ll.display();
		cout << endl << "Num of elements in list = " << ll.count();
	}
