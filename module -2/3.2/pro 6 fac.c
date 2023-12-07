#include<stdio.h>

int main()

{
	long long int i,f=1,no;
	
	printf("input the number :");
	scanf("%lld",&no);
	
	for(i=1;i<=no;i++)
	f=f*i;
	
	printf("the factorial of %lld is : %lld\n",no,f);
	
	
	return 0;
}
