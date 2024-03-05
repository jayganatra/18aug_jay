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
		
		x=x+y;
	    y=x-y;
	    x=x-y;
	    
	    cout<<"x = "<<x;
	    cout<<endl<<"y = "<<y;   
	}
};
int main()
{
	test t;
	t.display();
	
}
	
