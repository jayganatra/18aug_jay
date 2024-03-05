#include<iostream>
#include<string.h>
using namespace std;
class person
{
	public:
		int age,i;
		string personname;
		void get()
		{
			cout<<"\tCLASS PERSON"<<endl;
			for(i=1;i<=10;i++)
			{
				cout<<"enter your name "<<i<<" : ";
				cin>>personname;
				cout<<"enter your age "<<i<<" : ";
				cin>>age;
				cout<<endl;
			}
		}		
};
class student:public person
{
	public:
		string studentname;
		float percentage;
		int i;
		void show()
		{
			cout<<"\tCLASS STUDENT"<<endl;
			for(i=1;i<=10;i++)
			{
				cout<<"enter your name "<<i<<" : ";
				cin>>studentname;
				cout<<"enter your percentage "<<i<<" : ";
				cin>>percentage;
				cout<<endl;
			}
		}
};
class teacher:public student
{
	public:
		string teachername;
		int salary,i;
		display()
		{
			cout<<"\tCLASS TEACHER"<<endl;
			for(i=1;i<=4;i++)
			{
				cout<<"enter your name "<<i<<" : ";
				cin>>teachername;
				cout<<"enter your salary "<<i<<" : ";
				cin>>salary;
				cout<<endl;
			}
		}
};
int main()
{
	teacher obj;
	obj.get();
	obj.show();
	obj.display();
	
}
