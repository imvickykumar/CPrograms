#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
		}
		
	}

int m,n;
cout<<"enter the indexes for row major";
cin>>m>>n;
for(i=0;i<5;i++)
{
	for(j=0;j<5;j++)
	{
		if(i==m && j==n)
		{
			cout<<"element is :"<<a[i][j];
		}
	}
}
cout<<"\nenter the indexes for column major";
cin>>m>>n;
for(j=0;j<5;j++)
{
	for(i=0;i<5;i++)
	{
			if(i==m && j==n)
		{
			cout<<"element is:"<<a[i][j];
		}
	}
}

		
	return 0;
}

