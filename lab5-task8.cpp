#include<stdio.h>

main(){
	
	int a , b;
	printf("enter first integer 'a': ");
	scanf("%i" , &a);
	printf("enter second integer 'b': ");
	scanf("%i" , &b);
	printf("(a=b) : %d\n" ,a==b );
	printf("(a>b) : %d\n" , a>b);
	printf("(a<b) : %d\n" , a<b);
	printf("(a!=b) : %d\n" , a!=b);
	printf("(a>=b) : %d\n" , a>=b);
	printf("(a<=b) : %d\n" , a<=b);
}

