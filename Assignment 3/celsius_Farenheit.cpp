#include<iostream>
using namespace std;

int main()
{
	float temp;
	char type;
	cout << "Enter temperature and type (C or F):";
	cin >>temp>>type;
		if (type == 'F')
	
			cout<<temp<<" F= "<<(5.0/9.0)*(temp - 32.0)<<" C";
		
		else
			cout<<temp<<" C= "<<(1.8*temp + 32.0)<<" F";
	
		
	
	return 0;
}
