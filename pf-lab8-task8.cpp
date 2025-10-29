#include<stdio.h>

main(){
	int matrix[3][3];
	int highest , lowest;
	int even = 0, odd = 0, negative = 0, zero = 0, positive = 0;
	
	for (int i = 0 ; i < 3 ; i++){
		for (int j = 0 ; j < 3 ; j++){
			printf("enter data in row %d column %d of the matrix: " , i+1 , j+1);
			scanf("%i" , &matrix[i][j]);
		}
	}
	
	highest = matrix[0][0];
    lowest = matrix[0][0];
    
	for (int i = 0 ; i < 3 ; i++){
		for (int j = 0 ; j < 3 ; j++){
			if (matrix[i][j] >= highest){
				highest = matrix[i][j];
			}
			if (matrix[i][j] <= lowest){
				lowest = matrix[i][j];
			}
			if (matrix[i][j] % 2 == 0){
				even++;
			}
			else{
				odd++;
			}
			if (matrix[i][j] > 0){
				positive++;
			}
			else if (matrix[i][j] < 0){
				negative++;
			}
			else {
				zero++;
			}
		}
	}
	
	printf("the highest number is: %d\n" , highest);
	printf("the lowest number is: %d\n" , lowest);
	printf("amount of even numbers: %d\n" , even);
	printf("amount of odd numbers: %d\n" , odd);
	printf("amount of positive numbers: %d\n" , positive);
	printf("amount of nrgative numbers: %d\n" , negative);
	printf("amount of zero value numbers: %d\n" , zero);
}