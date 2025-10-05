#include<stdio.h>
#include<string.h>

main(){
	char userinput[50];
	int check = 0;
	int number;
	int sum = 0;
	printf("enter 'yes' to enter number or 'no' to exit: \n");
	scanf("%s" , &userinput);
	if (strcmp(userinput , "yes") == 0){
		check = 1;
	}
	else if (strcmp(userinput , "no") == 1){
		check = 0;
	}
	while (check == 1){
		printf("enter number: \n");
		scanf("%d" , &number);
		sum = sum + number;
		printf("current total: %d\n" , sum);
		printf("Do you want to enter another number? (yes/no): \n");
		scanf("%s" , &userinput);
		if (strcmp(userinput , "yes") == 0){
		check = 1;
		}
		else if (strcmp(userinput , "no") == 1){
		check = 0;
		}
	}
}