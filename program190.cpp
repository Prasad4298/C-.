/*
*** In Specific WAy ***

Q.1) Accept N number from user and retur Maximum number from that numbers

*/

#include<iostream>
using namespace std;

int Maximum(int Arr[], int size)
{
	int iMax = 0, i = 0;
	iMax = Arr[0];

	for(i = 0; i < size; i++)
	{
		if(iMax < Arr[i])
		{
			iMax = Arr[i];
		}
	}

	return iMax;
}

int main()	
{
	int iRet = 0;
	int Brr[] = {10,20,30,40,50};
	iRet = Maximum(Brr,5);

	cout<<"Maximum number is :"<<iRet<<endl;

	return 0;
}