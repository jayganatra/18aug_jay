#include<iostream>
using namespace std;
class test
{
	public:
		int x,y;
		friend int data(test &t);
		void display()
		{
		
		cout<<"enter the first number x = ";
		cin>>x;
		cout<<"enter the second number y = ";
		cin>>y;
		
		if(x>y)
	    {
	    	cout<<"maximum number is x = "<<x;
		}   
		else
		{
			cout<<"maximum number is y = "<<y;
		}
	}
};
int main()
{
	test t;
	t.display();
	
}
