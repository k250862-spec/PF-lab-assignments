#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *datafile;
	int ids[3];
	datafile = fopen("data.txt", "w");
 	if (datafile == NULL) {
 		printf("Unable to open file for writing.\n");
 	exit(1);
 		}
	printf("Input three IDs:\n");
 	for (int i = 0; i < 3; i++) {
 		printf("ID %d: ", i + 1);
 		if (scanf("%d", &ids[i]) != 1) {
 			printf("Invalid ID entered.\n");
 			fclose(datafile);
 			exit(1);
 			}	
 			fprintf(datafile, "%d\n", ids[i]);
 	}
 	fclose(datafile);
 	datafile = fopen("data.txt", "r");
 	if (datafile == NULL) {
 		printf("Unable to open file for reading.\n");
 		exit(1);
	}
	printf("\nIDs from file:\n");
 	for (int i = 0; i < 3; i++) {
 		if (fscanf(datafile, "%d", &ids[i]) == 1) {
 			printf("ID %d: %d\n", i + 1, ids[i]);
 		} 
		else {
 			printf("Error reading ID %d from file.\n", i + 1);
 				fclose(datafile);
 				exit(1);
 			}
 	}
 	
 	fclose(datafile);
 	return 0;
}
