#include<stdio.h>
#include<string.h>

int main(){
    char password[1000];
    char confirm[1000];

    printf("enter your password: ");
    fgets(password , sizeof(password) , stdin);
    password[strcspn(password , "\n")] = '\0';

    printf("confirm your password: ");
    fgets(confirm , sizeof(confirm) , stdin);
    confirm[strcspn(confirm , "\n")] = '\0';

    if (strcmp(password , confirm) == 0){
        printf("password set.\n");
    }
    else{
        printf("passwords do not mattch\n");
    }

}
