#include<iostream>
using namespace std;

class twostack
{
	int *arr;
	int top1,top2,size;
	public:
		twostack(int n)
		{
			size=n;
			arr=new int[n];
			top1=-1;
			top2=size;
		}
		
		void push1(int x)
		{
			if(top1==top2)
			{
				cout<<"overflow";
				return;
				
			}
			top1++;
			arr[top1]=x;
		}
		void push2(int x)
		{
			if(top2-1==top1)
			{
				cout<<"overflow";
				return;
			}
			top2--;
			arr[top2]=x;
			
		}
		
		int pop1()
		{
			if(top1==-1)
			{
				cout<<"underflow";
				return -1;
			}
			int k=arr[top1];
			top1--;
			return k;
		}
		int pop2()
		{
			if(top2==size)
			{
				cout<<"underflow";
				return -1;
			}
			int k=arr[top2];
			top2++;
			return k;
		}
		
		
};

int main()
{
	twostack t(15);
	t.push1(10);
	t.push2(11);
	t.push1(21);
	t.pop1();
	t.pop2();
	return 0;
}
