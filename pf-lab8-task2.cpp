#include<stdio.h>
main(){ 
	int num; 
	printf("enter the number of rows: "); 
	scanf("%d" , &num);
	for (int i = 1 ; i <=num ; i++){ 
		for (int j = 1 ; j <= num - i ; j++){ 
			printf(" ");
		} for (int k = 1 ; k <= i ; k++){ 
			printf("%d" , k);
		} printf("\n");
	}
}
