#include<stdio.h>
int main()

{
	int P,R,N,I;
	printf("enter value of  p:");
	scanf("%d",&P);
	printf("enter value of  R:");
	scanf("%d",&R);
	printf("enter value of  N:");
	scanf("%d",&N);
	I = (P*R*N)/100;
	printf("Sinple interest = %d",I);
	return 0;
}
