#include <stdio.h>
#include <string.h>
#include "base.h"
#include <stdio.h>
#include <string.h>
#include "base.h"
#include "extras.h"
#include "record.h"

#define MAX_RECORDS 1000
int count=0;

// function prototypes
void input_handler(char[], Record[]);
void display_menu();

// main function
int main(){

	Record records[MAX_RECORDS];
	char user_input[64] = "";
	while(strcmp(user_input, "99") != 0){
		display_menu();
		printf("\nSelect a menu> ");
		fgets(user_input, 64, stdin);
		user_input[strlen(user_input)-1] = '\0';
		input_handler(user_input, records);
	}

	return 0;
}
void input_handler(char input[], Record records[]){

	if(!strcmp(input, "1")){
    add_a_record(records,count); 
    count++;
  }
	else if(!strcmp(input, "2")){
    print_all_records(records,count);
  }	
	else if(!strcmp(input, "3")){
    display_stats(records,count);
  }	
  else if(!strcmp(input, "4")){
    savelist(records,count);
  }
  else if(!strcmp(input, "5")){
    rent_a_car(records,count);
    count=count-1;
  }
  /*else if(!strcmp(input, "6")){
    sortlist(records,count);
  }*/
	else if(!strcmp(input, "99")){
    printf("Terminating... bye!\n");
  } // Quit - no operation (an empty statement with a semi-colon)
	else{
    printf("Unknown menu: %s \n\n", input);
  }
}

void display_menu(){


	printf("******************************\n");
	printf(" Rent a Car system \n");
	printf("******************************\n");
	printf(" 1. Retun a Car\n");
	printf(" 2. Print all cars\n");
	printf(" 3. Search Car\n");
  printf(" 4. Save all list\n");
  printf(" 5. Rent a Car\n");
  //printf(" 6. Sort List\n");
	printf(" 99. Quit\n");
}
















































