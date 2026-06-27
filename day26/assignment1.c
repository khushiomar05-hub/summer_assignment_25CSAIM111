#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;
    
    srand(time(NULL));
    secret = (rand() % 100) + 1;


    printf("Guess the number (1-100):\n");

    while (1) {
        printf("Enter guess: ");
        scanf("%d", &guess);

        if (guess > secret) {
            printf("Too high!\n\n");
        } else if (guess < secret) {
            printf("Too low!\n\n");
        } else {
            printf("Correct! You win!\n");
            break; 
        }
    }
    return 0;
}
