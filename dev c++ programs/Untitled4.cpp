#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	static int count;
	int roll;
	public:
		void vicky(int a)
		{
			roll=a;
			count++;
		}
		void show(void)
		{
			cout<<"count is"<<count<<"\n";
		}
		
};

int student::count;

int main()
{
	student s1,s2,s3;
	s1.vicky(1);
	s2.vicky(1);
	s3.vicky(1);
	
	s1.show();
	s2.show();
	s3.show();
	return 0;
}


