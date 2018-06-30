#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	static int count;
	int roll;
	public:
		void getdata(int a)
		{
			roll=a;
			count++;
		}
		void getcount(void)
		{
			cout<<"count\n"<<count;
		}
};

int student::count;
int main()
{
	student s1,s2,s3;
	s1.getdata(1);
	s2.getdata(2);
	s3.getdata(3);
	
	s1.getcount();
    s2.getcount();
	s3.getcount();
    return 0;
}
	


