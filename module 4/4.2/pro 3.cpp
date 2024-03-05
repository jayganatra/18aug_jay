#include<iostream>

using namespace std;
class multiplication
{
	public:
		inline int data(int a,int b){return a*b;}
};
int main()
{
	int a,b;
	cout<<"enter the first number : ";
	cin>>a;
	cout<<"enter the second number : ";
	cin>>b;
	multiplication obj;
   	cout<<obj.data(a,b);
}
