#include<iostream>
using namespace std;

class ArrayX
{
	private:

		int * Arr;
		int iSize;

	public:

		ArrayX(int iValue)		// parameterized constructor
		{
			this -> iSize = iValue;
			Arr = new int [iSize];	// allocate resource (outside intity)
		}

		~ArrayX()		// destructor (is most important)
		{
			delete[]Arr;	// deallocate the resource
		}

		void Accept()	// void Accept(ArrayX * this)
		{
			int iCnt = 0;

			cout<<"Enter the elements"<<endl;

			for(iCnt = 0; iCnt < iSize; iCnt++)
			{
				cin >> Arr[iCnt];
			}
		}

		void Display()
		{
			int iCnt = 0;

			cout << " Elements of Array are :" << endl;

			for(iCnt = 0; iCnt < iSize; iCnt++)
			{
				cout << Arr[iCnt] << endl;
			}
		}

		int Summation()
		{
			int iSum = 0,iCnt = 0;

			for(iCnt = 0; iCnt < iSize; iCnt++)
			{
				iSum = iSum + Arr[iCnt];
			}
			return iSum;
		}
};

int main()
{
	int iRet = 0;
	
	ArrayX obj1(5);

	obj1.Accept();		// Accept(&obj1)
	obj1.Display();		// Display(&obj1)

	iRet = obj1.Summation();

	cout << " Addition is :" << iRet << endl;
	return 0;
}