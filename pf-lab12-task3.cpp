#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(5 * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Memory allocated at address: %p\n", (void*)ptr);
    

    printf("initialisation:\n");
    for (int i = 0; i < 5; i++) {
        *(ptr + i) = (i + 1) * 10;  
        printf("Initialized *(ptr + %d) = %d\n", i, *(ptr + i));
    }
    

    printf("Printing array values using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }
    
    printf("various pointer arithmetic operations:\n");
    printf("Base pointer address: %p\n", (void*)ptr);
    printf("ptr + 2 address: %p\n", (void*)(ptr + 2));
    printf("Value at ptr + 2: %d\n", *(ptr + 2));

    free(ptr);

    
    return 0;
}