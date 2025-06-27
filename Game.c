#include <stdio.h>

int main() {

    int choice, guess, secnum = 76, num_of_guesses = 0;
    char option1, option2, option3;

    printf("=====PLAY YOUR GAME!=====\n");
    printf("====Choose your game.====\n");
    printf("1. Number guessing game.\n");
    printf("2. Mini quiz game.\n");
    printf("3. Exit the game.\n");

    printf("Choose your game : ");

    if (scanf("%d", &choice) != 1) {

        printf("Invalid input!\n");
        return 1;
    }

    else if (choice < 0 || choice > 3) {

        printf("Invalid choice!\n");
        return 1;
    }

    else if (choice == 3) {

        printf("Exiting the game....\n");
        return 1;
    }

    switch (choice) {

        case 1 :

        printf("You have to guess the secret number (1-100) ! thats all.\n");

        do {

         printf("Enter your guess : ");

         if(scanf("%d", &guess) != 1) {

            printf("Invalid Input.\n");
            return 1;
         }

         else if (guess < secnum) {

            printf("Guess a Higher number!\n");
         }

         else if (guess > secnum) {

            printf("Guess a Lower number!\n");
         } 

         num_of_guesses++;

        }  while (guess != secnum);

        printf("=====You guessed the number!=====\n");
        printf("===Total number of guesses : %d===\n", num_of_guesses);
        break;

        case 2:

        printf("You have to choose the correct answer for 3 questions.\n");

        do {

            printf("Who is known as the father of the C programming language?\n");
            printf("A) Bjarne Stroustrup.\n");
            printf("B) Dennis Ritchie.\n");
            printf("C) James Gosling.\n");
            printf("D) Guido van Rossum.\n");

            printf("Enter you answer : ");

            if(scanf(" %c", &option1) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if (option1 < 'A' || option1 > 'D') {

                printf("Invalid answer.\n");
            }

        } while (option1 != 'B');

        printf("You choose the right answer!\n");

        do {

            printf("What is the name of the fictional city where the game GTA: Vice City takes place?\n");
            printf("A) Liberty City.\n");
            printf("B) San Andreas.\n");
            printf("C) Vice City.\n");
            printf("D) Los Santos.\n");

            printf("Enter you answer : ");

            if(scanf(" %c", &option2) != 1) {

                printf("Invalid Input.\n");
                return 1;
            }

            else if (option2 < 'A' || option2 > 'D') {

                printf("Invalid answer.\n");
            }

        } while (option2 != 'C');

        printf("You choose the right answer!\n");

        do {

            printf("Which planet is known as the Red Planet?\n");
            printf("A) Jupiter.\n");
            printf("B) Saturn.\n");
            printf("C) Mars.\n");
            printf("D) Venus.\n");

            printf("Enter you answer : ");

            if(scanf(" %c", &option3) != 1) {

                printf("Invalid Invalid.\n");
                return 1;
            }

            else if (option3 < 'A' || option3 > 'D') {

                printf("Invalid answer.\n");
            }

        } while (option3 != 'C');

        printf("You choose the right answer!\n");
        break;

    }

    return 0;
}