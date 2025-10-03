#include<stdio.h>

main(){
	int number;
	int firstvalue = 0;
	int secondvalue = 1;
	int nextvalue;
	int sum;
	int count = 3;
	
	printf("enter number: ");
	scanf("%d" , &number);
	
	if (number == 1){
		printf("%d " , firstvalue);
		sum = firstvalue + secondvalue;
	}
	else if( number == 2){
		printf("%d , %d" , firstvalue , secondvalue);
		sum = firstvalue + secondvalue;
	}
	else{
		printf("%d , %d" , firstvalue,secondvalue);
		sum = firstvalue + secondvalue;
		while (count <= number){
			nextvalue = firstvalue + secondvalue;
			printf(", %d" , nextvalue);
			sum = sum + nextvalue;
			firstvalue = secondvalue;
			secondvalue = nextvalue;
			count++;
			
		}
	}
	printf("\n");
	printf("%d" , sum);
}