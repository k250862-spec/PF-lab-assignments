#include<stdio.h>

int main(){
	int a , b;
	float result;
	printf("enter furst number: ");
	scanf("%i" , &a);
	printf("entr second number: ");
	scanf("%i" , &b);
	result = a + b * (a-b)/2;
	printf("answer: %f\n" , result);
	printf("step 1: remove brckets\n");
	printf("step 2: divide the result by 2\n");
	printf("step 3: multiply the result with b\n");
	printf("step 4:add a to the result");
	
}
