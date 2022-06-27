#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* next;
	struct node* prev;

};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCLL
{
	private:
		PNODE Head;
		PNODE Tail;

		int CountNode;

	public:

		DoublyCLL();

		void InsertFirst(int);
		void InsertLast(int);
		void InsertAtPos(int,int);

		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);

		int Count();
		void Display();
};

DoublyCLL::DoublyCLL();

DoublyCLL::void InsertFirst(int iNo)
{}

DoublyCLL::void InsertLast(int iNo)
{}

DoublyCLL::void InsertAtPos(int iNo, int iPos)
{}


DoublyCLL::void DeleteFirst()
{}

DoublyCLL::void DeleteLast()
{}

DoublyCLL::void DeleteAtPos(int iPos)
{}


DoublyCLL::int Count()
{
	return CountNode;
}

DoublyCLL::void Display()
{}

int main()
{
	DoublyCLL obj;
	return 0;
}