#include <stdio.h> #include <string.h>
main(){
	int arr[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8, 9, 10}; 
	int count = 9; 
	int temp ; 
	int sum = 0;
	printf("ORIGNAL array\n");
	for (int i = 0 ; i <10 ; i++){ 
		printf("%d " , arr[i]);
	} 
	printf("\n"); 
	for (int a = 0 ; a< 5 ; a++){ 
	temp = arr[a]; arr[a] = arr[count]; 
	arr[count] = temp;
	count--;
	} 
	printf("\n"); 
	printf("REVERSED ARRAY\n");
	for (int i = 0 ; i <10 ; i++){ 
	printf("%d " , arr[i]); 
	sum = sum + arr[i];
	} 
	printf("\n"); 
	printf("the sum is: %d\n" , sum);
}
