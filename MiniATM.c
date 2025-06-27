#include <stdio.h>

int deposit(int, int);
int withdraw(int, int);

int deposit(int x, int y) {

    return x+y;
}

int withdraw(int x, int y) {

    return x-y;
} 

int main() {

    int pin = 1234, choice, balance = 1000; 

    printf("===== Welcome to our ATM =====\n");
    printf("Enter your pin : ");

    if (scanf("%d", &pin) != 1) {

        printf("Invalid Input.\n");
        return 1;
    }

    else if (pin == 1234) {

        printf("===== Access granted =====\n");
    }

    else {

        printf("Invalid password.\n");
        return 1;
    }

    do {

    printf("==== Your account ====\n");
    printf("1. Check balance.\n");
    printf("2. Deposit money.\n");
    printf("3. Withdraw money.\n");
    printf("4. Exit the ATM.\n");

    printf("choose an option : ");

    if (scanf("%d", &choice) != 1) {

        printf("Invalid input.\n");
    }

    else if (choice <1 || choice > 4) {

        printf("Invalid option.\n");
    }

    switch (choice) {

        case 1:

        printf("Your current balance is : %d\n", balance);
        break;

        case 2:

        int amount;

        printf("Current balance : %d\n", balance);

        printf("Enter deposit amount : ");

        if (scanf("%d", &amount) != 1) {

            printf("Invalid input.\n");

            return 1;
        }

        else if (amount < 0) {

            printf("Invalid amount.\n");
            return 1;
        }

        balance = deposit(balance , amount);

        printf("Deposit amount : %d\n", amount);

        printf("New balance : %d\n", balance);

        break;

        case 3:

        int amount1;

        printf("Current balance : %d\n", balance);

        printf("Enter withdraw amount : ");

        if (scanf("%d", &amount1) != 1) {

            printf("Invalid input.\n");

            return 1;
        }

        else if (amount1 > balance) {

            printf("Invalid amount.\n");
            return 1;
        }

        balance = withdraw(balance , amount1);

        printf("Withdrawn amount : %d\n", amount1);

        printf("New balance : %d\n", balance);

        break;

        case 4:

        printf("Exiting the ATM. Thank you for choosing us.\n");
        break;
    }

} while (choice != 4);

    return 0;


}
