#include<iostream>

#include<string.h>
using namespace std;
class student
{
	public:
		string name;
		int rollno,i;
		void get()
		{
			cout<<"\tCLASS STUDENT"<<endl;
			for(i=1;i<=10;i++)
			{
				cout<<"enter your name "<<i<<" : ";
				cin>>name;
				cout<<"enter your roll number "<<i<<" : ";
				cin>>rollno;
				cout<<endl;
			}
		}
};
class test
{
	public:
		string name;
		int sub1,sub2,i;
		void show()
		{
			cout<<"\tCLASS TEST"<<endl;
			for(i=1;i<=10;i++)
			{
				cout<<"enter your name "<<i<<" : ";
				cin>>name;
				cout<<"enter sub 1 mark "<<i<<" : ";
				cin>>sub1;
				cout<<"enter sub 2 mark "<<i<<" : ";
				cin>>sub2;
				cout<<endl;
			}
		}
};
class result:public student,public test
{
	public:
		int rollno,totalmark,i;
		void display()
		{
			cout<<"\tCLASS RESULT"<<endl;
			for(i=1;i<=10;i++)
			{
				cout<<"enter your roll number "<<i<<" : ";
				cin>>rollno;
				cout<<"enter your total marks "<<i<<" : ";
				cin>>totalmark;
				cout<<endl;
			}
		}
};
int main()
{
	result obj;
	obj.get();
	obj.show();
	obj.display();

}

