#include<stdio.h>
main(){ 
	int array1[3][3]; 
	int array2[3][3]; 
	int symmetric = 0;
	for (int i = 0 ; i < 3 ; i++){ 
		for (int j = 0 ; j < 3 ; j++){ 
			printf("enter data in row %d and column %d : " , i+1,j+1); 
			scanf("%d" , &array1[i][j]);
		}		
	}
	for (int i = 0 ; i < 3 ; i++){ 
		for (int j = 0 ; j < 3 ; j++){ 
			array2[i][j] = array1[j][i];
		}
	} printf("\n"); 
	
	for (int i = 0 ; i < 3 ; i++){ 
		for (int j = 0 ; j < 3 ; j++){ 
			if (array1[i][j] == array2[i][j]){ 
				symmetric = 1;
			} 
			else{ printf("not symmetric\n"); 
			break;
			}
		}	
	}
	if (symmetric == 1){ 
	printf("symmetric\n");
	}
}
