#include<iostream>
#include<conio.h>
using namespace std;
class overloading
{
	public:
		void fun(int a,int b,int x,int y,int z)
		{
			cout<<"enter value a : ";
			cin>>a;
			cout<<"enter value b : ";
			cin>>b;
			cout<<"addition is a and b = "<<a+b<<"\n\n";
			cout<<"enter value x : ";
			cin>>x;
			cout<<"enter value y : ";
			cin>>y;
			cout<<"multiplication is x and y = "<<x*y<<"\n\n";	
		}
		
		int fun(float a,float b,float x,float y)
		{
			cout<<"enter value a : ";
			cin>>a;
			cout<<"enter value b : ";
			cin>>b;
			cout<<"subtraction is a and b = "<<a-b<<"\n\n";
			cout<<"enter value x : ";
			cin>>x;
			cout<<"enter value y : ";
			cin>>y;
			cout<<"division is x and y = "<<x/y<<"\n\n";
		}
		
};
int main()
{
	overloading obj;
	obj.fun(0,0,0,0,0);
	obj.fun(0,0,0,0);
	getch();
}


