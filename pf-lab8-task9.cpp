#include<stdio.h>

main(){
	int matrix [3][3];
	int transpose[3][3];
	int rotated[3][3];
	
	
	for (int i = 0; i < 3 ; i++){
		for (int j = 0 ; j < 3 ; j++){
			printf("enter data for row %d column %d: " , i+1 ,j+1);
			scanf("%d" , &matrix[i][j]);
		}
	}
	
	for (int i = 0; i < 3 ; i++){
		for (int j = 0 ; j < 3 ; j++){
			transpose[j][i] = matrix[i][j];
		}
	}
	
	printf("ORIGNAL MATRIX\n");
	for (int i = 0; i < 3 ; i++){
		for (int j = 0 ; j < 3 ; j++){
			printf("%d " , matrix[i][j]);
		}printf("\n");
	}
	
	printf("TRANSPOSE MATRIX\n");
	for (int i = 0; i < 3 ; i++){
		for (int j = 0 ; j < 3 ; j++){
			printf("%d " , transpose[i][j]);
		}printf("\n");
	}
	
	for (int i = 0; i < 3 ; i++){
		for (int j = 0 ; j < 3 ; j++){
			rotated[i][j] = transpose[i][2-j];
	}
	}
	printf("ROTATED MATRIX\n");
	for (int i = 0 ; i < 3 ; i++){
		for (int j = 0 ; j < 3 ; j++){
			printf("%d " , rotated[i][j]);
		}printf("\n");
	}
}