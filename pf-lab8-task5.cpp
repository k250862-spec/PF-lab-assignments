#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int l = n + (n - 1);
    
    for(int i = 1; i <= n; i++) {
        for(int m = 1; m <= n - i; m++) {
            printf(" ");
        }
        for(int r = 1; r <= i; r++) {
            printf("* ");
        }
        for(int m = 1; m <= n - i; m++) {
            printf(" ");
        }
        printf("\n");
    }
    
    for(int i = n - 1; i >= 1; i--) {
        for(int m = 1; m <= n - i; m++) {
            printf(" ");
        }
        for(int r = 1; r <= i; r++) {
            printf("* ");
        }
        for(int m = 1; m <= n - i; m++) {
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}