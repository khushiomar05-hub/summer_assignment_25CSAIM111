#include <stdio.h>

int main() {
    int answer;
    int score = 0;

    printf("=== WELCOME TO THE QUIZ ===\n\n");

    
    printf("Q1. What is the capital of France?\n");
    printf("1. Berlin  2. Paris  3. Rome\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 2. Paris.\n\n");
    }

    printf("Q2. Which planet is known as the Red Planet?\n");
    printf("1. Mars  2. Venus  3. Jupiter\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 1. Mars.\n\n");
    }

    
    printf("Q3. What is the value of 5 + 3 * 2?\n");
    printf("1. 16  2. 11  3. 10\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 2. 11.\n\n");
    }


    printf("=== GAME OVER ===\n");
    printf("Your final score is: %d out of 3\n", score);

    return 0;
}
