#include<stdio.h>
#include<stdlib.h>

main(){
	int *arr;
	int n;
	
	printf("Enter the number of integers you want to store: ");
    scanf("%d", &n);
	arr = (int *)malloc(n);
	
	if (arr == NULL) {
        printf("Memory allocation failed!\n");
    	return 1;
    }
    
    printf("Memory allocated at address: %p\n", (void *)arr);
    
    printf("assigning values to the array\n");
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    printf("printing array values:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    free(arr);


	
	
}