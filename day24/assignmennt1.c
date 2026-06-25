#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    
    if (len1 != len2) {
        printf("No, strings are not rotations of each other.\n");
        return 0;
    }

    
    char doubled[100] = ""; 
    strcpy(doubled, str1);
    strcat(doubled, str1); 
    if (strstr(doubled, str2) != NULL) {
        printf("Yes, strings are rotations of each other.\n");
    } else {
        printf("No, strings are not rotations of each other.\n");
    }

    return 0;
}
