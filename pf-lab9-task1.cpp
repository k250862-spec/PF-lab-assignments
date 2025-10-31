#include<stdio.h> 
int sqr(int a){ 
	int c = a * a; 
	return c;
	}
main(){
	int a; 
	printf("enter number: \n"); 
	scanf("%d" , &a); 
	printf("the square of number is : %d" , sqr(a));
}
