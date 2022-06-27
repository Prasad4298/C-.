/*
*** In Specific WAy ***

Q.1) Addition of two values

*/

#include<iostream>
using namespace std;
	
int Addition(int A , int B)	
{
	int Ans = 0;
	Ans = A + B;
	return Ans;
}

int main()	
{
	int No1 = 11, No2 = 21, iRet = 0;

	iRet = Addition(No1, No2);

	cout<<"Addition is :"<<iRet<<endl;

	return 0;
}