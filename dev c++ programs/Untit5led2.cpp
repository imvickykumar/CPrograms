#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
int emp_no; char emp_name[20];
public:
void get_data()
{cout<<"Enter Employee number\n";
cin>>emp_no;
cout<<"Enter Employee name \n";
cin>>emp_name;
}
void display()
{
cout<<"\nEmployee number : "<<emp_no<<"\nEmployee name : "<<emp_name;
}
};
int main()
{
employee e[6];
int i;
for(i=0;i<6;i++)
e[i].get_data();

for(i=0;i<6;i++)
e[i].display();
getch();
return 0;}

