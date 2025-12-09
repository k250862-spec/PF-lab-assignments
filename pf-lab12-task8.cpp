#include<stdio.h>
#include<stdlib.h>

main(){
	int *arr;
	arr = (int *)malloc(5 * sizeof(int));
	
	if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    printf("memory allocated at address: %p\n" , (void*)arr);
    printf("\n");
    printf("populating array\n");
    for (int i = 0 ; i < 5 ; i++){
    	arr[i] = i * 5;
	}
	
	printf("old array contents: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    printf("performing sum\n");
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    
    printf("old sum: %d\n" , sum);
    
    printf("assigning new values to the array\n");
    for (int i = 0; i < 10; i++) {
        arr[i] = (i + 1) * 10;
    }
    
    printf("calculating new sum\n");
    sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }
    printf("New sum of array elements: %d\n", sum);
    
    printf("new array contents: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}