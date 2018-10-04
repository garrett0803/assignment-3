#include<iostream>
using namespace std;

int main()
{
	const float FIRST_PRICE=11.95;
	const float SECOND_PRICE=9.95;
	const float THIRD_PRICE=7.95;
	const float FIRST_SHIPPING=3.50;
	const float SECOND_SHIPPING=5.95;
	const float THIRD_SHIPPING=7.95;
	
	int numberOfTshirt;
	float shirtCost,totalFinal,shipFee;
	
	cout<<"Enter number of shirts: ";
	cin>>numberOfTshirt;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	if(numberOfTshirt<4)
	{
		shirtCost=numberOfTshirt*FIRST_PRICE;
		shipFee=FIRST_SHIPPING;
	}
	else if(numberOfTshirt>=4&&numberOfTshirt<8)
	{
		shirtCost=numberOfTshirt*SECOND_PRICE;
		shipFee=SECOND_SHIPPING;
	}
	else
	{
		shirtCost=numberOfTshirt*THIRD_PRICE;
		shipFee=THIRD_SHIPPING;
	}
	
	totalFinal=shirtCost+shipFee;
	
	cout<<"Total shirt cost = "<<shirtCost<<endl;
	cout<<"Shipping and handling = "<<shipFee<<endl;
	cout<<"Total final cost = "<<totalFinal<<endl;
	return 0;
}
