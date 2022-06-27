// Accept string from user and count number of letter from that string 

#include<iostream>
using namespace std;

int strlenX(char str[])
{
	int iCnt = 0;

	while(*str != '\0')
	{
		iCnt++;
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

	iRet = strlenX(Arr);		// Display(Address of Arr);
	cout<<"String length is:"<<iRet<<endl;

	return 0;
}