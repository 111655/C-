#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k,m=0;
	cout<<"Input number of rows : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			cout<<m<<" ";
			for(j=1;j<n;j++)
			{
				cout<<j<<" ";
			}
		}
		else
		{
			for(j=i-1;j>=1;j--)
			{
				cout<<j<<" ";
			}
			cout<<m<<" ";
			for(k=1;k<=n-i;k++)
			{
				cout<<k<<" ";
			}
			
		}
		cout<<endl;
	}
	cout<<endl;
}
