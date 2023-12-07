#include<stdio.h>

 long long int fact(int n);
int main()
{
	long long int n;
	printf("enter the number : ");
	scanf("%d",&n);
	printf("factorial of %d =%ld",n,fact(n));
	
	return 0;
}
 long long int fact(int n)
{
	if(n>=1)
	return n*fact(n-1);
	else
	return 1;
}
