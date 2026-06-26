#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    system("cls");
   int a,b,c=0,d;
   
   int l=0;
   int arr[l];
   cout<<"enter any no : ";
   cin>>a;
 while (a>0)
 {
    b=a%10;
    arr[l]=b;
    c=c+b;
    d=a/10;
    a=d;
    l++;
 }
 for ( int i = l-1; i >=0; i--)
 {
    cout<<arr[i];
    if(i>0)
    cout<<" + ";
 }
 cout<<" = "<<c;

 if(c%3==0)
 cout<<"\n\nit is divisible by 3";
 else
 cout<<"\n\nit is not divisible by 3";
 
 

    getch();
}

