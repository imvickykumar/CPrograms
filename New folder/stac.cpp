#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 100

int a[size];
int top=-1;


void push()
{
	int item;
	if(top==size-1){
		printf("stack is full");
	}
	else
	{
		printf("enter item to be pushed");
		scanf("%d",item);
		top=top+1;
		a[top]=item;
	}
}

void pop()
{
	if (top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		top=top-1;
		
	}
	
	
}
void Print()
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	printf(" ");
}
	
	
	

int main()
{
	push(); Print();
	pop();Print();
	return 0;

}
