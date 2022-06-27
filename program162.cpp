// Accept the string from user and reverse the string.

#include<iostream>
using namespace std;

void Str_RevX(char *str)
{
	char *start = str;	
	char *end = str;	
	char temp;

	while(*end != '\0')
	{
		end++;
	}
	end--;

	while(start < end)
	{
		temp = *start;		// *start madhil element copy into variable.
		*start = *end;		// *end madhil element replace into *start madhil element.
		*end = temp;		// temp madhil element replace into *end madhil variable.

		start++;	// string travel forward direction.
		end--;		// string travel backward direction.
	}
}

int main()
{
	char Arr[20];

	cout<<"Enter the string"<<endl;
	cin.getline(Arr,20);

	Str_RevX(Arr);
	cout<<"Reverse the string: "<<Arr<<endl;
}

