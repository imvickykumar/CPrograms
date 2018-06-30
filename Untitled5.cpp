#include<iostream>
using namespace std;

class queues
{
	int *arr;
	int front,rear,size;
	public:
		queues[int n]
		{
			size=n;
			arr=new int[n];
			front=rear=-1;
		}
		void enqueue(int x)
		{
			if (rear==size-1)
			{
				cout<<"overflow";
				return;
			}
			else if (front==-1)
			{
				front=rear=0;
			}
			else
			rear++;
			arr[rear]=x;
			
		}
		int dequeue()
		{
			if(front==-1)
			{
				cout<<"underflow";
				return -1;
			}
			int k=arr[front];
			front--;
			return k;
		}
		bool isEmpty()
		{
			if(front>rear)
			{
				return true;
				
			}
			else
			{
				return false;
			}
		}
};

class stacknew
{
	queues *q1;
	queues *q2;
	stacknew(int n)
	{
		q1=new queues(n);
		q2=new queues(n);
		public:
		stacknew(int n)
		{
			q1=new queue(n);
			q2=new queue(n);
		
		}
		
		void push(int x)
		{
			q2.enqueue(x);
			while(q1.isEmpty())
			q2.enqueue(q1.dequeue());
			queue*t=q1;
			q1=q2;
			q2=t;
		}
		int pop()
		{
			return q1.dequeue();
		}	
	}
};


int main()
{
	stacknew t(10);
	t.push(15);
	t.push(17);
	t.pop();
}
