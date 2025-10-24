#include<stdio.h>

main(){
	int array1[5];
	int array2[5];
	int array3[10];
	
	for (int i = 0 ; i < 5 ; i++){
		printf("ENTER DATA FOR FIRST ARRAY: \n");
		scanf("%i" , &array1[i]);
		printf("ENTER DATA FOR SECOND ARRAY: \n");
		scanf("%i" , &array2[i]);
		
	}
	for (int i = 0; i < 10 ; i++){
		if (i < 5){
			array3[i] = array1[i];
		}
		else{
			array3[i] = array2[i-5];
		}
	}
	printf("MERGED ARRAY: \n");
	for (int i = 0 ; i < 10 ; i++){
		printf("%i " , array3[i]);
	}
	
}
