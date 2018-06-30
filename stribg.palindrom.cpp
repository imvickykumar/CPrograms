#include<stdio.h>
#include<string.h>
int main()
{
	palindrom:
	char a[7],b[7];
	gets(a);
	strcpy(b,a);
	strrev(a);
	puts(a);
	puts(b);

	if(strcmp(a,b)==0)
	{
		printf("the function is palindrom");
	}
	else
	{
		printf("its not palindrom\n");
		goto palindrom;
	}
	return 0;
}
