#include<stdio.h>

main(){
	int arr[4];
	int sum[4];
	int total;
	printf("enter data in array: \n");
	for (int i = 0 ; i < 4 ; i++){
		scanf("%i" , &arr[i]);
	}
	sum[0] = arr[0];
	total = arr[0];
	for (int j = 1 ; j < 4 ; j++){
		total = total + arr[j];
		sum[j] = total;
	}
	printf("ARRAY\n");
	for (int i = 0 ; i < 4 ; i++){
		printf("%d " , arr[i]);
	}
	printf("\n");
	printf("sum array\n");
	for (int i = 0 ; i < 4 ; i++){
		printf("%d " , sum[i]);
	}
}