#include<iostream>

using namespace std;
class A
{
	public:
		display()
		{
			
		int a,b;
		cout<<"enter the number a : ";
		cin>>a;
		cout<<"\nenter the number b : ";
		cin>>b;
		
		cout<<"\naddition in number : "<<a+b;
		cout<<"\nsubtraction in number : "<<a-b;
		cout<<"\nmultiplication in number : "<<a*b;
		cout<<"\ndivition in number : "<<a/b;
	    }
};
int main()
{
	A obj;
	obj.display();
	
}
