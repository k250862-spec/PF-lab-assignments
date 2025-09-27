#include<stdio.h>

main(){
	int a , b;
	printf("enter first integer : ");
	scanf("%i" , &a);
	printf("enter second integer: ");
	scanf("%i" , &b);
	printf("a & b (AND operation): %d\n" ,a&b );
	printf("a | b (OR operation): %d\n" , a|b);
	printf("a^b (XOR operation): %d \n" , a^b);
	printf("~a (not operator): %d\n" , ~a);
	printf("a <<1 (left shift): %d\n" , a<<1);
	printf("a >>1 (right shift): %d\n" , a>>1);

}

