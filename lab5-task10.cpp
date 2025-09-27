#include<stdio.h>

main(){
	
	int x , y , z , result;
	char value;
	printf("enter three integers:\n");
	scanf("%i" "%i" "%u" , &x,&y,&z);
	if (x > y){
		if (x>z){
			result = x;
			value = 'x';
		}
		else{
			value = 'z';
			result = z;
		}
	}
	else if (y>x){
		if (y>z){
			value = 'y';
			result = y;
		}
		else{
			result = z;
			value = 'z';
		}
	}
	else{
		value = 'z';
		result = z;
	}
	printf("the largest value is %c : %i" , value , result);
}

