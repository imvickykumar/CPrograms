#include<conio.h>
#include<stdio.h>
#include<process.h>
#define MAX 50
int queue_arr[MAX];
int rear = -1;
int front = -1;
//This function will insert an element to the queue
void insert ()
{
int added_item;
if (rear==MAX-1)
{
printf("\nQueue Overflow\n");
getch();
return;
}
else
{
if (front==-1) /*If queue is initially empty */
front=0;
printf("\nInput the element for adding in queue:" );
scanf("%d", &added_item);
rear=rear+1;
//Inserting the element
queue_arr[rear] = added_item ;
}
}/*End of insert()*/
//THE QUEUES 69
//This function will delete (or pop) an element from the queue
void del()
{
if (front == -1 || front > rear)
{
printf ("\nQueue Underflow\n");
return;
}
else
{
//deleteing the element
printf ("\nElement deleted from queue is : %d\n");
queue_arr[front];
front=front+1;
}
}/*End of del()*/
//Displaying all the elements of the queue
void display()
{
int i;
//Checking whether the queue is empty or not
if (front == -1 || front > rear)
{
printf ("\nQueue is empty\n");
return;
}
else
{
printf("\nQueue is :\n");
for(i=front;i<= rear;i++)
printf("%d",queue_arr[i]);
printf("\n");
}
}/*End of display() */
int main()
{
int choice;
while (1)
{

//70 PRINCIPLES OF DATA STRUCTURES USING C AND C++
//Menu options
printf("\n1.Insert\n");
printf("“2.Delete\n”");
printf("“3.Display\n”");
printf("“4.Quit\n”");
printf("“\nEnter your choice:”");
scanf("%d", & choice);
switch(choice)
{
case 1 :
insert();
break;
case 2:
del();
getch();
break;
case 3:
display();
getch();
break;
case 4:
exit(1);
default:
printf ("“\n Wrong choice\n”");
getch();
}/*End of switch*/
}/*End of while*/
}/*End of main()*/
