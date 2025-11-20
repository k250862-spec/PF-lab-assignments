#include<stdio.h>
#include<string.h>

int main(){
    char word[100];
    printf("enter the word: ");
    scanf("%s", word);
    
    char vowels[100];
    int count = 0;
    for (int i = 0; i < strlen(word); i++){
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || 
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            vowels[count] = word[i];
            count++;
        }
    }
    
    for(int i = 0; i < count / 2; i++){
        char temp = vowels[i];
        vowels[i] = vowels[count - 1 - i];
        vowels[count - 1 - i] = temp;
    }
    
    int vowelindex = 0;
    for (int i = 0; i < strlen(word); i++){
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || 
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            word[i] = vowels[vowelindex];
            vowelindex++;
        }
    }
    
    printf("%s", word);
    return 0;
}