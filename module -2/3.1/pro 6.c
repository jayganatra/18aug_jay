#include<stdio.h>

int main()

{
	//years into days  
	int year,days;
	printf("enter the days:");
	scanf("%d",&days);
	year = days/365;
	days =days%365;
	printf("year = %d ",year);
	// years into days 
	printf("\nEnter the number of year: ");
    scanf("%d", &year);
	days = year * 365;
    printf("%d years is equal to %d days.\n", year, days);

	return 0;
}

