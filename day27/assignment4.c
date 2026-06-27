#include <stdio.h>

struct Marksheet {
    int roll;
    char name[20]; 
    float math;
    float sci;
    float eng;
    float total;
    float per;
};

int main() {
    int num_students;

    printf("How many marksheets do you want to create? ");
    scanf("%d", &num_students);

    
    struct Marksheet m[num_students]; 

    
    for(int i = 0; i < num_students; i++) {
        printf("\n--- Enter Details for Student %d ---\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &m[i].roll);
        
        printf("Enter Name (one word only): ");
        scanf("%s", m[i].name);
        
        printf("Enter Math Marks: ");
        scanf("%f", &m[i].math);
        
        printf("Enter Science Marks: ");
        scanf("%f", &m[i].sci);
        
        printf("Enter English Marks: ");
        scanf("%f", &m[i].eng);

    
        m[i].total = m[i].math + m[i].sci + m[i].eng;
        m[i].per = m[i].total / 3.0;
    }

    printf("\n=================================");
    printf("\n       GENERATED MARKSHEETS      ");
    printf("\n=================================");
    
    for(int i = 0; i < num_students; i++) {
        printf("\n\nRoll No: %d  |  Name: %s", m[i].roll, m[i].name);
        printf("\n---------------------------------");
        printf("\nMath:    %.1f", m[i].math);
        printf("\nScience: %.1f", m[i].sci);
        printf("\nEnglish: %.1f", m[i].eng);
        printf("\n---------------------------------");
        printf("\nTotal:   %.1f / 300", m[i].total);
        printf("\nPercent: %.2f%%", m[i].per);
        

        if (m[i].per >= 40.0) {
            printf("\nResult:  PASSED");
        } else {
            printf("\nResult:  FAILED");
        }
        printf("\n=================================");
    }

    printf("\n\nAll marksheets printed successfully.\n");
    return 0;
}
