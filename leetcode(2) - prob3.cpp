#include<stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter sorted array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    if (n == 0) {
        printf("0");
        return 0;
    }
    
    int k = 1;
    
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    
    printf("Number of unique elements: %d\n", k);
    printf("Unique elements: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    
    return 0;
}