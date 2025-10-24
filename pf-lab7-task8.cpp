#include<stdio.h>
#include<ctype.h>


main(){
	char string[100];
	int vowelcheck = 0;
	
	printf("enter a word: \n");
	scanf("%s" , &string);
	for (int i = 0 ; i < 100 ; i++){
		if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
			string[i] = toupper(string[i]);
		}
	}
	printf("\n");
	printf("UPDATED STRING: %s" , string);
}