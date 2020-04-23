#include <stdio.h>
#include "extras.h"
#include <string.h>

// Function: defragment()
// Input: record - array of Records; this may contain empty elements in the middle
// Output: 1 if successful, otherwise 0
// - Leave a brief information about the function
int defragment(Record records[]){
	// TODO: Modify this function as you need
	printf("defragment(): this function needs to be implemented\n\n");
	return 0;	// TODO: return 1 if defragment succeed; return 0 otherwise 
}


// Function: add_a_record()
// Input: record - array of Records; this may contain empty elements in the middle
// Output: none
// - Leave a brief information about the function
void display_stats(Record records[],int cnt){
  int num;
  int count=0;

  printf("Enter the number of seats you want for the vehicle.: ");
  scanf("%d",&num);
  getchar();
  printf("List of rentalable vehicles\n");
  for(int i=0;i<cnt;i++){
    if(records[i].numberofseat>=num && records[i].rentability==1){
      printf("no.%d Vehicle number: %d the number of seats: %d\n",count+1,records[i].carnumber,records[i].numberofseat);
      count++;
    }
  }

	// TODO: Modify this function as you need
 // TODO: Remove this line
}

void rent_a_car(Record records[],int cnt){
	// TODO: Modify this function as you need
  //Record records[cnt+1]=(Record)malloc(sizeof(Record));
  int num,yn;

  //records[cnt+1]=*(Record*)malloc(sizeof(Record));

  printf("Enter the number of the car you want to rent.");
  scanf("%d",&num);
  printf("no.%d Vehicle number: %d the number of seats : %d\n",num,records[num-1].carnumber,records[num-1].numberofseat);
  if(records[num-1].rentability==1){
    printf("possibility\n");
  }
  else{
    printf("impossibility\n");
  }

  getchar();
  for(int i=num-1;i<cnt;i++){
    records[i-1].carnumber=records[i].carnumber;
    records[i-1].numberofseat=records[i].numberofseat;
    records[i-1].rentability=records[i].rentability;
  }
  printf("Car hire complete!!\n");
  
  //records=(Record)malloc(sizeof(Record));
  
}
/*
void sortlist(Record records[],int cnt){
  char c[10];
  int temp,temp1,temp2;
  int num=0;

  printf("정렬할 리스트 기준을 입력하시오(numberseat or rentability) :");
  scanf("%s",c);
  printf("%s",c);
  printf("%d\n",cnt);
  getchar();
 

  if(num==strcmp(c, "numberseat")){
    printf("%d",cnt);
    for(int i=0;i<cnt-1;i++){
      for(int j=0;j<cnt-1-i;j++){
        if(records[j].numberofseat>records[j+1].numberofseat){
          temp1=records[j].numberofseat;
          records[j].numberofseat=records[j+1].numberofseat;
          records[j+1].numberofseat=temp1;
          temp=records[j].rentability;
          records[j].rentability=records[j+1].rentability;
          records[j+1].rentability=temp;
          temp2=records[j].carnumber;
          records[j].carnumber=records[j+1].carnumber;
          records[j+1].carnumber=temp2;
        }
      }
    }
    for(int i=0;i<cnt;i++){
      printf("차량번호: %d 좌석수 : %d 차량대여가능여부: ",records[i].carnumber,records[i].numberofseat);
      if(records[i].rentability==1){
        printf("가능\n");
      }
      else{
        printf("불가능\n");
      }
    }
  }

  else{
    for(int i=0;i<cnt-1;i++){
      for(int j=0;j<cnt-1-i;j++){
        if(records[j].rentability>records[j+1].rentability){
          temp1=records[j].numberofseat;
          records[j].numberofseat=records[j+1].numberofseat;
          records[j+1].numberofseat=temp1;
          temp=records[j].rentability;
          records[j].rentability=records[j+1].rentability;
          records[j+1].rentability=temp;
          temp2=records[j].carnumber;
          records[j].carnumber=records[j+1].carnumber;
          records[j+1].carnumber=temp2;
        }
      }
    }
    
    for(int i=0;i<cnt;i++){
      printf("%d\n",cnt);
      printf("차량번호: %d 좌석수 : %d 차량대여가능여부: ",records[i].carnumber,records[i].numberofseat);
      if(records[i].rentability==1){
        printf("가능\n");
      }
      else{
        printf("불가능\n");
      }
    }
  }

}*/
