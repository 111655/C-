#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int ch,a,b;
	do
	{
	
	system("cls");
	cout<<"1. Add"<<endl;
	cout<<"2. Sub"<<endl;
	cout<<"3. Multi"<<endl;
	cout<<"4. Div"<<endl;
	cout<<"enter your choice : ";
	cin>>ch;
	switch(ch)
	{
			case 1 :
			{
				system("cls");
				cout<<"Enter first no : ";
				cin>>a;
				cout<<"Enter second no : ";
				cin>>b;
				system("cls");
				cout<<"Given,"<<endl;
				cout<<"		first no = "<<a<<endl;
				cout<<"		second no = "<<b<<endl;
				cout<<"Soln,"<<endl;
				cout<<"		sum = first no + second no"<<endl;
				cout<<"		 	= "<<a<<" + "<<b<<endl;
				cout<<"			= "<<a+b;
				break;
			}
			case 2 :
			{
				cout<<"Enter first no : ";
				cin>>a;
				cout<<"Enter second no : ";
				cin>>b;
				cout<<a-b;
				break;
			}
			case 3 :
			{
				cout<<"Enter first no : ";
				cin>>a;
				cout<<"Enter second no : ";
				cin>>b;
				cout<<a*b;
//				break;
			}
			case 4 :
			{
				cout<<"Enter first no : ";
				cin>>a;
				cout<<"Enter second no : ";
				cin>>b;
				cout<<a/b;
//				break;
			}
			default : cout<<"Wrong Choice";
	}
	getch();
}while(ch>=1 && ch<=4);
}
