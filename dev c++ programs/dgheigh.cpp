#include<iostream>
using namespace std;
class friendfunc2;
class friendfunc1
{
    int a;
    int b;
public:
    friendfunc1()
    {
        cout<<"\nClass friendfunc1";
        cout<<"\nEnter first number :";
        cin>>a;
        cout<<"\nEnter second number :";
        cin>>b;
    }
    friend void friendfun(friendfunc1 f1,friendfunc2 f2);
};
class friendfunc2
{
    int c;
    int d;
    int e;
public:
    friendfunc2()
    {
        cout<<"\nClass friendfunc2";
        cout<<"\nEnter first number :";
        cin>>c;
        cout<<"\nEnter second number :";
        cin>>d;
        cout<<"\nEnter third number :";
        cin>>e;
    }
    friend void friendfun(friendfunc1 f1,friendfunc2 f2);
};
void friendfun(friendfunc1 f1,friendfunc2 f2)
{
    float avg;
    avg=((float)(f1.a+f1.b+f2.c+f2.d+f2.e))/5;
    cout<<"\nAverage: "<<avg;
}



int main()
{   
    friendfunc1 F1;
    friendfunc2 F2;
    friendfun(F1,F2);
    return 0;
   
}

