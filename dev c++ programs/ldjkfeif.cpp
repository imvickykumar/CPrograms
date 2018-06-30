#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class Bank
{double balance;
int roi;
public:
Bank()
{cout<<"Enter balance\n";
cin>>balance;
cout<<"Enter rate of interest\n";
cin>>roi;}
void Deposit()
{int amt;
cout<<"Enter amount to be deposited\n";
cin>>amt;
balance+=amt;
}
void Withdraw()
{int amt;
cout<<"Enter amount to be withdrawn\n";
cin>>amt;
balance-=amt;
}
void Compound()
{int y;double i;
cout<<"Enter number of years\n";
cin>>y;
i=(balance*((double)pow((double)(100+roi)/100,y)))-balance;
cout<<"Compound Interest : "<<i;
}
void getBalance()
{cout<<"Your balance is : "<<balance;
}
void Menu()
{
cout<<"\nEnter 1 to make deposit\nEnter 2 to withdraw an amount\nEnter 3 to find compound interest\nEnter 4 to view your balance\nEnter 5 to exit\n";}
~Bank(){}};
int main()
{
int c;
Bank b;
int i=0;
while(i==0)
{b.Menu();
cin>>c;


switch(c)
{
case 1:
b.Deposit();
break;
case 2:
b.Withdraw();
break;
case 3:
b.Compound();
break;
case 4:
b.getBalance();
break;
case 5:
i=1;
break;
default:
cout<<"Wrong choice please enter again";}}
getch();
return 0;
}

