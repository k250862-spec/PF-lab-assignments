#include<stdio.h> 
int arr[2][3]; 
int sum;
void displayMatrix(int arr[2][3]){
	for (int i = 0 ; i < 2 ; i++){
		for (int j = 0 ; j < 3 ; j++){ 
		printf("the element at row %d and column %d is : %d" , i+1 , j+1 , arr[i][j]); 
		printf("\n");
		}
	}
}

int calculateSum(int arr[2][3]){
	for (int i = 0 ; i < 2 ; i++){
		for (int j = 0 ; j < 3 ; j++){ sum = sum + arr[i][j];
		}
	}
	return sum;
}

float calculateAverage(int arr[2][3]){ 
	float avg = sum / 6; 
	return avg;
}

int findMax(int arr[2][3]){ 
	int max = arr[0][0]; 
	for (int i = 0 ; i < 2 ; i++){
		for (int j = 0 ; j < 3 ; j++){
			if (arr[i][j] >= max){
				max = arr[i][j];
			}				
		}	
	}
	return max;
}

main(){
	int arr[2][3] = {{10 , 12 , 35} , {50 , 65 , 99}};
	displayMatrix(arr); 
	printf("the sum is : %d\n" , calculateSum(arr)); 
	printf("the average is: %.2f\n" , calculateAverage(arr)); 
	printf("the max value is : %d\n" , findMax(arr));
}
