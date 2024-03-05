#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Operate
{
	public:
		string str1;
		void input()
		{
			cout<<"\n "<<"enter your string : ";
			cin>>str1;
		}
		Operate operator+(Operate &firstname)
		{
			Operate lastname;
			lastname.str1=str1+firstname.str1;
			return lastname;
		}
		void display()
		{
			cout<<"\n "<<"your string is : "<<str1;
		}
};
int main()
{
	Operate obj1,obj2,obj3;
	obj1.input();
	obj1.display();
	obj2.input();
	obj2.display();
	obj3=obj1+obj2;
	obj3.display();
}

