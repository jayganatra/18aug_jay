#include<iostream>

using namespace std;
template <class t>

	t display(t sum,t i)
	{
		sum+=i;
    }	
int main()
{
int n,i,sum;
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}

    printf("sum =%d",sum-1);
}
