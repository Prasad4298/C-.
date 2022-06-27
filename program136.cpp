#include<iostream>
using namespace std;

struct node		// same structor as C
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
	private:		// characteristics ( abstraction is most important)
		PNODE Head;
		PNODE Tail;

	public:		// Behaviours

		SinglyCLL()		// default constructor which accepts nothing 
		{
			Head = NULL;
			Tail = NULL;
		}
};

int main()
{
	SinglyCLL obj;

	return 0;
}