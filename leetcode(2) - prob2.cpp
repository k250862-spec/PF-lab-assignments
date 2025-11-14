	#include<stdio.h>
	
	int main(){
		char s [100];
		printf("enter your word: ");
		scanf("%s" , &s);
		int count = 0;
		while (s[count] != '\0'){
			count++;
		}
		char temp;
		printf("count: %d\n" , count);
		int newcount = count-1;
		for (int i = 0 ; i < count/2 ; i++){
			temp = s[newcount];
			s[newcount] = s[i];
			s[i] = temp;
			newcount--;
		}
		
		printf("new word: %s\n" , s);
	}