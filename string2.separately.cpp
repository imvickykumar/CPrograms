#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	gets(a);
	int i=0;
	for(i=0;i<=9;i++)
	{
		printf("%c",a[i]);
		printf("\n");
	}
	return 0;
}
