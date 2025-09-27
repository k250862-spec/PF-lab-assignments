#include<stdio.h>
#include <math.h>

int main(){
	int num;
	float result;
	printf("enter your number: ");
	scanf("%d" , &num);
	result = sqrt ( num );
	printf("result: %.2f" , result);	
}
