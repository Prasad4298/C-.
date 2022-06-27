// Accept the string from user and concert string into Upper case.

#include<iostream>
using namespace std;

void Str_UprX(char str[])
{
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];

	cout<<"Enter the string"<<endl;
	cin.getline(Arr,20);

	Str_UprX(Arr);
	cout<<"String in Upper case: "<<Arr<<endl;
}