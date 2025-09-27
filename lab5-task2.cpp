#include<stdio.h>

int main(){
	int x,y;
	printf("enter first number: \n");
	scanf("%i" , &x);
	printf("enter second number: \n");
	scanf("%i" , &y);
	printf("(x>5) && (y<10) = %d\n" , (x>5) && (y<10));
	printf("(x==10) || (y==5) = %d\n" , (x==10) || (y==10));
	printf("!(x==y) = %d\n" , !(x==y));
	
}
