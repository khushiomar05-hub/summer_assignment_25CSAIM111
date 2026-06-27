#include <stdio.h>


struct Emp {
    int id;
    char name[30];
    float b_sal;
    float allow; 
    float tax;
    float net;   
};

int main() {
    struct Emp e[100]; 
    int n = 0;         
    int ch;           

    while (1) {
        printf("\n*** SALARY SYSTEM ***\n");
        printf("1. Add Record\n");
        printf("2. Show Records\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("\nEnter ID: ");
            scanf("%d", &e[n].id);
            printf("Enter Name: ");
            scanf("%s", e[n].name);
            printf("Enter Base Salary: ");
            scanf("%f", &e[n].b_sal);

        
            e[n].allow = e[n].b_sal * 0.15; 
            e[n].tax = e[n].b_sal * 0.10;   
            e[n].net = e[n].b_sal + e[n].allow - e[n].tax;

            n++; 
            printf("Added successfully!\n");
        } 
        else if (ch == 2) {
            if (n == 0) {
                printf("\nDatabase is empty!\n");
            } else {
                printf("\nID\tName\tBase\tAllow\tTax\tNet\n");
                printf("------------------------------------------\n");
                for (int i = 0; i < n; i++) {
                    printf("%d\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n", 
                           e[i].id, e[i].name, e[i].b_sal, 
                           e[i].allow, e[i].tax, e[i].net);
                }
            }
        } 
        else if (ch == 3) {
            printf("Thank you!\n");
            break; 
        } 
        else {
            printf("Wrong choice! Try again.\n");
        }
    }
    return 0;
}
