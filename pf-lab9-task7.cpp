#include<stdio.h>

main(){
	int *ptr = NULL;
	
	if (ptr == NULL){
		printf("pointer does not point to a valid memory location\n");
	}
	else {
		printf("pointer points to the memory location %d" , ptr);
	}
}