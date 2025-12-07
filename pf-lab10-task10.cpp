#include<stdio.h>
#include<string.h>

int main(){
    char names[5][20];
    FILE *fileptr;

    for (int i = 0 ; i < 5 ; i++){
        printf("enter name of employee %d: ", i+1);
        fgets(names[i] , sizeof(names[i]) , stdin);
        names[i][(strcspn(names[i] , "\n"))] = '\0';
    }

    fileptr = fopen("names.txt" , "w");
    if (fileptr == NULL){
        printf("file not created\n");
        return 1;
    }

    for (int i = 0 ; i < 5 ; i++){
        fprintf(fileptr , "%s\n" , names[i]);
    }

    fclose(fileptr);

    char searchname[20];
    printf("enter name for search: ");
    fgets(searchname , sizeof(searchname) , stdin);
    searchname[strcspn(searchname , "\n")] = '\0';

    fileptr = fopen("names.txt" , "r");
    if (fileptr == NULL){
        printf("file not opened\n");
        return 1;
    }

    char filename[20];
    int found = 0;
    while (fgets(filename, sizeof(filename) , fileptr) != NULL){
        filename[strcspn(filename , "\n")] = '\0';
        if (strcmp(filename , searchname) == 0){
            found = 1;
            break;
        }
    }

    if (found == 1){
        printf("name found in directoty\n");
    }
    else{
        printf("name not found\n");
    }

    fclose(fileptr);
    return 0;

}
