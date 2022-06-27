// Que. accept number from user and return factorial of that number.

//	4 			24
// 	1*2*3*4		24

// werst OOP (bad programming)

#include<iostream>
using namespace std;

class Number
{
	public : 

	int Factorial(int iNo)
	{
		int iFact = 1;
		int iCnt = 0;

		for(iCnt = 1; iCnt <= iNo; iCnt++)
		{
			// fancy coding with *short hand operator:
			
			iFact *= iCnt; // iFact = iFact * iCnt;
		}
		return iFact;
	}
};

int main()
{
	Number nobj;

	int iValue = 0;
	int iRet = 0;

	cout<<"Enter number \n";
	cin>>iValue;

	iRet = nobj.Factorial(iValue);

	cout<<"Factorial is : "<<iRet<<endl;
	
	return 0;
}