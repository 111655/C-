#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>

int n,x=0,i,y;
struct student_record
{
   int rollno;
   char name[30];
   char phoneno[12];
   char address[30];
   int math,science,computer,english,hindi;
};
struct student_record st[30];

void entry_data()
{
    system("cls");
    char null[2];
    printf("enter total no student : ");
    scanf("%d",&n);
    y=x+n;
    for ( i = x; i < y; i++)
    {
        printf("\nenter records of %d student :-\n",i+1);
        printf("enter roll no. : ");
        scanf("%d",&st[i].rollno);
        gets(null);
        printf("enter name : ");
        gets(st[i].name);
        printf("phone no. : ");
        gets(st[i].phoneno);
        printf("enter marks of math : ");
        scanf("%d",&st[i].math);
        printf("enter marks of science : ");
        scanf("%d",&st[i].science);
        printf("enter marks of computer : ");
        scanf("%d",&st[i].computer);
        printf("enter marks of english : ");
        scanf("%d",&st[i].english);
        printf("enter marks of hindi : ");
        scanf("%d",&st[i].hindi);
    }
    x=y;
    printf("\n\nrecord is saved.....");
    getch();    
}

void display_data()
{
    system("cls");
    if (x==0)
    {
        printf("\nno record found");
    }
    else
    {
       for ( i = 0; i < y; i++)
       {
          printf("\nroll no  : %d ",st[i].rollno);
          printf("\nname     : %s ",st[i].name);
          printf("\nphone no : %s ",st[i].phoneno);
          printf("\nMarks of math : %d",st[i].math);
          printf("\nMarks of science : %d",st[i].science);
          printf("\nMarks of computer: %d",st[i].computer);
          printf("\nMarks of english : %d",st[i].english);
          printf("\nMarks of hindi : %d",st[i].hindi);
          printf("\n");
       }
    }
    getch();
}

int search()
{
    system("cls");
    int r,loc=-1;
    if (x==0)
    {
        printf("\nno record found");
        getch();
        return 0;
    }
    else
    {
        printf("enter roll no. : ");
        scanf("%d",&r);
       for ( i = 0; i < y; i++)
       {
        if (r==st[i].rollno)
        {
            loc=i;
        }
       }
    }
    if (loc==-1)
    {
        printf("\nno record found");
    }
    else
    {
          printf("\nroll no  : %d ",st[loc].rollno);
          printf("\nname     : %s ",st[loc].name);
          printf("\nphone no : %s ",st[loc].phoneno);
          printf("\nMarks of math : %d",st[loc].math);
          printf("\nMarks of science : %d",st[loc].science);
          printf("\nMarks of computer: %d",st[loc].computer);
          printf("\nMarks of english : %d",st[loc].english);
          printf("\nMarks of hindi : %d",st[loc].hindi);    
    }
    getch();
}

int delete_record()
{
    system("cls");
     int r,loc=-1;
    if (x==0)
    {
        printf("\nno record found");
        getch();
        return 0;
    }
    else
    {
        printf("enter roll no. : ");
        scanf("%d",&r);
       for ( i = 0; i < y; i++)
       {
        if (r==st[i].rollno)
        {
            loc=i;
        }
       }
    }
    if (loc==-1)
    {
        printf("\nno record found");
    }
    else
    {
        for ( i = loc; i < y; i++)
        {
            st[i].rollno=st[i+1].rollno;
            strcpy( st[i].name,st[i+1].name);
            strcpy(st[i].phoneno,st[i+1].phoneno);
            st[i].math=st[i+1].math;
            st[i].science=st[i+1].science;
            st[i].computer=st[i+1].computer;
            st[i].english=st[i+1].english;
            st[i].hindi=st[i+1].hindi;
        }
        x=x-1;
        y=y-1;
        printf("\nrecord will be deleted.....");
    }
    getch();
}

int main()
{
    int a;
    do
    {
    system("cls");
    printf("1. entry data\n");
    printf("2. display data\n");
    printf("3. search data\n");
    printf("4. delete data\n");
    printf("5. exit\n\n");
    printf("enter your choice : ");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
    {
        entry_data();
        break;
    }
    case 2:
    {
        display_data();
        break;
    }
    case 3:
    {
        search();
        break;
    }
    case 4:
    {
        delete_record();
        break;
    }
    
    }
     } while (a>0 && a<5);
    
    return 0;
}
