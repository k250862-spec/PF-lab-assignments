#include<stdio.h>

void repeat(){
	static int count = 0;
	count++;
	printf("function has been called %d times\n" , count);
}

main(){
	repeat();
	repeat();
	repeat();
	repeat();
	repeat();
	repeat();
	repeat();
	repeat();
}