#include<stdio.h>

int main()

{
	int n,i;
	double arr[100];
	printf("enter the number of elements : ");
    scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nenter the number %d : ",i+1);
		scanf("%lf",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		if(arr[0]<arr[i])
		{
			arr[0]=arr[i];
		}
	}
	printf("max number is : %lf",arr[0]);
	
}

