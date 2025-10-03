#include<stdio.h>

main(){
	char check;
	int number;
	int even = 0;
	int odd = 0;
	
	
	printf("enter 'y' to enter number and 'n' for exit: \n");
	scanf("%c" , &check);
	while (check == 'y'){
		printf("enter a number: ");
		scanf("%d" , &number);
		if (number%2 == 0){
			printf("even number was entered\n");
			even = even + 1;
		}
		else{
			printf("odd number was entered\n");
			odd = odd + 1;
		}
		printf("Do you want to continue?(y for yes / n for no): \n");
		scanf(" %c" , &check);
	}
	printf("you entered %d even numbers and %d odd numbers" ,even ,odd);
	
}
