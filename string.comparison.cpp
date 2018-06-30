#include<stdio.h>
#include<string.h>
int main()
{
	char a[5],b[5];
	gets(a);
	gets(b);
	int i;
	i=strcmp(a,b);
	if(i==0)
	{
		printf("a nd b are same");
	}
	else
	{
		printf("they are not same");
	}
	return 0;
}
