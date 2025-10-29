#include<stdio.h>
main(){ 
	int num; 
	printf("enter the size of matrix: "); 
	scanf("%d" , &num);
	int array[num][num];
	int maindiagsum = 0; 
	int secdiagsum , total; 
	printf("\n"); 
	for (int i = 0 ; i < num ; i++){ 
		for (int j = 0 ; j < num ; j++){ 
			printf("enter data in row %d column %d: " , i , j); 
			scanf("%d"  , &array[i][j]);
		}		
	}
	for (int i = 0 ; i < num ; i++){ 
		for (int j = 0 ; j < num ; j++){ 
			if (i == j){
				maindiagsum = maindiagsum + array[i][j];
			} 
			else if (i+j == num - 1){ 
				secdiagsum = secdiagsum + array[i][j];
			}
		}
	}
	total = secdiagsum + maindiagsum;
	if ( num % 2 != 0){ total -= array[num/2][num/2];
	}
	printf("the sum of the main diagnol is: %d\n" , maindiagsum); 
	printf("the sum of the secondary diagnol is: %d\n" , secdiagsum); 
	printf("the total of both diagnols is: %d\n" , total);
}
