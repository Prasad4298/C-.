#include<iostream>
using namespace std;

int main()
{
	char Arr[] = "Hello";
	int i = 0;

	cout<<Arr<<"\n";
	printf("%s\n",Arr);

	while(Arr[i] != '\0')
	{
		cout<<Arr[i]<<endl;
		i++;
	}

	return 0;
}