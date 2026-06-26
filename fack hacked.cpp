#include<iostream>
#include<conio.h>
#include<stdio.h>
#include <unistd.h>
using namespace std;
int main()
{
	int i;
	system("cls");
	for(i=1; i<=1000000;i++)
	{
		cout << "\033[1;32m";
		cout<<"your computer is hacked!  "<<i<<" ";
		cout<<"\033[0;0";
		cout<<"0001000101010100010100100101000101001010";
//		sleep();
		
		
		
	}
	getch();
}
