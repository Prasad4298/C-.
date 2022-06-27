// Accept two string from user and copy 1st string data into 2nd string data.

#include<iostream>
using namespace std;

void Str_CpyX(char *src, char *dest)
{
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20];	// Bharaleli wahi
	char Brr[20];	// Kori Wahi

	cout<<"Enter the string"<<endl;
	cin.getline(Arr,20);

	Str_CpyX(Arr,Brr);
	cout<<"String after Copy : "<<Brr<<endl;

	return 0;
}

