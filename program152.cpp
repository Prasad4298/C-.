// Accept the string from user and return the count of capital letters in it.

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		str++;	
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;

	cout<<"Enter the string"<<endl;
	cin.getline(Arr,20);

	iRet = CountCapital(Arr);
	cout<<"Number of capital characters are : "<<iRet<<endl;
}