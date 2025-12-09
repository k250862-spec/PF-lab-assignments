#include<stdio.h>
#include<stdlib.h>


main (){
	int *arr;
	arr = (int *)malloc(5 * sizeof(int));
	
	if (arr == NULL){
		printf("memory allocation failed");
		return 1;
	}
	
	printf("enter data in array\n");
	for (int i = 0 ; i < 5 ; i++){
		printf("enter data: ");
		scanf("%d" , &arr[i]);
	}printf("\n");
	
	
	 printf("Data in array:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
   
    printf("6th element:\n");
    printf("arr[5] = %d\n", arr[5]);
    free(arr);
}
	

