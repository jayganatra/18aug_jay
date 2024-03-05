#include<iostream>
#include<conio.h>
using namespace std;
class overloding
{
	public:
		void fun(float r)
		{
		    cout<<"area of circle is = "<<3.14*r*r;
		    cout<<endl;
		}
		void fun(float z,float area,float breadth)
		{
			cout<<"area of triange is = "<<z*area*breadth;
			cout<<endl;
		}
		void fun(int area,int breadth)
		{
			cout<<"area of rectangle is = "<<area*breadth;
			cout<<endl;
		}
};
int main()
{
	overloding obj;
	obj.fun(5);
	obj.fun(0.5,5,10);
	obj.fun(5,20);
	getch();
}

