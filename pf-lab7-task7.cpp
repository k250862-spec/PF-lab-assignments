#include<stdio.h>

main(){
	int ID;
	int count = 0;
	int inventory[10];
	int inventory2[10] = {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0};
	
	for (int i = 0 ; i < 10 ; i++){
		printf("enter a 3-digit ID: \n");
		scanf("%d" , &inventory[i]);
	}
	printf("enter the 3-digit ID to remove: \n");
	scanf("%d" , &ID);
	
	for (int i = 0 ; i < 10 ; i++){
		if (ID == inventory[i]){
			inventory[i] = 0;
		}
		else{
			inventory2[count] = inventory[i];
			count++;
		}
	}
	
	printf("UPDATED INVENTORY: \n");
	for (int i = 0 ; i < 10 ; i++){
		if (inventory2[i] != 0){
			printf("%d " , inventory2[i]);
		}
	}
}