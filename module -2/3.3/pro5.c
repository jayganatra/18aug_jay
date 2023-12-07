#include<stdio.h>
int main()
{
	int array[20];
	int n,i,j,k;
	printf("array size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;i<n;j++)
		{
			if(array[i]>array[j])
			{
			k=array[i];
			array[i]=array[j];
			array[j]=k;
		    }
		}
	}
for(i=0;i<n;i++)
{
	printf("%d ",array[i]);
}
return 0;
}
