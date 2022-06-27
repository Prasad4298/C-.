// Accept the string from user and toggle the string.

#include<iostream>
using namespace std;

void Str_tglX(char str[])
{
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		else if((*str >= 'a') && (*str <= 'z'))
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

	Str_tglX(Arr);
	cout<<"String After toggle: "<<Arr<<endl;
}

/*
	toggle karne mhanje je words small asel string madhe te capital hotil

	example:
		Hello Word -> after toggle -> hELLO wORD;