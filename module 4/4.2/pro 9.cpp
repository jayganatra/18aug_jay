#include<iostream>

using namespace std;
int main()
{
	int i,n,a[50],b[50],sum[50];
	cout<<"enter the value of n = ";
	cin>>n;
	cout<<endl<<"\t1s matrix\t";
	for(i=1;i<=n;i++)
	{
		cout<<endl<<"enter elements of 1s matrix "<<i<<" = ";
		cin>>a[i];
	}
	cout<<endl<<"\t2s matrix\t";
	for(i=1;i<=n;i++)
	{
		cout<<endl<<"enter elements of 2s matrix "<<i<<" = ";
		cin>>b[i];
	}
	for(i=1;i<=n;i++)
	{
		sum[i]=a[i]+b[i];
	}
	for(i=1;i<=n;i++)
	{
		cout<<" sum of two matrix = "<<sum[i]<<endl;
	}
	
}
