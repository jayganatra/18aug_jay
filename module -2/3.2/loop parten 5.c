#include<stdio.h>

int main()

{
	int i,j,no,k=0;
	printf("enter the number : ");
	scanf("%d",&no);
	

	for(i=1;i<=no;i++)
	{
		for(j=4;j>=i;j--)
		{
			printf("  ");
		}
	    for(k=0;k!=2*i-1;k++)
	    {
	       printf("* ");
        }
		printf("\n");
	}
	getch();
	return 0;
}
