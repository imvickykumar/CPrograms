#include<stdio.h>


struct student
{
  char name[20];
  int roll;
}student1;

int main()
{
	student1.roll=101;
	printf("%d",student1.roll);
	return 0;
}
