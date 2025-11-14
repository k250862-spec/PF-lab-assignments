#include<stdio.h>

void swap(int *a , int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

main(){
	int c = 30;
	int d = 50;
	
	printf("before swap\nC: %d\nD: %d\n" , c , d);
	swap(&c , &d);
	printf("after swap\nC: %d\nD: %d\n" , c , d) ;
	
}