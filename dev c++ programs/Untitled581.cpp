#include<iostream>
#include<conio.h>
using namespace std;
class employee
{double marks;
char name[15], surname[15];
char gender;

public:
void get_details()
{
cout<<"Enter name \n";
cin>>name;
cout<<"\nEnter surname\n";
cin>>surname;
cout<<"\nEnter marks\n";
cin>>marks;
cout<<"\nEnter gender\n";
cin>>gender;
}

void display()
{
cout<<"Name : "<<name<<"\nSurname : "<<surname<<"\nMarks : "<<marks<<"\nGender : "<<gender;
}
};
int main()
{
employee e;
e.get_details();
e.display();
getch();
return 0;
}

