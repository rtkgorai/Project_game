#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

int game(char c, char y) {
    if (c == y) {
        return 0;
    } else if (c == 's') {
        if (y == 'x') {
            return -1;
        } else if (y == 'p') {
            return 1;
        }
    } else if (c == 'p') {
        if (y == 's') {
            return -1;
        } else if (y == 'x') {
            return 1;
        }
    } else {
        if (y == 'p') {
            return -1;
        } else if (y == 's') {
            return 1;
        }
    }
    return 0;
}

int main() {
    printf("Welcome to the Stone, Paper, or Scissors Game!\n\n");
    printf("The rules of the \"Stone, Paper, or Scissors\" game are as simple as a cup of tea:\n");
    printf("The game determines the winner based on predefined rules:\n");
    printf("stone beats scissors, scissors beats paper, and paper beats stone.\n\n");

    int s = 0;
    int so = 0;
    char g;
    srand(time(NULL));
    char options[] = { 's', 'p', 'x' };

    do {
        printf("****************************************************\n");
        char y;
        printf("Choose stone(s), paper(p), or scissors(x): ");
        scanf(" %c", &y);

        int r = rand() % 3;
        char c = options[r];

        if (c == 's') {
            printf("Computer chose: stone(s)\n");
        } else if (c == 'p') {
            printf("Computer chose: paper(p)\n");
        } else {
            printf("Computer chose: scissors(x)\n");
        }
        printf("\n");

        int result = game(c, y);
        if (result == 1) {
            printf("You win this round!\n");
            s++;
        } else if (result == -1) {
            printf("Computer wins this round!\n");
            so++;
        } else {
            printf("It's a tie!\n");
        }

        printf("****************************************************\n");
        printf("Want to play the game again? Type yes(y) or no(n): ");
        scanf(" %c", &g);

    } while (g == 'y' || g == 'Y');

    printf("****************************************************\n");
    printf("Final Score:\n");
    printf("Player: %d\n", s);
    printf("Computer: %d\n\n");

    if (s > so) {
        printf("Congratulations! You've won the game\n");
    } else if (so == s) {
        printf("OOPS! It's a tie!\n");
    } else {
        printf("You've lost the game\n");
    }

    printf("****************************************************\n");

    return 0;
}
