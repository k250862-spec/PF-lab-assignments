#include<stdio.h>
main(){
	
	int m , n;
	printf("enter the value for m: \n");
	scanf("%i" ,&m);
	printf("enter value for n: \n");
	scanf("%i" , &n);
	(m>n) ? printf("%i is greater thn %i" , m , n) : printf("%i is greater than %i" , n , m);


}
