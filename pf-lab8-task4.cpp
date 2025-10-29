#include<stdio.h>

main(){
	int check1 = 0;
	int check2 = 0;
	int matrix[3][3];
	for (int i = 0 ; i < 3 ; i++){
		for (int j= 0 ; j < 3 ; j++){
			printf("enter data: \n");
			scanf("%d" , &matrix[i][j]);
		}
	}
	
	if (matrix[0][1] == matrix[0][2] && matrix[0][1] == matrix[1][2] && matrix[0][2] == matrix[1][2]){
		printf("matrix is lower traingle\n");
	}
	else if (matrix[1][0] == matrix[2][0] && matrix[1][0] == matrix[2][1] && matrix[2][0] ==  matrix[2][1]){
		printf("matrix is upper triangle");
	}
	else {
		printf("neither\n");
	}

}