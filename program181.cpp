/*

Q.1) Accept two number from user and perform swapping.
swapping A = 11, B = 21
Answer 	 A = 21, B = 11

*/

#include<iostream>
using namespace std;

void SwapA(int *p,int *q)	// call by Address
{
	int temp = 0;
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	int iNo1 = 11, iNo2 = 21;

	cout<<"Before swap data is :"<<iNo1<<","<<iNo2<<endl;

	SwapA(&iNo1, &iNo2);

	cout<<"After swap data is :"<<iNo1<<","<<iNo2<<endl;

	return 0;
}