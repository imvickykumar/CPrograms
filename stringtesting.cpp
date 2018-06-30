#include<stdio.h>
#include<string.h>
int main()
{
	char a[5],b[6];
	gets(a);
	gets(b);
	strcat(a,b);
	puts(a);
	return 0;
}
