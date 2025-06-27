#include <stdio.h>

int main() {

    float num1, num2, result;
    int choice;

    printf("Calculator.\n");
    printf("1. Addition.\n");
    printf("2. Substract.\n");
    printf("3. Multipication.\n");
    printf("4. Division.\n");

    printf("Choose function(1-4): ");
    scanf("%d", &choice);

    if ( choice < 1) {

        printf("Invalid choice. Please choose a number between 1 and 4.\n");
        return 1;
    }

    else if ( choice > 4) {

        printf("Invalid choice. Please choose a number between 1 and 4.\n");
        return 1;
    }

    printf("Enter you 1st number: ");

    if (scanf("%f", &num1) != 1) {

        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    printf("Enter you 2nd number: ");

    if (scanf("%f", &num2) != 1) {

        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }
    
    switch (choice) {

        case 1:

        result = num1+num2;
        printf("Your result :%.2f", result);
        break;

        case 2:

        result = num1-num2;
        printf("Your result :%.2f", result);
        break;

        case 3:

        result = num1*num2;
        printf("Your result :%.2f", result);
        break;

        case 4:

        if (num2 ==0) {

            printf("Can't be divided by Zero.\n");
        }

        else {
        result = num1/num2;
        printf("Your result :%.2f", result);
        break;

        }

        default:
        printf("Invalid Input.\n");

    }

    return 0;
} 