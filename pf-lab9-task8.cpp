#include<stdio.h>

main(){
	int a;
	float b;
	char c;
	printf("enter the integer: \n");
	scanf("%i" , &a);
	printf("enter the float value: \n");
	scanf("%f" , &b);
	printf("enter the character value: \n");
	scanf(" %c" , &c);
	void *ptr;
	ptr = &a;
	printf("value of a is %i\n" , *(int a*)ptr);
	ptr = &b;
	printf("value of b is %.2f\n" , *(float b*)ptr);
	ptr = &c;
	printf("value of c is %c" , *(char c*)ptr);
}