#include<stdio.h>

main(){
	char check , letter;
	int vowel=0;
	int consonant=0;
	
	
	printf("enter 'y' to start entering letters or enter 'n' to exit: \n");
	scanf(" %c" , &check);
	while (check == 'y'){
		printf("enter your letter: \n");
		scanf(" %c" , &letter);
		switch (letter){
			case 'A':
			case 'a':
				vowel++;
				break;
			case 'e':
			case 'E':
				vowel++;
				break;
			case 'i':
			case 'I':
				vowel++;
				break;
			case 'o':
			case 'O':
				vowel++;
				break;
			case 'u':
			case 'U':
				vowel++;
				break;
			default:
				consonant++;
				break;
		}
		printf("enter 'y' to continue or 'n' for exit: ");
		scanf(" %c" , &check);
	}
	printf("you entered %d vowels\n" ,vowel);
	printf("\nyou entered %d consonants" , consonant);
}

