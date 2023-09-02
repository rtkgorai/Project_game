#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guesstheno(int points) {
    srand(time(0));
    int no = rand() % 100 + 1;
    int guess = 0;
    int user = 0;

    printf("ENTER ANY NUMBER BETWEEN 1 TO 100: ");
    
    while (no != user) {
        if (scanf("%d", &user) != 1) {
            printf("Invalid input. Please enter a number.\n");
            fflush(stdin);
            continue;
        }
        if (user < no) {
            printf("Enter a higher number than %d\n", user);
        } else if (no < user) {
            printf("Enter a smaller number than %d\n", user);
        }
        guess++;
    }

    printf("You've guessed the number (it was %d) in %d attempts!\n\n", no, guess);

    if (guess >= 0 && guess <= 5) {
        printf("Congratulations! You've won the game and get 2 points\n");
        points += 2;
    } else if (guess >= 6 && guess <= 10) {
        printf("You've won the game and get 1 point\n");
        points += 1;
    } else if (guess > 10) {
        printf("You've lost the game and lose a point\n");
        points -= 1;
    }

    printf("\nWant to play the game again? Type Y or N: ");
    char inf;
    scanf(" %c", &inf);

    if (inf == 'Y' || inf == 'y') {
        guesstheno(points);
    } else if (inf == 'N' || inf == 'n') {
        printf("Your Final Score: %d\n", points);
        printf("Thank you for playing!\n");
    } else {
        printf("Invalid expression\n");
        printf("Your Final Score: %d\n", points);
        printf("Thank you for playing!\n");
    }

    return points;
}

int main() {
    printf("Welcome to the Guess the Number Game!\n\n");
    printf("The rules of the \"Guess the Number\" game are as follows:\n");
    printf("- The computer randomly selects a number within a specified range.\n");
    printf("- The player attempts to guess the selected number.\n");
    printf("- After each guess, the player receives feedback on whether their guess is too high, too low, or correct.\n");
    printf("- The player continues guessing until they correctly identify the number.\n");
    printf("- The game ends when the player either guesses the number.\n");
    printf("- The player can choose to play the game again if they wish.\n");
    printf("- At last, the player gets a final score according to the conditions.\n\n");

    guesstheno(0);

    return 0;
}
