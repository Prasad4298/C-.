// Accept the string from user and convert string into lower case

#include<iostream>
using namespace std;

void Str_lwrX(char str[])
{
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];

	cout<<"Enter the string"<<endl;
	cin.getline(Arr,20);

	Str_lwrX(Arr);
	cout<<"String in lower case: "<<Arr<<endl;
}