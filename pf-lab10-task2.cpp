#include<stdio.h>
#include<string.h>

int main()
{
    char input[10];
    char letter;
    char *found;
    
    printf("Type a word: ");
    fgets(input,10,stdin);
    printf("\nWhich letter to search for: ");
    scanf("%c",&letter);
    
    found=strchr(input,letter);
    if(found !=NULL){
        printf("Letter %c located at index %d\n",letter,found-input);
    }
    else{
    	printf("could not find letter");
	}
    
    return 0;
}
