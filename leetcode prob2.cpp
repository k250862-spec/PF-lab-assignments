#include<stdio.h>

main(){
	int n;
	printf("enter the value for n: \n");
	scanf("%d" , &n);
	int size = 2*n;
	int array[size];
	int result[size];
	printf("enter value in array\n");
	for (int i = 0 ; i < size ; i++){
		scanf("%i" , &array[i]);
	}
	printf("array\n");
	for (int i = 0 ; i < size ; i++){
		printf("%d \n" , array[i]);
	}
	
	int div = size / 2;
	int x[div];
	int y[div];
	for (int a = 0 ; a < div; a++){
		x[a] = array[a];
	}
	int count = 0;
	for (int j = div ; j < size ; j++ ){
		y[count] = array[j];
		count++;
	}
	
    int index = 0;
    for (int k = 0; k < div; k++){
        result[index] = x[k];      	
    	index++;
        result[index] = y[k];        
        index++;
    }
	
	printf("result\n");
	for (int i = 0 ; i < size ; i++){
		printf("%d " , result[i]);
	}

}