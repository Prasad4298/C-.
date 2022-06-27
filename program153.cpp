// Accept the string from user and return the count of Small letters in it.

#include<iostream>
using namespace std;

int CountSmall(char str[])
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
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