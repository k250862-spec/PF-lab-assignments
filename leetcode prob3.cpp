#include<stdio.h>

main(){
	int temp;
	int count = 0;
	int size;
	printf("enter the size of array: ");
	scanf("%d" , &size);
	int array[size];
	printf("\n");
	for (int i = 0 ; i < size ; i++){
		printf("enter data in array: \n");
		scanf("%i" ,&array[i]);
	}
	printf("ARRAY: ");
	for (int a = 0 ; a < size ; a++){
		printf("%i " , array[a]);
	}
	
	for (int i = 0; i < size ; i++){
		if ((array[i] % 2) == 0){
			array[i] = 0;
		}
		else {
			array[i] = 1;
		}
	}
	
	printf("ARRAY: ");
	for (int a = 0 ; a < size ; a++){
		printf("%i " , array[a]);
	}
	
	for(int i = 0; i < 4 - 1; i++) {
        for(int j = 0; j < 4 - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

	
	printf("ARRAY: ");
	for (int a = 0 ; a < size ; a++){
		printf("%i " , array[a]);
	}
	
	
	
}