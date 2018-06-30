#include<stdio.h>
using namespace std;


struct student
{
  char name[20];
  int roll;
}std;

int main()
{
	
	std.roll=101;
	printf("%d",std.roll);
	return 0;
}
