#include <stdio.h>
#include <string.h>
int main () {
    char text[50];
    int flag = 0, count = 0;
    printf("Enter your text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';
    printf("\nYou typed: %s", text);
    
    while (flag == 0)
    {
        if(text[count] == '\0')
        {
            flag = 1;
        }
        count++;
    }
    strcat(text, " falcons");
    printf("\nYour secret message: %s", text);
    printf("\nMessage size was: %d", count);
}
