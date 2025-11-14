#include<stdio.h>

int add(int a , int b){
	return a+b;
}

float divide(float a , float b){
	return float(a/b);
}

int subtract(int a , int b){
	return int (a-b);
}

int multiply(int a , int b){
	return a*b;
}
main(){
	int a ; int b;
	int choice;
	printf("enter 2 numbers: \n");
	scanf("%d %d" , &a , &b);
	printf("enter choice: ");
	scanf("%d" , &choice);
	if (choice == 1){
		int (* ptr)(int , int) = add;
		printf("sum: %d" , ptr(a , b));
	}
	else if (choice == 2){
		float (* ptr)(float , float) = divide;
		printf("divison: %.2f" , ptr(a,b));
	}
	else if (choice == 3){
		int (* ptr)(int , int) = subtract;
		printf("subtraction: %i" , ptr(a,b));
	}
	else if (choice == 4){
		int (* ptr)(int , int ) = multiply;
		printf("multiply: %d" , ptr(a,b));
	}
	else{
		printf("invalid choice");
	}
}