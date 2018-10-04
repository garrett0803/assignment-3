#include<iostream>
using namespace std;

int main()
{
	
	char typeOfTransaction,continued;
	float balance=200,deposit,withdraw;
	do
	{
		cout<<"Enter the transaction you want "<<endl;
		cout<<"(B)alance   (D)eposit   (W)ithdraw   e(X)it"<<endl;
		cin>>typeOfTransaction;
	
		switch(typeOfTransaction)
		{
			case 'B':
			case 'b':
				cout<<"Your cureent balance is "<<balance<<endl;
				break;
			case 'd':
			case 'D':
				do
				{
					cout<<"Enter amount you want deposit into your account (positive number, please)"<<endl;
					cin>>deposit;
				}while(deposit<=0);
				balance+=deposit;
				cout<<"Your current balance is "<<balance<<endl;
				break;
			case 'W':
			case 'w':
				do
				{
					cout<<"Enter amount you want to withdraw \n(positive number and less than your balance, please)"<<endl;
					cin>>withdraw;
				}while(withdraw<=0||withdraw>balance);
				balance-=withdraw;
				cout<<"Your current balance is "<<balance<<endl;
				break;
			case 'E':
			case 'e':
				cout<<"Thank you for using our banking service, have a good day!"<<endl;
				break;
		}
		cout<<"Do you want to continue to use the service (Y/N) ?"<<endl;
		cin>>continued;
		
	}while(continued!='n'&&continued!='N');
}
