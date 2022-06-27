/*
*** In Generic WAy ***

Q.1) Accept two number from user and perform swapping.
swapping A = 11, B = 21
Answer 	 A = 21, B = 11

*/

#include<iostream>
using namespace std;

template<class T>		// its a place holder for that data type
void SwapA(T *p,T *q)	// call by Address
{
	T temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()	// main madhe not change data type by T
{
	int iNo1 = 11, iNo2 = 21;
	cout<<"Before swap data is :"<< iNo1 <<","<< iNo2 <<endl;
	SwapA(&iNo1, &iNo2);
	cout<<"After swap data is :"<< iNo1 <<","<< iNo2 <<endl;

	float fNo1 = 11.9, fNo2 = 21.9;
	cout<<"Before swap data is :"<< fNo1 <<","<< fNo2 <<endl;
	SwapA(&fNo1, &fNo2);
	cout<<"After swap data is :"<< fNo1 <<","<< fNo2 <<endl;

	char cNo1 = 'A', cNo2 = 'B';
	cout<<"Before swap data is :"<< cNo1 <<","<< cNo2 <<endl;
	SwapA(&cNo1, &cNo2);
	cout<<"After swap data is :"<< cNo1 <<","<< cNo2 <<endl;

	return 0;
}