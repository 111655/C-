#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,len,mid_value;
	string str,left_str,right_str;
	cout<<"enter any string : ";
	cin>>str;
	len = str.length();
	mid_value = len/2;
	if(len % 2 == 0)
	{
		for(i=mid_value-1,j=len-1;i>=0;i--,j--)
		{
			left_str = left_str + str[i];
			right_str = right_str + str[j];
		}
		cout<<left_str + right_str;
	}
	else
	{
		for(i=mid_value-1,j=len-1;i>=0;i--,j--)
		{
			left_str = left_str + str[i];
			right_str = right_str + str[j];
		}
		cout<<left_str + str[mid_value] + right_str;
	}
	
	
}
