#include<iostream>
#include<conio.h>
using namespace std;
class d
{
	int roll;
	public:
		d()
		{roll=0;}
			d(int p)
			{
				roll=p;
			}
			d(d &obj)
			{
				roll=obj.roll;
			}
			d(d & obj)
			{
				roll=obj.roll+10;
			}
		
};
int main()
{
	d 01;
	d 02(5);
	d 03(02);
	d 04(03);
	return 0;
}
