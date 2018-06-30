#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class line
{
	public:
		int getlength();
		line(int len);
		line(line &obj);
		
		~line();
	
	private:
	int *ptr;	
};

line::line(int len)
{
	cout<<"normal constructor";
	ptr=new int;
	*ptr=len; 
}
line::line(line &obj)
{
	cout<<"\ncopy constructor";
	ptr=new int;
	*ptr=*obj.ptr;
}

line::~line()
{
	cout<"destructor";
	delete ptr;
}

int line::getlength()
{
	return *ptr;
}
void display(line obj)
{
	cout<<"\nlength of line:"<<obj.getlength();
}

int main()
{

	line Line(1);
	display(Line);
	return 0;
}
	
	
	

