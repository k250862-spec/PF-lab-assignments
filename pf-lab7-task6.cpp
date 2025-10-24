#include<stdio.h>

main(){
	int array[5];
	int newarray[5];
	
	for (int i = 0 ; i < 5 ; i++){
		printf("enter data: ");
		scanf("%i" , &array[i]);
	}
	printf("\n");
	printf("ORIGNAL ARRAY: ");
	for (int i = 0 ; i < 5 ; i++){
		printf("%i " , array[i]);
		array[i] = array[i] + 10;
		array[i] = array[i] - 5;
		array[i] = array[i] * 2;
		newarray[i] = array[i];
	}
	
	printf("\n");
	printf("UPDATED ARRAY: ");
	for (int i = 0 ; i < 5 ; i++){
		printf("%i " , newarray[i]);
	}
}