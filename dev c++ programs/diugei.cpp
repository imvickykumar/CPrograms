#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    char name[10];
    int marks1,marks2,marks3;
    float avg_marks;
public:
    void get_data()
    {
        cout<<"\nEnter name: ";
        cin>>name;
        cout<<"\nEnter marks of Subject1: ";
        cin>>marks1;
        cout<<"\nEnter marks of Subject2: ";
        cin>>marks2;
        cout<<"\nEnter marks of Subject3: ";
        cin>>marks3;
    }

    friend class calc_avg;


    void display()
    {
        cout<<"\nName: "<<name;
        cout<<"\nMarks of Subject1: "<<marks1;
        cout<<"\nMarks of Subject2: "<<marks2;
        cout<<"\nMarks of Subject3: "<<marks3;
        cout<<"\nAverage Marks: "<<avg_marks;
    }

};

class calc_avg
{
    float avg;
public:
    void mark_avg(student&s1)
    {
        avg=(s1.marks1+s1.marks2+s1.marks3)/3;
        s1.avg_marks=avg;
    }
};

int main()
{  
    student s;
    calc_avg a;
    s.get_data();
    a.mark_avg(s);
    s.display();  
    return 0;
}

