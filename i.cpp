#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int a[5][5];
	for(int i=0;i<5;i++)
	{
		cin>>a[i][j];
	}
}
int m,n;
cout<<"enter the indexes:";
cin>>m>>n;
for(int i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	{
		if(i==m && j==n)
		{
			cout<<a[i][j];
		}
	}
	for(int j=0;j<5;j++)
	{
		if(i==m && j==n)
		{
			cout<<a[i][j];
		}
	}
}
