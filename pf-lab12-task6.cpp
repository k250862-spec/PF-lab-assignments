#include<stdio.h>

main(){
	int *ptr;
	
	printf("attempt to print the value of pointer\n");
	printf("pointer address: %d\n" , (void*)ptr);
	*ptr = 20;
	printf("value : %d\n");
}