#include<iostream>
#include<windows.h>
#include<conio.h>,
using namespace std;
int main()
{
	
	cout<<"hello world\n";
	int ch;
	
//	cout<<"press f1 key\n";
//	cin>>ch;
	ch=getch();
//	{
	while(1)
	{
	
	if(GetAsyncKeyState(VK_DOWN))
	{
		cout<<"arvind\n";
		break;
	}
	else if(GetAsyncKeyState (18))
	{
		
		cout<<"arv1\n";
		break;
	}
	else if(GetAsyncKeyState(VK_LEFT))
	{
		
		cout<<"arv2\n";
		break;
	}
	else if(GetAsyncKeyState(VK_LEFT))
	{
		
		cout<<"arv3\n";
		break;
	}
	else if(GetAsyncKeyState(VK_LEFT))
	{
		
		cout<<"arv4\n";
		break;
	}
	else if(GetAsyncKeyState(VK_ESCAPE))
	{
		
		break;
	}
}
	getch();

}
