#include<stdio.h>

main(){
	int initialbalance = 5000;
	int userinput;
	int deposit = 0;
	int withdrawl = 0;
	printf("enter deposit/withdrawl amount or '0' for exit: ");
	scanf("%i" , &userinput);
	while (userinput != 0){
		if (userinput > 0){
			deposit++;
			initialbalance = initialbalance + (userinput);
			printf("your balance after deposit is: %d\n" , initialbalance);
		}
		else if (userinput < 0){
			withdrawl++;
			initialbalance = initialbalance + (userinput);
			printf("your balance after deposit is: %d\n" , initialbalance);
		}
		printf("enter deposit/withdrawl amount or '0' for exit: \n");
		scanf("%i" , &userinput);
	}
	printf("amount of withdrawls: %d\n" , withdrawl);
	printf("amount of deposits: %d\n" , deposit);
	
}