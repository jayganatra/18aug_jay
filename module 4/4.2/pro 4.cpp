#include<iostream>
using namespace std;
class calculator
{
	float a,b;
	public:
		void result()
		{
			cout<<"enter the first number : ";
			cin>>a;
			cout<<"enter the second number : ";
			cin>>b;
		}
		float add()
		{
			return a+b;
		}
		float sub()
		{
			return a-b;
		}
		float mul()
		{
			return a*b;
		}
		float div()
		{
			return a/b;
		}
};
int main()
{
	int ch;
	calculator c;
	cout<<"enter the number 1 to addition\n"
	<<"enter number 2 to subcraction\n"
	<<"enter number 3 to multiplication\n"
	<<"enter number 4 to division";   
	do
	{
		
		cout<<"\n\n"<<"enter the choice : ";
		cin>>ch;
		switch(ch)
		{
			
			case 1:
				c.result();
				cout<<"result : "<<c.add()<<endl;
				break;
			case 2:
				c.result();
				cout<<"result : "<<c.sub()<<endl;
				break;
			case 3:
				c.result();
				cout<<"result : "<<c.mul()<<endl;
				break;
			case 4:
				c.result();
				cout<<"result : "<<c.div();
				break;
		}
    }while(ch>=1&&ch<=4);
    {
    	cout<<"invalid input";
	}
	          
}
