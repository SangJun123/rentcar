#include <stdio.h>
#include "base.h"
#include <stdlib.h>

void print_all_records(Record records[],int cnt){
  printf("********************\n");
  for(int i=0;i<cnt;i++){
    printf("no.%d Vehicle number: %d the number of seats : %d Vehicle rental status: ",i+1,records[i].carnumber,records[i].numberofseat);
    if(records[i].rentability==1){
      printf("possibility\n");
    }
    else{
      printf("impossibility\n");
    }
  }
  printf("********************\n");

	// TODO: Modify this function as you need

}


void add_a_record(Record records[],int cnt){
	// TODO: Modify this function as you need
  //Record records[cnt+1]=(Record)malloc(sizeof(Record));
  records[cnt+1]=*(Record*)malloc(sizeof(Record));

  printf("the number of seats / Vehicle number / Vehicle rental status (0:possibility, 1:impossibility)\n");
  //records=(Record)malloc(sizeof(Record));
  scanf("%d",&records[cnt].numberofseat);
  scanf("%d",&records[cnt].carnumber);
  scanf("%d",&records[cnt].rentability);
  //scanf("%c",records[cnt].carname);
  getchar();
  
  printf("Return completed!\n");
}

void savelist(Record records[], int cnt){
  FILE*fp;
  fp=fopen("carlist.txt","wt");
  for(int i=0;i<cnt;i++){
    fprintf(fp,"%d ",records[i].numberofseat);
    fprintf(fp,"%d ",records[i].carnumber);
    fprintf(fp,"%d ",records[i].rentability);
    fprintf(fp,"\n");
  }
  
  fclose(fp);
  printf("Saved successfully. !!!\n");
}

void delete_condition(Record records[], int cnt) { 
// 2. Delete all but : allows the user to enter a condition and delete all the records that does not satisfy the condition
	int input, rememberIndex;
	printf("Enter Vehicle number to save from deletion: ");
	scanf("%d", &input);
	for(int i = 0 ; i < cnt ; i++) {
		if(records[i].carnumber == input){
			rememberIndex = i;
			continue;
		}
		
		else {
			records[i].carnumber = 0;
			records[i].numberofseat = 0;
			records[i].rentability = 0;
		}
	}
	records[0].carnumber = records[rememberIndex].carnumber;
	records[0].numberofseat = records[rememberIndex].numberofseat;
	records[0].rentability = records[rememberIndex].rentability;
	// move saved record from index i to index 0
        printf("Delete complete!\n");	
}
