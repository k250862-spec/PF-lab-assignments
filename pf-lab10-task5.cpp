#include<stdio.h>
#include<string.h>

int main() {

    char string[1000];
    char backup[1000];

    printf("enter your word/string: \n");
    fgets(string , sizeof(string) , stdin);

    strcpy(backup, string);
     printf("the original string is: %s\n", string);
    printf("the backup string is: %s\n", backup);

    return 0;

}
