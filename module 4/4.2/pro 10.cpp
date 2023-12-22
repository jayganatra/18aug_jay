#include<iostream>

#include<string.h>
using namespace std;
class Operate
{
	public:
		char str1[20];
		void input()
		{
			cout<<"\n "<<"enter your string : ";
			cin>>str1;
		}
		Operate operator+(Operate &str2)
		{
			Operate str3;
			strcat(str1,str2.str1);
			strcpy(str3.str1,str1);
			return str3;
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
