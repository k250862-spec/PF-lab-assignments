#include<stdio.h>;

main(){
	struct employeedata{
		int ID;
		char name[100];
		int salary;
		char position[100];
	};
	
	struct employeedata employee[5];
	printf("enter employee data");
	printf("\n");	
	for (int i = 0 ; i < 5 ; i++){
		printf("enter employee id for employee %d: \n" , i+1);
		scanf("%d" , &employee[i].ID);
		printf("enter employee name for employee %d: \n" , i+1);
		scanf("%s" , &employee[i].name);
		printf("enter employee salary for employee %d: \n" , i+1);
		scanf("%d" , &employee[i].salary);
		printf("enter employee position for employee %d: \n" , i+1);
		scanf("%s" , &employee[i].position);
		printf("\n");
	}
	
	int highest = 0;
	char name[100];
	int id;
	char pos[100];
	int index = 0;
	for (int i = 0 ; i < 5 ; i++){
		if (employee[i].salary >= highest){
			highest = employee[i].salary;
			index = i;
		}
	}
	
	printf("highest paid employee id: %d\n" , employee[index].ID);
	printf("highest paid employee name: %s\n" , employee[index].name);
	printf("hihgest paid employee position: %s\n" , employee[index].position);
	printf("highest paid employee salary: %d\n" , employee[index].salary);
}