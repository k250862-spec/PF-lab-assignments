#include <stdio.h>

main() {
    int rows, currentRow, column, spacing;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("\nPascal's Triangle:\n\n");
    
    for(currentRow = 0; currentRow < rows; currentRow++) {
        for(spacing = 1; spacing <= rows - currentRow; spacing++) {
            printf(" ");
        }
        
        int value = 1;
        
        for(column = 0; column <= currentRow; column++) {
            printf("%d ", value);
            value = value * (currentRow - column) / (column + 1);
        }
        printf("\n");
    }
    
}