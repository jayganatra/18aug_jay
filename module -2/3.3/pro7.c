#include<stdio.h>

int main()
{
	char s[20];
	int i;
	printf("enter the string : ");
	scanf("%c",&s[20]);
	for(i=0;s[i]!='\0';++i);
	
	printf("length of the string : %d",i);

	return 0;
}
