#include <stdio.h>
#include <stdlib.h>

int main() {
    int initial_size;
    int *arr;
    int count = 0;
    int capacity;
    int input;
    
    printf("Enter the initial size of the array: ");
    scanf("%d", &initial_size);
    
    arr = (int*)malloc(initial_size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    capacity = initial_size;
    printf("Array created with capacity: %d\n", capacity);
    
    printf("Enter integers (enter -1 to stop):\n");
    
    while (1) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &input);
        
        if (input == -1) {
            break;
        }
        
        if (count >= capacity) {
            int new_capacity;
            
            printf("Array is full.Current capacity: %d\n", capacity);
            printf("Enter new capacity (must be > %d): ", capacity);
            scanf("%d", &new_capacity);
            
            if (new_capacity <= capacity) {
                printf("Error: New capacity must be greater than current capacity!\n");
                continue;
            }
            
            int *temp = (int*)realloc(arr, new_capacity * sizeof(int));
            
            if (temp == NULL) {
                printf("Memory reallocation failed! Keeping old array.\n");
                continue;
            }
            
            arr = temp;
            capacity = new_capacity;
            
            printf("Array resized.New capacity: %d\n", capacity);
        }
        
        arr[count] = input;
        count++;
        
        printf("Current array: [");
        for (int i = 0; i < count; i++) {
            printf("%d", arr[i]);
            if (i < count - 1) {
                printf(", ");
            }
        }
        printf("]\n");
        printf("Elements: %d/%d\n\n", count, capacity);
    }
    
    printf("FINAL ARRAY\n");
    printf("Total elements: %d\n", count);
    printf("Final capacity: %d\n", capacity);
    printf("Array elements: [");
    
    for (int i = 0; i < count; i++) {
        printf("%d", arr[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    
    printf("Memory addresses:\n");
    for (int i = 0; i < count; i++) {
        printf("arr[%d] = %d (address: %p)\n", i, arr[i], (void*)arr[i]);
    }
    
    free(arr);
    
    
    return 0;
}