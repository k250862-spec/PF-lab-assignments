#include<stdio.h>
main(){
	int arr[10] = {1, 2 , 3 , 6 , 8, 9 , 4 , 2, 1};
	int even = 0; 
	int odd = 0; 
	int value;
	for (int i = 0 ; i <= 9 ; i++){ 
		value = arr[i]; 
		if (value%2 == 0){ 
			even = even + value;
		} 
		else if(value%2 != 0){ 
			odd = odd + value;
		} 
		else{ 
		printf("there is no even or odd number\n");
	}
	}
	
	printf("ODD SUM: %d\n" , odd); printf("EVEN SUM: %d\n" , even);
}
