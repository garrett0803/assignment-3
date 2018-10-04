#include<iostream>
using namespace std;

int main()
{
	int first,second,third,highest,lowest;
	do
	{
		cout<<"Enter three exam scores (between 0 and 100): "	;
		cin>>first>>second>>third;
	}while(first<0 || first>100 || second<0 || second>100 || third<0 || third>100);
	
	//highest=first>second?first:second;
	
	if(first>second)
	{
		highest=first;
		if(first<third)		
			highest=third;
	}
	else
	{
		highest=second;
		if(second<third)
		highest=third;
	}
	
	cout<<"Highest score = "<<highest<<endl;
	
	if(first<second)
	{
		lowest=first;
		if(first>third)
			lowest=third;
	}
	else
	{
		lowest=second;
		if(second>third)
			lowest=third;
	}
	
	cout<<"Lowest score = "<<lowest<<endl;
	
	
	return 0;
}
