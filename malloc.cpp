#include<stdio.h>
#include<malloc.h>

struct emp {
   int eid;
   char name[10];
}*ptr;

int main() {
   int i;

   printf("Enter the Employee Details : ");
   ptr = (struct emp *) malloc(sizeof(struct emp));

   printf("\nEnter the Employee ID : ");
   scanf("%d", &ptr->eid);
   printf("\nEnter the Employee Name : ");
   scanf("%s", ptr->name);

   printf("\nEmployee Details are : ");
   printf("\nRoll Number : %d", ptr->eid);
   printf("\nEmployee Name : %s", ptr->name);

   return (0);
}
