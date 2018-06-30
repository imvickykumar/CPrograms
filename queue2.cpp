#define SIZE 10
#include<stdio.h>
int i,c;
struct queue
{    int front,rear;
    int A[SIZE];
};
struct queue*q;
int isEmpty(struct queue*q1)
{
    return (q1->front>q1->rear)||(q1->front==-1);
}
void enqueue(struct queue*q1)
{
    if((q1->rear==SIZE-1)&&!isEmpty(q1))
    printf("Queue is full\n");
    else
    {if(isEmpty(q1))
     {q1->front=q1->rear=0;
    scanf("%d",&q1->A[q1->rear]);
     printf("\nElement is added\n");
      }
    else
    { scanf("%d",&q1->A[++q1->rear]);
     printf("\nElement is added\n");
      }
     }
}
void dequeue(struct queue*q1)
{
    if(isEmpty(q1))
    printf("Queue is empty\n");
    else
    {
	q1->front++;
	printf("Element is deleted\n");
    }
}
int main()
{q->front=q->rear=-1;

i=0;
while(i==0)
{
printf("Enter 1 for adding an element\nEnter 2 to delete an element\nEnter 3 to exit\n");
scanf("%d",&c);
switch(c)
{
    case 1:
    enqueue(q);
    break;
    case 2:
    dequeue(q);
    break;
    case 3:
    i=1;
    break;
    default:
    printf("\nWrong choice please enter again\n");
    
}
}
return 0;
}
