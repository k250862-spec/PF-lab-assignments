#include<stdio.h>

main(){
	int grade [10] = { 56 , 76, 90 , 43 , 53 , 78 , 94 , 34 , 84 , 59};
	int highest = grade[0];
	int lowest = grade[0];
	int highestindex;
	int lowestindex;
	int total = 0;
	float avg = 0;
	
	printf("GRADES OF ALL STUDENTS\n");
	for (int i = 0 ; i < 10 ; i++){
		printf("%d\n" , grade[i]);
		total = total + grade[i];
		if (grade[i] > highest){
			highest = grade[i];
			highestindex = i;
		}
		else if (grade[i] < lowest){
			lowest = grade[i];
			lowestindex = i;
		}
	}
	
	avg = (total / 10);
	printf("the average grade i : %0.2f\n" , avg);
	printf("the highest grade is: %d\n" , highest);
	printf("index of highest grade: %d\n" , highestindex);
	printf("the lowest grade is: %d\n" , lowest);
	printf("index of lowest grade is: %d\n" , lowestindex);
}