#include <stdio.h>
#include <conio.h>
#include <iostream>
#include<string.h>

#include <math.h>
using namespace std;
int main()
{
    system("cls");
    char input[20];
    int i,j,len;
    gets(input);
        strlwr(input);
        len=strlen(input);
        cout<<len;
        for ( i = 0; i < len; i++)
        {
          if (input[i]==' ')
          {
               for (  j = i; j < len; j++)
                    input[j]=input[j+1];
                    len--;    
          }
          
        }
        cout<<"\n"<<input;
    // char a;
    // char b;
    // printf("enter");
    // scanf("%c",&a);
    // printf("enter");
    // scanf("%c",&b);
    // printf("%c %c",a,b);
            //     float n=0, s,l,i,j,b,a;
    // printf("enter the value of n : ");
    // scanf("%d",&n);
    // s=0;
    // for(int i=1;i<=n;i++)
    // {
    //     a=(pow(n,i));
    //     s=s+a;

    // }
    // printf("%d",s+1);
    // getch();

    //  system("cls");
    //  cout << "Enter your no. : ";
    //  cin >> l;
    //  a = l;
    //  i = 1;
    //  for(s=1;s<=l;s++)
    //  {
    //     for(n=s;n>0;n--)

    //  {
    //       i = i* n;
    //       j=j+i;
    //  }
    //  i=1;
    //  }

    //  cout << endl;
    //  cout << "The factorial of " << a << " is : " << j << endl;
    //  getch();

    // cout << "enter your starting no. : ";
    //  cin >> a;
    // cout << "enter your ending no. : ";
    // cin >> b;
    // cout << endl
    //      << endl;
    // s = 1;
    // for (i = 1; i <= b; i++)
    // {

    //      for (j = i; j > 0; j--)
    //      {

    //           s = s * j;
    //      }

    //      cout << "The factorial of " << i << " is : " << s << endl;
    //      a=(s/(pow(b,i)));
    //      n=n+a;
    //      s = 1;
    // }
    // cout<<n;

    // getch();
    // int n,t,s,r;
    // printf("enter any no. : ");
    // scanf("%d",&n);
    // t=n;
    // s=0;
    // while(n>0)
    // {
    //      r=n%10;
    //      s=(s*10)+r;
    //      n=n/10;
    // }

    // if(t==s)
    // printf("%d is a palindrome number",t);
    // else
    // printf("%d is not a palindrome",t);
    // getch();
    // n=12;
    // cout<<n%10;
    // getch();

    // int a,b,c,d;
    // cout<<"enter total units : ";
    // cin>>a;
    // if(a>0 && a<=50)
    // {
    //     cout<<"total charge = Rs 70";
    // }
    // else if(a>50  &&  a<=100)
    // {
    //     b=a-50;
    //     c=b*5;
    //     d=70+c;
    //     cout<<"total charge = Rs "<<d;
    // }
    // else if(a>100)
    // {
    //     b=a-100;
    //     c=b*8;
    //     d=70+(50*5)+c;
    //     cout<<"total charge = Rs "<<d;
    // }
    // else
    //    cout<<"enter wrong value ";

    //  getch();

    // int arr1[3][3], arr2[6];
    // int i, j,s=0,s2=0,m1=0,m2=3,inc=0;

    // cout << "Enter value of matrix \n";

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         cout << "\nenter " << i + 1 << " row " << j + 1 << " elements : ";
    //         cin >> arr1[i][j];
    //     }
    // }
    // cout<<endl;
    // // calculation
    // for (i = 0; i < 3; i++)
    // {
    //     for ( j = 0; j < 3; j++)
    //     {
    //         s=s+arr1[i][j];
    //         s2=s2+arr1[j][i];
    //     }
    //         if (s != 20 || s2 !=20)
    //         {
    //             inc++;
    //             cout<<"\n the sum rows and columns is not equal to 20";
    //             break;
    //         }
            
    //     s=0;
    //     s2=0;
        
    // }
    // if (inc==0)
    // {
    // cout<<"\n the sum of rows and column is equal to 20";
        
    // }
    
// end:
    // system("cls");
    // cout<<"Your matrix is :-";
    // cout<<endl;
    // for ( i = 0; i < 3; i++)
    // {
    //    for (j = 0; j < 3; j++)
    //     {
    //         cout<<"\t"<<arr1[i][j];
    //     } 
    //     cout<<endl;
    // }
   
     
    //     cout<<endl;
    //     s2=0;
    // for ( i = 0; i < 6; i++)
    // {
    //     if (i>=3)
    //     {
    //         inc++;
    //     }
    //     if (arr2[i]==20)
    //     {
    //         if (i<3)
    //         {
    //             s2++;
    //             cout<<"\n"<<i+1<<" row is equal to 20";
    //         }
    //         else if (i>=3)
    //         {
    //                 s2++;
    //             cout<<"\n"<<inc<<" column is equal to 20";
    //         }
            
            
    //     }
        
        
    // }
    // if (s2==0)
    // {
    //     cout<<"\n No any column & row is equal to 20";
    // }
    
    

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {

    //         arr3[i][j] = arr1[i][j] * arr2[i][j];
    //     }
    // }
    // cout << "matrix after multiplication \n";
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {

    //         cout << "\t" << arr3[i][j];
    //     }
    //     cout << endl;
    // }
    getch();
}