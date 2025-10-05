#include<stdio.h>
#include<string.h>

main(){
	char userinput[50];
	int check = 0;
	int largest = 0;
	int smallest = 0;
	int number;
	printf("enter 'yes' to enter number or 'no' to exit: \n");
	scanf("%s" , userinput);
	if (strcmp(userinput , "yes") == 0){
		check = 1;
	}
	else if (strcmp(userinput , "no") == 0){
		check = 0;
	}
	while (check == 1){
		printf("enter number: \n");
		scanf("%i" , &number);
		if (number <= smallest){
			smallest = number;
		}
		else if (number >= largest){
			largest = number;
		}
		printf("largest number: %d\n" , largest);
		printf("smallest number: %d\n" , smallest);
		printf("Do you want to continue? (yes/no): \n");
		scanf("%s" , userinput);
		if (strcmp(userinput , "yes") == 0){
		check = 1;
		}
		else if (strcmp(userinput , "no") == 0){
		check = 0;
		}
	}
	
	printf("largest number you entered: %d\n" , largest);
	printf("smallest number you entered: %d\n" , smallest);
	
	
}