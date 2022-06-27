/*
*** In Generic WAy ***

Q.1) Accept N number from user and retur Maximum number from that numbers

*/

#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
	public:
		T *Arr;
		int Size;

		ArrayX(int Value);
		~ArrayX();
		void Accept();
		void Display();
		T Maximum();
};

template<class T>
ArrayX<T>::ArrayX(int Value)
{
	Size = Value;
	Arr = new T [Size]; 	// main change with T
}

template<class T>
ArrayX<T>::~ArrayX()
{
	delete []Arr;
}

template<class T>
void ArrayX<T>::Accept()
{
	cout<<"Enter values :"<<endl;
	for(int i = 0; i < Size; i++)
	{
		cin>>Arr[i];
	}
}

template<class T>
void ArrayX<T>::Display()
{
	cout<<"values are :"<<endl;
	for(int i = 0; i < Size; i++)
	{
		cout<<Arr[i]<<endl;
	}
}

template<class T>
T ArrayX<T>::Maximum()
{
	T Max = Arr[0];
	for(int i = 0; i < Size; i++)
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
	cout<<"Enter the value for integer"<<endl;
	int iRet = 0;
	ArrayX <int>obj1(5);	// it is most important change

	obj1.Accept();
	obj1.Display();

	iRet = obj1.Maximum();
	cout<<"Maximum number is :"<<iRet<<endl;

	return 0;
}