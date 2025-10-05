#include<stdio.h>

main(){
	int number;
	int factorial = 1;
	printf("enter number: ");
	scanf("%d" , &number);
	for(int i = 1 ; i <= number ; i++){
		factorial = i * factorial;
	}
	printf("factorial: %d" , factorial);
}