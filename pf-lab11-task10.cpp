#include<stdio.h>
#include<string.h>

struct moviedata{
	char tittle[100];
	char genre[100];
	char director[100];
	int releasedate;
	float rating;
};

struct moviedata movie[10];
int count;

void addmovie(){
	if (count >= 10){
		printf("movie space full\n");
		return;
	}
	
	printf("enter movie tittle: \n");
	scanf("%s" , &movie[count].tittle);
	printf("enter movie genre: \n");
	scanf("%s" , &movie[count].genre);
	printf("enter movie director: \n");
	scanf("%s" , &movie[count].director);
	printf("enter movie release data: \n");
	scanf("%d" , &movie[count].releasedate);
	printf("enter movie rating: \n");
	scanf("%f" , &movie[count].rating);
	count++;
	printf("movie added\n");	
}

void searchbygenre(){
	char searchgenre[100];
	int found = 0;
	printf("enter the genre you want to search: \n");
	scanf("%s" , &searchgenre);
	
	for (int i = 0 ; i < count ; i++){
		if (strcmp(searchgenre , movie[i].genre) == 0){
			found = 1;
			printf("movie tittle: %s\n" , movie[i].tittle);
			printf("movie director: %s\n" , movie[i].director);
			printf("movie release date: %d\n" , movie[i].releasedate);
			printf("movie rating: %.2f\n" , movie[i].rating);
			printf("\n");
		}
	}
	
	if (found == 0){
		printf("no movie of this genre\n");
	}
}

void displaymovies(){
	if (count == 0){
		printf("no movies to display\n");
		return;
	}
	
	for (int i = 0 ; i < count ; i++){
		printf("movie number %d\n" , i+1);
		printf("movie tittle: %s\n" , movie[i].tittle);
		printf("movie genre: %s\n" , movie[i].genre);
		printf("movie director: %s\n" , movie[i].director);
		printf("movie release date: %d\n" , movie[i].releasedate);
		printf("movie rating: %.2f\n" , movie[i].rating);
		printf("\n");
	}
	
}

main(){
	int choice;
	printf("enter your choice from the following\n");
	printf("1. Add Movie\n");
    printf("2. Search by Genre\n");
    printf("3. Display All Movies\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    while (choice >= 1 && choice <= 4){
    	if (choice == 1){
    		addmovie();
    		printf("enter your choice from the following\n");
			printf("1. Add Movie\n");
    		printf("2. Search by Genre\n");
    		printf("3. Display All Movies\n");
    		printf("4. Exit\n");
    		printf("Enter your choice: ");
    		scanf("%d", &choice);
		}
		else if (choice == 2){
			searchbygenre();
			printf("enter your choice from the following\n");
			printf("1. Add Movie\n");
    		printf("2. Search by Genre\n");
    		printf("3. Display All Movies\n");
    		printf("4. Exit\n");
    		printf("Enter your choice: ");
    		scanf("%d", &choice);	
		}
		else if (choice == 3){
			displaymovies();
			printf("enter your choice from the following\n");
			printf("1. Add Movie\n");
    		printf("2. Search by Genre\n");
    		printf("3. Display All Movies\n");
    		printf("4. Exit\n");
    		printf("Enter your choice: ");
    		scanf("%d", &choice);
		}
		else if (choice == 4){
			printf("system exit\n");
			break;
		}
    }
}