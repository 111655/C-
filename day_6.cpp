#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	int i,n;
	string user_email,s;
	cout<<"enter any string : ";
	cin>>user_email;
	n=user_email.length();
	
	for(i=n-11;i>=0;i--)
	{
		s=s+user_email[i];
		cout<<s<<endl;
	}
	cout<<s;
	
}
