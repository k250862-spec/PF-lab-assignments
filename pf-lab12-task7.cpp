#include<stdio.h>
#include<stdlib.h>

main(){
	int *ptr1;
	ptr1 = (int *)malloc(5 * sizeof(int));
	
	if (ptr1 == NULL){
		printf("memory allocation failed\n");
		return 1;
	}
	
	printf("memory allocated: %d\n" , (void*)ptr1);
	
	printf("allocating values\n");
	*ptr1 = 1;
    *(ptr1 + 1) = 2;
    *(ptr1 + 2) = 3;
    *(ptr1 + 3) = 4;
    *(ptr1 + 4) = 5;
    printf("orignal data\n");
    printf("%d %d %d %d %d\n\n", *ptr1, *(ptr1+1), *(ptr1+2), *(ptr1+3), *(ptr1+4));
    
    printf("resizing memory\n");
    int *ptr2;
    ptr2 = (int *)realloc(NULL , 10 * sizeof(int));
    
    if (ptr2 == NULL) {
        printf("Memory reallocation failed!\n");
        free(ptr1);
        return 1;
    }
    
    printf("New memory allocated at address: %p\n", (void*)ptr2);
    

    if (ptr1 == ptr2) {
        printf("Result: Pointers are the SAME\n");
    } else {
        printf("Result: Pointers are DIFFERENT\n");
    }
    
    

    
}