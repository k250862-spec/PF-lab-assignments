#include<stdio.h>

main(){
	int result , number;
	printf("enter number: ");
	scanf("%d" , &number);
	for (int i = 1 ; i <= 10 ; i++){
		result = (i * number);
		printf("%d x %d = %d\n" , number , i , result);
	}
}