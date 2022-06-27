/*
*** In Generic WAy ***

Q.1) Accept two number from user and perform swapping.
swapping A = 11, B = 21
Answer 	 A = 21, B = 11

*/

#include<iostream>
using namespace std;

template<class T>
void SwapR(T &p,T &q)	// call by reference
{
	T temp;
	temp = p;
	p = q;
	q = temp;
}

int main()	// main madhe not change data type by T
{
	int iNo1 = 11, iNo2 = 21;

	cout<<"Before swap data is :"<< iNo1 <<","<< iNo2 <<endl;

	SwapR(iNo1, iNo2);

	cout<<"After swap data is :"<< iNo1 <<","<< iNo2 <<endl;

	return 0;
}