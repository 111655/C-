#include<iostream>
using namespace std;
int main()
{
	int n,s=0,m,r;
	cout<<"Enter any no : ";
	cin>>n;
	m=n;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(s==m)
	{
		cout<<"no. is palindrome";
	}
	else{
		cout<<"no. is not palindrome";
	}
}
