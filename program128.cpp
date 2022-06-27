// Que. accept number from user and return factorial of that number.

//	4 			24
// 	1*2*3*4		24

// best programming:

#include<iostream>
using namespace std;

class Number
{
	private:
		int iNo;	// characteristics	(abstraction)

	public : 
		// Behaviours

		void Accept()	// Setter
		{
			cout<<"Enter the Value:"<<endl;
			cin>> this -> iNo;
		}

		void Display()	// Gatter
		{
			cout<<"Value is:"<< this -> iNo <<endl;
		}

	int Factorial()
	{
		int iFact = 1;
		int iCnt = 0;

		for(iCnt = 1; iCnt <= iNo; iCnt++)
		{
			// fancy coding with *short hand operator:
			
			iFact = iFact * iCnt;
		}
		return iFact;
	}
};

int main()
{
	Number nobj1;
	Number nobj2;

	int iRet = 0;
	
	nobj1.Accept();
	nobj1.Display();
	iRet = nobj1.Factorial();
	cout <<" Factorial is : " << iRet << endl;

	nobj2.Accept();
	nobj2.Display();
	iRet = nobj2.Factorial();
	cout <<" Factorial is : " << iRet << endl;
	
	return 0;
}