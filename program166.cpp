// Accept two string from user and comopaire the both string
// if string is same then return true;

#include<iostream>
using namespace std;

bool Str_Compaire(char *src, char *dest)
{
	while((*src != '\0') && (*dest != '\0'))
	{
		if(*src != *dest)
		{
			break;
		}

		src++;
		dest++;
	}
	
	if((*src == '\0') && (*dest == '\0'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char Arr[20];	
	char Brr[20];
	bool bRet;	

	cout<<"Enter the First string"<<endl;
	cin.getline(Arr,20);

	cout<<"Enter the Second string"<<endl;
	cin.getline(Brr,20);

	bRet = Str_Compaire(Arr,Brr);
	
	if(bRet == true)
	{
		cout<<"Strings are equals"<<endl;
	}
	else
	{
		cout<<"Strings are different"<<endl;
	}

	return 0;
}

