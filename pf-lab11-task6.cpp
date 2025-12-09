#include<stdio.h>

int powerfunction(int num , int power){
	if (power == 0){
		return 1;
	}
	
	return num * powerfunction(num , power - 1);
}

main(){
	int input;
	int output;
	int power;
	printf("enter number: ");
	scanf("%d" , &input);
	printf("\n");
	printf("enter power: ");
	scanf("%d" , &power);
	output = powerfunction(input , power);
	printf("\n");
	printf("sum: %d" , output);
}