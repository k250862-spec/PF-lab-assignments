#include<stdio.h>

main(){
	int scores [10] = {78 , 56 ,35 , 90 , 56 , 23 , 65 , 67 , 13 , 93};
	int temp;
	float median;
	
	for (int i = 0 ; i < 10 ; i++){
		for (int j = 0 ; j < 10 ; j++){
			if (scores[j] > scores[j+1]){
				temp = scores[j+1];
				scores[j+1] = scores[j];
				scores[j] = temp;
			}
		}
	}
	median = (scores[4] + scores[5]) /2 ;
	
	for (int i = 0 ; i < 10 ; i++){
		printf("%d\n" , scores[i]);
	}
	printf("median score: %.2f\n" , median);
}