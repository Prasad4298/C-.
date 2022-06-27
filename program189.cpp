/*
*** In Generic WAy ***

Q.1) Accept N number from user and display that number.

*/

#include<iostream>
using namespace std;

template<class T>
void Display(T Arr[], int size)
{
	int i = 0;
	for(i = 0; i < size; i++)
	{
		cout<<Arr[i]<<endl;
	}
}

int main()	
{
	int Brr[] = {10,20,30,40,50};
	Display(Brr,5);

	float Crr[] = {10.9,20.9,30.9,40.9,50.9};
	Display(Crr, 5);

	return 0;
}