#include<iostream>
#include<conio.h>
using namespace std;
class A;
class B
{
	int b;
	public:
		void vicky(int x)
		{
			b=x;
		}
		void display(void)
		{
			cout<<"\nvalue of b"<<b;
		}
		
		friend void sum(A,B);
	
};

class A
{
	int a;
	public:
		void vicky(int x)
		{
			a=x;
			
		}
		void display(void)
		{
			cout<<"\nvalue of a"<<a;
		}
		
		friend void sum(A,B);
		
};

void sum(A ob1,B ob2)
{
	cout<<"\nsum of A and B"<<ob1.a+ob2.b;
	
}
int main()
{
	A a;
	B b;
	a.vicky(10);
	b.vicky(20);
	a.display();
	b.display();
	sum(a,b);
	return 0;
	
}




