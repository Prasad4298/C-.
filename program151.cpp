// Accept string from user and count the occurance of 'L' letter from that string 

#include<iostream>
using namespace std;

int CountL(char str[])
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if(*str == 'l')
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

	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);	// keboard through accept input 20 bytes

	iRet = CountL(Arr);		// Display(Address of Arr);
	cout<<"String contains l is :"<<iRet<<endl;

	return 0;
}