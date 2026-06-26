#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{   
    system ("cls");
    char ch, ch1;
    float l,b,pm,area,diag;
    do
    {
       
       cout<<"\n"<<"Rectangle Menu";
       cout<<"\n1. Area";
       cout<<"\n2. Perimeter ";
       cout<<"\n3. Diagonal";
       cout<<"\n4. Exit"<<"\n";
       cout<<"Enter your choice: ";
       cin>>ch;
       if(ch=='1'||ch=='2'||ch=='3')
       {
         cout<<"\n"<<"Enter length = "; 
         cin>>l;
         cout<<"\n"<<"Enter bredth = "; 
         cin>>b;
       }
       switch (ch)
       {
          case'1': area=l*b;
                   cout<<"Area: "<<area<<endl;
                   break;
          case'2': pm=2*(l+b) ;
                   cout<<"Perimeter: "<<pm<<endl;
                   break;
          case'3': diag=sqrt(l*l+b*b);
                   cout<<"Diagonal: "<<diag<<endl;
                   break;
          case'4': break;        
          default: cout<<"Wrong choice !\n " ;  
                   break;
        }
        cout<<"\nPress a key to continue.....\n";
        ch1=getchar();
    } 
    while(ch>='1'&& ch<='3');
    return 0;          
    
    
}
