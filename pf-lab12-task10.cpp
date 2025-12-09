#include <stdio.h>
#include <stdlib.h>

int main() {
    int *original_ptr;
    int *new_ptr;
    
    printf("allocating memory for 5 integers\n");
    original_ptr = (int *)malloc(5 * sizeof(int));
    
    if (original_ptr == NULL) {
        printf("allocation failed\n");
        return 1;
    }
    
    printf("original pointer: %p\n", (void *)original_ptr);
    
    for (int i = 0; i < 5; i++) {
        original_ptr[i] = (i + 1) * 10;
    }
    
    printf("initial values: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", original_ptr[i]);
    }
    printf("\n\n");
    
    printf("resizing to 10 integers using realloc()\n");
    new_ptr = (int *)realloc(original_ptr, 10 * sizeof(int));
    
    if (new_ptr == NULL) {
        printf("realloc failed\n");
        free(original_ptr);
        return 1;
    }
    
    printf("new pointer: %p\n", (void *)new_ptr);
    
    for (int i = 5; i < 10; i++) {
        new_ptr[i] = (i + 1) * 10;
    }
    
    printf("resized array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", new_ptr[i]);
    }
    printf("\n\n");
    
    printf("freeing original ptr\n");
    free(original_ptr);
    printf("freed\n\n");
    
    printf("attempting to access original_ptr after free\n");
    printf("reading values: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", original_ptr[i]);
    }
    printf("\n\n");
    
    printf("writing to original_ptr\n");
    for (int i = 0; i < 5; i++) {
        original_ptr[i] = 999;
    }
    
    printf("values after write: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", original_ptr[i]);
    }
    printf("\n\n");
    
    printf("new_ptr contents: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", new_ptr[i]);
    }
    printf("\n");
    
    return 0;
}