/*
*** In Generic WAy ***

Q.1) Addition of two values

*/

#include<iostream>
using namespace std;

template<class T>
T Addition(T A , T B)	
{
	T Ans;
	Ans = A + B;
	return Ans;
}

int main()	
{
	int iNo1 = 11, iNo2 = 21, iRet = 0;
	iRet = Addition(iNo1, iNo2);
	cout<<"Addition is :"<<iRet<<endl;

	float fNo1 = 11.9, fNo2 = 21.9, fRet = 0;
	fRet = Addition(fNo1, fNo2);
	cout<<"Addition is :"<<fRet<<endl;

	return 0;
}