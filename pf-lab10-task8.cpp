#include<stdio.h>
#include<string.h>

int main(){
    char names[3][20];

    for (int i = 0 ; i < 3 ; i++){
        printf("enter name of student %d: ", i+1);
        fgets(names[i] , sizeof(names[i]) , stdin);
    }

    for (int i = 0 ; i < 3 ; i++){
        printf("the name of student %d is: %s" , i+1 , names[i]);
    }

    return 0;
}
