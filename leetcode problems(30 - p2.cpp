#include<stdio.h>
#include<string.h>

int main(){
    int size;
    printf("enter the number of words: ");
    scanf("%d" , &size);
    getchar();
    
    char words[size][100];
    for(int i = 0 ; i < size ; i++){
        printf("enter word number %d: ", i+1);
        fgets(words[i] , sizeof(words[i]) , stdin);
        words[i][strcspn(words[i] , "\n")] = '\0';
    }
    
    char result[100] = "";
    
    for(int i = 0; i < size; i++){
        int length = strlen(words[i]);
        int palindrome = 1;
        
        for(int j = 0; j < length / 2; j++){
            if(words[i][j] != words[i][length - 1 - j]){
                palindrome = 0;
                break;
            }
        }
        
        if(palindrome == 1){
            strcpy(result, words[i]);
            break;
        }
    }
    
    printf("output: %s\n", result);
    
    return 0;
}