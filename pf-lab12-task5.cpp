#include<stdio.h>
#include<stdlib.h>

main(){
	int rows;
	int cols;
	printf("enter the number of rows and columns: ");
	scanf("%d %d" , &rows , &cols);
	
	int **matrix;
	
	matrix = (int**)calloc(rows , sizeof(int *));
	if (matrix == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
	}
	
	for (int i = 0 ; i < rows ; i++){
		matrix[i] = (int *)calloc(cols , sizeof(int *));
		if (matrix[i] == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
        }
	}
	
	
	//array before user input
    printf("Matrix initialized to zero:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
	
	printf("user input\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter value for matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    
    printf("The entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}