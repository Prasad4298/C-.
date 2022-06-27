/*
*** In Generic WAy ***

Q.1) Accept N number from user and retur Maximum number from that numbers

*/

#include<iostream>
using namespace std;

template<class T>	// function template
T Maximum(T Arr[], int size)
{
	T Max = Arr[0];
	int i = 0;

	for(i = 0; i < size; i++)
	{
		if(Max < Arr[i])
		{
			Max = Arr[i];
		}
	}

	return Max;
}

int main()	
{
	int iRet = 0;
	int iBrr[] = {10,20,30,40,50};
	iRet = Maximum(iBrr,5);
	cout<<"Maximum number is :"<<iRet<<endl;

	float fRet = 0;
	float fCrr[] = {10.5,20.5,30.5,40.5,50.5};
	fRet = Maximum(fCrr,5);
	cout<<"Maximum number is :"<<fRet<<endl;

	return 0;
}