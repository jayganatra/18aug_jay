#include<stdio.h>
int a,b;
void getdata()
{
	
	
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
}
int add()
{
	return a+b;
}
int sub()
{
	return a-b;
}
int mul()
{
	return a*b;
}
int div()
{
	return a/b;
}
int main()
{
	int choice;
	getdata();
	printf("choice\n");
	printf("1-add\t 2-sub\t 3-mul\t 4-div\n");
	printf("enter your option:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("add of %d and %d is =%d",a,b,add());
			break;
		case 2:
			printf("sub of %d and %d is =%d",a,b,sub());
			break;
		case 3:
			printf("mul of %d and %d is =%d",a,b,mul());
			break;
		case 4:
			printf("div of %d by %d is =%d",a,b,div());
			break;
		default:
			printf("invalid input!!!");
			break;
	}
	
	return 0;
}
