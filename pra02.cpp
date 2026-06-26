#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    // int a,b;
    // printf("enter any number :");
    // scanf("%d",&a);
    // b=a%10;
    // if(b%2==0)
    // printf("it is even number");
    // else
    // printf("it is odd number"); 

    int a,b,c,d,e,f;
    // printf("enter any number :");
    // scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    // f=a+b+c+d+e;
    // printf("sum is %d",f);

    // a=7657;
    // b=a%10;
    // cout<<b;
    // b=a/10;
    // cout<<"\n\n";
    // cout<<b;
    // a=b;
    // b=a%10;
    // cout<<"\n"<<b;
a=34565;
d=0;
int l=0;
int arr[l];

    
    while (a>0)
    {
       b=a%10;
       arr[l]=b;
        // cout<<b<<"+";
        d=d+b;
        c=a/10;
        a=c;
        l++;
        // f=l;
    }
    // cout<<"\n"<<l;
    for (int i = l-1; i >=0 ; i--)
    {
        cout<<arr[i];
        if(i>0)
        cout<<" + ";
    }
    
    cout<<" = "<<d;

// int a,b,c,d,e,f;
// a=456789;
// b=a%10;
// cout<<b;
// b=a/10;
// cout<<b;
// a=b;
// b=a%10;
// cout<<"\n"<<b;
// a=45678;
// d=0;
// int l=0;
// int arr[l];
// while(a>0)
// {
//     b=a%10;
//     arr[l]=b;
//     cout<<b<<"+";
//     d=d+b;
//     c=a/10;
//     a=c;
//     l++;
//     l=f;

// }
// // cout<<l;
// for(int i=l-1;i>=0;i--)
// {
//     cout<<arr[i];
//     if(i>0)
//     cout<<"+";
// }
//     cout<<"\n";


    
        
    
    


    getch();



}