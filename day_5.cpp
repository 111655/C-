#include<iostream>
using namespace std;
int main()
{
	int i,j,check=0;
	string n,new_str;
	cout<<"Enter n th term : ";
	cin>>n;
	
	j = n.length();
	for(i=0;i<j-10;i++)
	{
		new_str = new_str + n[i];
	}
	cout<<new_str;
	
	
//	cout<<n.length()<<endl;
//	cout<<n<<endl;
//	cout<<n[0]<<endl;
//	cout<<n[3]<<endl;
//	cout<<n[10]<<endl;
//	for(i=1;i<=n;i++)
//	{
//		check = 0;
//		for(j=2;j<i;j++)
//		{
//			if(i%j==0)
//			{
//				check++;	
//			}	
//		}
//		if(check == 0)
//		{
//			cout<<i<<"\t";
//		}
//	}
}
