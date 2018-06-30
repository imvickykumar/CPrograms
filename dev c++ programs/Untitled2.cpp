#include<iostream>
#include<conio.h>
using namespace std;
int calc(int x)
{
	return (x*x);
}

int calc(int x,int y)
{
	return (x+y);
}
int main()
{
	int a=6,b=4,c=7;
	cout<<"square of two numbers"<<calc(a);
	cout<<"\n"<<"addition of two numbers"<<calc(b,c);
	return 0;
}
