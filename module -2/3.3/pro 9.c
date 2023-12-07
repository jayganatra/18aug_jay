#include<stdio.h>

struct employee
{
	int id,age;
	char name[50],address[50];
};
int main()
{
	struct employee obj[5];
	int i;

	for(i=0;i<5;i++)
	{
	    printf("enter your name : ");
		scanf("%s",&obj[i].name);
		printf("enter your id : ");
		scanf("%d",&obj[i].id);
		printf("enter your address : ");
		scanf("%s",&obj[i].address);
		printf("enter your age : ");
		scanf("%d",&obj[i].age);
	
	}
	for(i=0;i<3;i++)
	{
		printf("name\tid\taddress\tage\n");
		printf("%s\t %d\t%s\t%d\n",obj[i].name,obj[i].id,obj[i].address,obj[i].age);
		
	}
	
	return 0;
}
