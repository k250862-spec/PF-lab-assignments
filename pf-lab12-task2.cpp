#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for 5 integers using malloc()
    int *arr = (int*)malloc(5 * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Memory allocated successfully at address: %p\n", (void*)arr);
    
    // Initialize the array with some values
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }
    
    // Print the values
    printf("Array values: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // First free - deallocate the memory
    free(arr);
    printf("First free() called.\n");
    
    // Second free - attempt to free the same memory again
    free(arr);
    printf("Second free called.\n");
     
    
    
    return 0;
}