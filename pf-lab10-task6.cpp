#include<stdio.h>
#include<string.h>

int main(){
    char firstname[1000];
    char secondname[1000];  

    printf("enter first name: ");
    fgets(firstname, sizeof(firstname) , stdin);
    firstname[strcspn(firstname, "\n")] = '\0';

    printf("enter second name: ");
    fgets(secondname, sizeof(secondname) , stdin);
    secondname[strcspn(secondname, "\n")] = '\0';

    if (strlen(firstname) + strlen(secondname) + 2 < sizeof(firstname)) {
        strcat(firstname, " ");  
        strcat(firstname, secondname);
        printf("username: %s\n" , firstname);
    } else {
        printf("username exceeding max size\n");
    }

    return 0;
}
