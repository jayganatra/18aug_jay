#include <stdio.h>

int main() {
    int i,j,k=65; 

    for ( i = 1; i <= 5; i++)
	 {
        for ( j = 1; j <= i; j++) 
		{
            printf("%c ", k);
            k++;
        }
        k=65;
        printf("\n");
    }

    return 0;
}

