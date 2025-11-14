#include<stdio.h> 
main(){ 
	int array[4];
	int *p = array; 
	for (int i = 0 ; i < 4 ; i++){ 
		printf("enter the data in the array: "); 
		printf("\n"); scanf("%d" , &array[i]);
		} 
	printf("\n");
	for (int j = 0 ; j < 4 ; j++){ 
		printf("the value is %d and the address is %d \n" , *(p+j) , p+j);
	}
}
