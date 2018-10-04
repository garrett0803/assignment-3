#include<iostream>
using namespace std;

int main()
{
	int number;
	double sum=0;
	
	do
	{
		cout<<"Enter a positive integer: ";
		cin>>number;
	}while(number<=0);
	
	for(int i=1;i<=number;i++)
		sum=sum +1/(double)i;

	
	cout<<"Sum of the first "<<number<<" reciprocals = "<<sum;
	return 0;
}

