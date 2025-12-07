#include <stdio.h>
#include <string.h>
int main() {
    char first[100], second[100];
    int num;
    printf("Enter first code: ");
    scanf("%s", first);
    printf("Enter second code: ");
    scanf("%s", second);
    printf("Enter how many letters to check: ");
    scanf("%d", &num);
    int size1 = strlen(first);
    int size2 = strlen(second);
    if (num > size1 || num > size2) {
        printf("Note: Checking more letters than available in one or both codes.\n");
    }
    int same = 1; 
    for (int i = 0; i < num; i++) {
        if (first[i] != second[i]) {
            same = 0;
            break;
        }
    }
    if (same) {
        printf("The codes begin with matching letters.\n");
    } else {
        printf("The codes start differently.\n");
    }
    return 0;
}
