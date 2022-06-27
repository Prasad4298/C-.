/*
*** In Specific WAy ***

Q.1) Accept N number from user and retur Maximum number from that numbers

*/

#include<iostream>
using namespace std;

class ArrayX
{
	public:
		int *Arr;
		int Size;

	ArrayX(int Value)
	{
		Size = Value;
		Arr = new int [Size]; 
	}

	~ArrayX()
	{
		delete []Arr;
	}

	void Accept()
	{
		cout<<"Enter the values :"<<endl;
		for(int i = 0; i < Size; i++)
		{
			cin>>Arr[i];
		}
	}

	void Display()
	{
		cout<<"values are :"<<endl;
		for(int i = 0; i < Size; i++)
		{
			cout<<Arr[i]<<endl;
		}
	}

	int Maximum()
	{
		int Max = Arr[0];
		for(int i = 0; i < Size; i++)
		{
			if(Max < Arr[i])
			{
				Max = Arr[i];
			}
		}
		return Max;
	}
};

int main()	
{
	int iRet = 0;
	ArrayX obj1(5);

	obj1.Accept();
	obj1.Display();

	iRet = obj1.Maximum();
	cout<<"Maximum number is :"<<iRet<<endl;

	return 0;
}