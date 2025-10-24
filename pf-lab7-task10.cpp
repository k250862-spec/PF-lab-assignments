#include<stdio.h>

main(){
	int size , number , value;
	
	printf("Enter the size of array: ");
	printf("\n");
	scanf("%d" , &size);
	int array[size];
	
	for (int i = 0 ; i < size ; i++){
		printf("ENTER DATA IN ARRAY: \n");
		scanf("%i" , &array[i]);
	}
	
	printf("\n");
	printf("ARRAY: ");
	for (int i = 0 ; i < size ; i++){
		printf("%i " , array[i]);
	}
	
	printf("\n");
	printf("enter the index value that you want to change : ");
	scanf("%i" , &number);
	printf("\n");
	printf("enter data: ");
	scanf("%i" , &value);
	array[number-1] = value;
	
	printf("\n");
	printf("UPDATED ARRAY: ");
	for (int i = 0 ; i < size ; i++){
		printf("%i " , array[i]);
	}
	
	
	

}