#include<iostream>
#include<stdlib.h>
int top1, top2;
public:
twoStacks(int n) // constructor
{
size = n;
arr = new int[n];
top1 = -1;
top2 = size;
}

// Method to push an element x to stack1
void push1(int x)
{
// There is at least one empty space for new element
if (top1 &lt; top2 - 1)
{
top1++;
arr[top1] = x;
}
else
{
cout &lt;&lt; &quot;Stack Overflow&quot;;
exit(1);
}
}

// Method to push an element x to stack2
void push2(int x)
{
// There is at least one empty space for new element
if (top1 &lt; top2 - 1)
{
top2-- ;
arr[top2] = x;
}
else
{
cout &lt;&lt; &quot;Stack Overflow&quot;;
exit(1);
}
}


// Method to pop an element from first stack
int pop1()
{
if (top1 &gt;= 0 )
{
int x = arr[top1];
top1-- ;
return x;
}
else
{
cout &lt;&lt; &quot;Stack UnderFlow&quot;;
exit(1);
}
}

// Method to pop an element from second stack
int pop2()
{
if (top2 &lt; size)
{
int x = arr[top2];
top2++;
return x;
}
else
{
cout &lt;&lt; &quot;Stack UnderFlow&quot;;
exit(1);
}
}
};


/* Driver program to test twStacks class */
int main()
{
twoStacks ts(5);
ts.push1(5);
ts.push2(10);
ts.push2(15);
ts.push1(11);
ts.push2(7);
cout &lt;&lt; &quot;Popped element from stack1 is &quot; &lt;&lt; ts.pop1();
ts.push2(40);
cout &lt;&lt; &quot;\nPopped element from stack2 is &quot; &lt;&lt; ts.pop2();
return 0;
}
