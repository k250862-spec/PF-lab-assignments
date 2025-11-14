#include<stdio.h>

void calculate(int a , int b , int * sum , float * avg){
	*sum = a + b;
	*avg = (a + b)/2;
}

main(){
	int a; 
	int b;
	int sum;
	float avg;
	
	printf("enter two numbers: \n");
	scanf("%d %d" , &a , &b);
	calculate(a , b , &sum , &avg);
	printf("sum: %d\n" , sum);
	printf("avg: %.2f" , avg);
}