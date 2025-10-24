#include<stdio.h> 
#include<string.h>
main(){
	char character;
	char word[100];
	int i;
	int count = 0;
	printf("Enter the char you want to search: \n"); 
	scanf("%c" , &character); 
	printf("enter your word: \n"); 
	scanf("%s" , &word);
	int wordlength = strlen(word);
	for (int i = 0 ; i < wordlength ; i++){ 
		if (word[i] == character){ 
			count++;
		}
	}
	
	printf("the number of times the character repeated is: %d" , count);
}
