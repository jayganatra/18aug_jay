#include<stdio.h>

int main()

{
	int no1,no2,max;
	
	printf("enter number 1 :");
	scanf("%d",&no1);
	printf("enter number 2 :");
	scanf("%d",&no2);
	
	if(no1>no2)
	{
    	printf("the maximum number is %d\n",no1);
    }
    else
    {
    	printf("the maximum number is %d\n",no2);
	}
	
	
	return 0;
}
