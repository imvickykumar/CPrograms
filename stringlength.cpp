#include<stdio.h>
#include<string.h>
int main()
{
	char a[8];
	gets(a);
	puts(a);
	int s;
	s=strlen(a);
	printf("%d",s);
	return 0;
}
