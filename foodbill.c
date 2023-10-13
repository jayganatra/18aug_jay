#include <stdio.h>

void menu() {
    printf("1. Pizza  price = 180rs/pcs\n");
    printf("2. Burger price = 100rs/pcs\n");
    printf("3. Dosa   price = 120rs/pcs\n");
    printf("4. Idli   price = 50rs/pcs\n");
}

int main() {
    int food, quantity;
    float foodamount = 0, totalamount = 0;
    char order;

    do {
        menu();
        printf("Please enter your choice: ");
        scanf("%d", &food);

        switch (food) {
            case 1:
                foodamount = 180.0;
                printf("Your choice is pizza\n");
                break;
            case 2:
                foodamount = 100.0;
                printf("Your choice is burger\n");
                break;
            case 3:
                foodamount = 120.0;
                printf("Your choice is dosa\n");
                break;
            case 4:
                foodamount = 50.0;
                printf("Your choice is idli\n");
                break;
            default:
                printf("You have not chosen a valid food item.\n");
                continue;
        }

        printf("Enter the quantity: ");
        scanf("%d", &quantity);
		foodamount += foodamount * quantity;
		printf("food amount is %.2f\n",foodamount);
        totalamount += foodamount * quantity;

        printf("Total food amount is %.2f\n", totalamount);
        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &order);

    } while (order == 'y' || order == 'Y');

    printf("Total amount for your orders is %.2f\n", totalamount);

    return 0;
}

