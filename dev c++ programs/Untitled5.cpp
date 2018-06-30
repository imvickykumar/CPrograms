#include<iostream>
#include<conio.h>
using namespace std;
class test
{
	int code;
	static int count;
	public:
		void setcode()
		{
			code=++count;
		}
		void show()
		{
			cout<<"\nobj number:"<<code;
		}
		
		static void showcount()
		{
			cout<<"\ncount"<<count;
		}	
	
};
int test::count;
int main()
{
	test t1,t2,t3;
	t1.setcode();
	t2.setcode();
	t3.setcode();
	
	test::showcount();
	t1.show();
	t2.show();
	t3.show();
	return 0;
}
