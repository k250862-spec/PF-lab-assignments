#include<stdio.h>

int main() {
    int num;
    printf("enter size of array: \n");
    scanf("%d", &num);  // Removed space after %d
    int arr[num];

    printf("enter elements of array:\n");  // Fixed formatting
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    printf("elements of array are:\n");
    for(int i = 0; i < num; i++) {
        printf("%d\n", arr[i]);
    }
    
    int nonzeroindex = 0;
    
    for (int i = 0; i < num; i++) {
        if (arr[i] != 0) {
            arr[nonzeroindex] = arr[i];
            nonzeroindex++;
        }
    }
    
    
    for (int i = nonzeroindex; i < num; i++) {
        arr[i] = 0;
    }

    printf("new elements of array are: \n");
    for(int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}