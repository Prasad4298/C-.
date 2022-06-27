// Accept two string from user and copy 2st string data into end of 1nd string data.

#include<iostream>
using namespace std;

void Str_ConcatX(char *src, char *dest)
{
	while(*src != '\0')
	{
		src++;
	}
	
	while(*dest != '\0')
	{
		*src = *dest;
		dest++;
		src++;
	}
	*src = '\0';
}

int main()
{
	char Arr[20];	// Bharaleli wahi
	char Brr[20];	// Kori Wahi

	cout<<"Enter the First string"<<endl;
	cin.getline(Arr,20);

	cout<<"Enter the Second string"<<endl;
	cin.getline(Brr,20);

	Str_ConcatX(Arr,Brr);
	cout<<"String after concatination : "<<Arr<<endl;

	return 0;
}

