#include <stdio.h>
#include <string.h>


void reverse (char input[], int index) {
    if (input[index] == '\0') {
        return;
    }
    
    reverse(input, index + 1);
    
    printf("%c", input[index]);
}

main() {
    char string[100];
    
    printf("Enter the backward word: ");
    fgets(string, sizeof(string), stdin);
    

    int stringlen = strlen(string);
    if (string[stringlen - 1] == '\n') {
        string[stringlen - 1] = '\0';
    }
    
    printf("Original word: %s\n", string);
    printf("Decoded word: ");
    
    reverse(string, 0);
    printf("\n");
    
}