// Accept the string from user and return the count of Small letters by using ascii values.

#include<iostream>
using namespace std;

int CountSmall(char str[])
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if((*str >= 97) && (*str <= 122)) // by usting ascii values of a == 97 and z == 122
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

	iRet = CountSmall(Arr);
	cout<<"Number of Small characters are : "<<iRet<<endl;
}