#include<stdio.h>

main(){
	int primecount = 0;
	int ptimesum = 0;
	int check = 1;
	int number;
	
	
	printf("enter the number: ");
	scanf("%d" , &number);
	for(int i = 1 ; i <= number ; i++){
		for (int count = 2 ; count < i ; count++){
			if (count %  i == 0){
				primecheck = 0;
			}
		}
		if (primecheck == 1){
			primecount++;
			primesum = sum + i;
			printf("the number %d is a prime number\n" , i);
		}
	}
	printf("there were %d prime numbers\n" , primecount);
	printf("the sum of prime numbers is %d\n" , primesum);
}
