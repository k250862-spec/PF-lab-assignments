#include<stdio.h>

main(){
	int a , b , sum , difference, product;
	int quotient , remainder;
	printf("enter the first integer: ");
	scanf("%d" , &a);
	printf("enter the seconf integer: ");
	scanf("%d" , &b);		
	sum = (a+b);
	difference = (a-b);
	product = (a*b);
	quotient = (a/b);
	remainder = (a%b);
	printf("the sum is: %d\n" , sum);
	printf("the difference is: %d\n" , difference);
	printf("the product is: %d\n" , product);
	printf("the quotient is: %d\n" , quotient);
	printf("the remainder is: %d\n" , remainder);
	
	
}	

