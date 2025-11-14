#include<stdio.h>
int findMax(int arr[] , int size){ 
	int highest = arr[0]; 
	for (int i = 0 ; i < size ; i++){ 
		if (arr[i] >= highest){ highest = arr[i];
		}
	}	
	return highest;
}

main(){ 
	int arr[5] = {10 , 20 , 30 , 40 , 50}; 
	int size = 5; 
	printf("the highest number is %d" , findMax(arr , size));
}
