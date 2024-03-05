#include<iostream>
#include<string.h>
using namespace std;
class bank
{
	public:
	int accountnumber,balanceofaccount;
	char nameofdepositor[20],typeofaccount[20];
	 display()
{
	
	cout<<"\nenter the name : ";
	cin>>nameofdepositor;
	cout<<"\nenter the account number : ";
	cin>>accountnumber;
	cout<<"\nenter type of account : ";
	cin>>typeofaccount;
	cout<<"\nenter the balance of account : ";
	cin>>balanceofaccount;
}
void show()
{
	cout<<"name :"<<nameofdepositor<<"\n";
	cout<<"account number : "<<accountnumber<<"\n";
	cout<<"type of account : "<<typeofaccount<<"\n";
	cout<<"balance of account"<<balanceofaccount<<"\n";
}
};
int main()
{
	bank obj;
	obj.display();
	int choice,a,w;
	cout<<"\nenter the number 1 to deposited an amount";
	cout<<"\nenter the number 2 to withdraw a amount";
	cout<<"\nenter the number 3 to display personal detail";
	
	do
	{
		cout<<"\n\nenter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"to deposited a amount : ";
				cin>>a;
				break;
			case 2:
				cout<<"to withdraw a amount : ";
				cin>>w;
				cout<<"your amount "<<w;
				break;
			case 3:
				obj.show();
				break;
			cout<<"\ninvalid input";
			break;
		}
	}while(choice>1&&choice<3);
		
		
	

}
