#include<stdio.h>

main(){
	
	int x , y , z , result;
	printf("enter three integers:\n");
	printf("x: ");
	scanf("%d" , &x);
	printf("y: ");
	scanf("%d" , &y);
	printf("z: ");
	scanf("%d" , &z);
	result = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y:z );
	printf("the largest numver is : %d" , result);
	
}

