#include <stdio.h>

int main() {
    
    int rollNumbers[3];
    char names[3][30];       
    float marks1[3];         
    float marks2[3];       
    float averages[3];  

    
    for (int i = 0; i < 3; i++) {
        printf("--- Student %d ---\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &rollNumbers[i]);

        printf("Enter First Name (no spaces): ");
        scanf("%s", names[i]);

        printf("Enter Marks for Subject 1: ");
        scanf("%f", &marks1[i]);

        printf("Enter Marks for Subject 2: ");
        scanf("%f", &marks2[i]);
        
        printf("\n");
    }


    for (int i = 0; i < 3; i++) {
        averages[i] = (marks1[i] + marks2[i]) / 2.0;
    }


    printf("\n--- STUDENT RECORDS ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Roll No: %d | Name: %s | Marks: %.1f, %.1f | Avg: %.2f\n", 
               rollNumbers[i], names[i], marks1[i], marks2[i], averages[i]);
    }

    return 0;
}
