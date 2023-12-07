#include<stdio.h>

int main()

{
	int choice;
	printf("menu\n");
	printf("1-sunday\t2-monday\t3-tuesday\t4-wednesday\t5-thursday\t6-friday\t7-Saturday\n");
	printf("enter your option :");
    scanf("%d",&choice);
    switch (choice)
    {
    	case 1:
    		printf("\n sunday");
    		break;
    	case 2:
    		printf("\n monday");
    		break;
    	case 3:
    		printf("\n tuesday");
    	    break;
    	case 4:
    		printf("\n wednesday");
    		break;
    	case 5:
    		printf("\n thursday");
    		break;
    	case 6:
    		printf("\n friday");
    		break;
    	case 7:
    		printf("\n Saturday");
    		break;
    		printf("invalid ");
	}
	
	return 0;
}
