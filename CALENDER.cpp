#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
system("cls");
int i,p=1,a=6,b=2,c=5,d=0,e=3,f=5,g=4,n;
cout<<"\033[1;33m";
cout<<"\n\t\t \t\tCALENDER 2022\n\n";
cout<<"\033[0m";      
cout<<"enter month number to see the details\n";
cin>>n;

cout<<"\033[1;32m";
switch(n)
{
case 1:cout<<"\t\t\t\t JANUARY\n \n" ;
cout<<"\033[1;31m";
cout<<"sun\t";  
cout<<"\033[0m";
cout<<" mon\t tue\t wed\t thur\t fri\t sat\t\n";
cout<<"\t\t\t\t\t\t  ";
for(i=1;i<=31;i++)
{
if(a%7==0)
{
cout<<"\033[1;31m";
cout<<i<<"\t ";      
cout<<"\033[0m";
}
else
{
cout<<i<<"\t ";
}
a= ++a;
if(a%7==0)
{
cout<<"\n";
}
}
break;
case 2:cout<<"\t\t\t\t FEBRUARY\n \n" ;
cout<<"sun\t mon\t tue\t wed\t thur\t fri\t sat\t\n";
cout<<"\t\t ";
for(i=1;i<=28;i++)
{
cout<<i<<"\t ";
b= b++;
if(b%7==0)
{
cout<<"\n";
}
}
break;
case 3:cout<<"\t\t\t\t MARCH\n \n" ;
cout<<"sun\t mon\t tue\t wed\t thur\t fri\t sat\t\n";
cout<<"\t\t  ";
for(i=1;i<=31;i++)
{
cout<<i<<"\t ";
b= b++;
if(b%7==0)
{
cout<<"\n";
}
}
break;
case 4:cout<<"\t\t\t\t APRIL\n \n" ;
cout<<"sun\t mon\t tue\t wed\t thur\t fri\t sat\t\n";
cout<<"\t\t\t\t\t  ";
for(i=1;i<31;i++)
{
cout<<i<<"\t ";
c=c++;
if(c%7==0)
{
cout<<"\n";
}
}
break;
case 5:cout<<"\t\t\t\t MAY\n \n" ;
cout<<"sun\t mon\t tue\t wed\t thur\t fri\t sat\t\n";
cout<<"  ";
for(i=1;i<=31;i++)
{
cout<<i<<"\t ";
d=++d;
if(d%7==0)
{
cout<<"\n";
}
}
break;
case 6:cout<<"\t\t\t\t JUNE\n \n" ;
cout<<"sun\t mon\t tue\t wed\t thur\t fri\t sat\t\n";
cout<<"\t\t\t ";
for(i=1;i<=30;i++)
{
cout<<i<<"\t ";
e=e++;
if(e%7==0)
{
cout<<"\n";
}
}
break;
case 7:cout<<"\t\t\t\t JULY\n \n" ;
cout<<"sun\t mon\t tue\t wed\t thur\t fri\t sat\t\n";
cout<<"\t\t\t\t\t  ";
for(i=1;i<=31;i++)
{
cout<<i<<"\t ";
f=f++;
if(f%7==0)
{
cout<<"\n";
}
}
break;
case 8:cout<<"\t\t\t\t AUGUST\n \n" ;
cout<<"sun\t mon\t tue\t wed\t thur\t fri\t sat\t\n";
cout<<"\t  ";
for(i=1;i<=31;i++)
{
cout<<i<<"\t ";
p=p++;
if( p%7==0)
{
cout<<"\n";
}
}
break;
case 9:cout<<"\t\t\t\t SEPTEMBER\n \n" ;
cout<<"sun\t mon\t tue\t wed\t thur\t fri\t sat\t\n";
cout<<"\t\t\t\t  ";
for(i=1;i<=30;i++)
{
cout<<i<<"\t ";
g=g++;
if(g%7==0)
{
cout<<"\n";
}
}
break;
case 10:cout<<"\t\t\t\t OCTOBER\n \n" ;
cout<<"sun\t mon\t tue\t wed\t thur\t fri\t sat\t\n";
cout<<"\t\t\t\t\t\t  ";
for(i=1;i<=31;i++)
{
cout<<i<<"\t ";
a=a++;
if(a%7==0)
{
cout<<"\n";
}
}
break;
case 11:cout<<"\t\t\t\t NOVEMBER\n \n" ;
cout<<"sun\t mon\t tue\t wed\t thur\t fri\t sat\t\n";
cout<<"\t\t  ";
for(i=1;i<=30;i++)
{
cout<<i<<"\t ";
b=b++;
if(b%7==0)
{
cout<<"\n";
}
}
break;
case 12:cout<<"\t\t\t\t DECEMBER\n \n" ;
cout<<"\033[1;31m";
cout<<"sun\t";
cout<<"\033[0m";
cout<<" mon\t tue\t wed\t thur\t fri\t sat\t\n";
cout<<"\t\t\t\t  ";
for(i=1;i<=31;i++)
{
cout<<i<<"\t ";
g= g++;
if(g%7==0)
{
cout<<"\n";
}
}
break;
default : cout<<"TRY AGAIN \n WRONG CHOICE";
}
cout<<"\033[0m";
getch();
   
}


