#include <iostream>
#include <string>
using namespace std;

int main() {
    string Name;
    int choice;
    int quantity;
    float totalPrice;
    char Choice;

    cout << "Please enter your name: ";
    cin >> Name;

    cout << "Hello, " << Name << "! Welcome to our program." << endl;

    do {
        cout << "\n----------Menu: ---------\n";
        cout << "1. pizza \n";
        cout << "2. burger \n";
        cout << "3. sandwich \n";
        cout << "4. rolls   \n";
        cout << "5. biryani \n";

        cout << "Please enter your choice (1-5): ";
        cin >> choice;

        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Please enter a number between 1 and 5.\n";
            continue;
        }

        cout << "Enter the quantity you want to order: ";
        cin >> quantity;

        
        switch (choice) {
            case 1:
                totalPrice = quantity * 100; 
                break;
            case 2:
                totalPrice = quantity *200 ;
                break;
            case 3:
                totalPrice = quantity * 100; 
                break;
            case 4:
                totalPrice = quantity * 100; 
                break;
            case 5:
                totalPrice = quantity * 200;
                break;
        }

        cout << "You ordered " << quantity << " items of Option " << choice << ".\n";
        cout << "Total Price: " << totalPrice << "\n";

        cout << "Do you want to continue? (y/n): ";
        cin >> Choice;

        if (Choice != 'y' && Choice != 'Y') {
        	cout<< "\n your order is delivery in 40 minit";
            cout << "\n Thank you for using our program, " << Name << "! Goodbye.\n";
            break;
        }

    } while (choice != 4);

    return 0;
}

