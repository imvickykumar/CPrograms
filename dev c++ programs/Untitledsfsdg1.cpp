#include<iostream>
using namespace std;

void swap_value(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;}
void swap_reference(int &x,int &y)
{int temp;
temp=x;
x=y;
y=temp;}
int main()
{
int a,b,c;
cout<<"Enter 1 for swap by value\nEnter 2 for swap by reference\n";
cin>>c;
cout<<"Enter first number\n";
cin>>a;
cout<<"Enter second number\n";
cin>>b;
switch(c)
{
case 1:
swap_value(a,b);
cout<<"No. 1 : "<<a<<"\nNumber 2: "<<b;
break;
case 2:
swap_reference(a,b);
cout<<"No. 1 : "<<a<<"\nNumber 2: "<<b;
break;
}
return 0;
}

