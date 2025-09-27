#include<stdio.h>

main(){
	int cn;
	char grade;
	
	printf("enter your course number 1 , 2 or 3 : \n");
	scanf("%d" , &cn);
	
	switch (cn)
	{
		
		case 1:
			printf("enter your grade\nA\nB\nC\nD\nF\n");
			scanf(" %c" , &grade);
			switch (grade)
			{
				
				case 'A':
					printf("excellent performance in course %d" , cn);
					break;
				case 'B':
					printf("good performance in course %d" , cn);
					break;
				case 'C':
					printf("average performance in course %d" , cn);
					break;
				case 'D':
					printf("need improvement in course %d" , cn);
					break;
				case 'F':
					printf("you failed course %d" , cn);
					break;
				default:
					printf("invalid grade ");
					break;
			}
			break;
		
		
			
		
		case 2:
				printf("enter your grade\nA\nB\nC\nD\nF\n");
			scanf(" %c" , &grade);
			switch (grade){
				
				case 'A':
					printf("excellent performance in course %d" , cn);
					break;
				case 'B':
					printf("good performance in course %d" , cn);
					break;
				case 'C':
					printf("average performance in course %d" , cn);
					break;
				case 'D':
					printf("need improvement in course %d" , cn);
					break;
				case 'F':
					printf("you failed course %d" , cn);
					break;
				default:
					printf("invalid grade ");
					break;
			}
			break;
		
			
		case 3:
			printf("enter your grade\nA\nB\nC\nD\nF\n");
			scanf(" %c" , &grade);
			switch (grade){
				
				case 'A':
					printf("excellent performance in course %d" , cn);
					break;
				case 'B':
					printf("good performance in course %d" , cn);
					break;
				case 'C':
					printf("average performance in course %d" , cn);
					break;
				case 'D':
					printf("need improvement in course %d" , cn);
					break;
				case 'F':
					printf("you failed course %d" , cn);
					break;
				default:
					printf("invalid grade ");
					break;
			}
			break;
		
		
		default:
			printf("invalid course number");
			break;
	}
}


