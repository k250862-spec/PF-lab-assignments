#include<stdio.h>

main(){
	int primecount = 0;
	int primesum = 0;
	int number;
	
	
	printf("enter the number: ");
	scanf("%d" , &number);
	for(int i = 2 ; i <= number ; i++){
		int primecheck = 1;
		int count = 2;
		while ( count < i){
			if (i % count == 0){
				primecheck = 0;
				break;
			}
			count = count + 1;
		}
		if (primecheck == 1){
			primecount++;
			primesum = primesum + i;
			printf("the number %d is a prime number\n" , i);
		}
	}
	printf("there were %d prime numbers\n" , primecount);
	printf("the sum of prime numbers is %d\n" , primesum);
}

