#include<iostream>
#include<conio.h>

using namespace std;

class student
{
    public:
    int rollno;
    char name[20];
    char address[20];

    student();
    
    void showdata()
    {
        cout<<"Roll no : "<<rollno<<endl;
        cout<<"Student name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
    }
};

student::student()
{
        cout<<"Enter roll no : ";
        cin>>rollno;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter address : ";
        cin>>address;
    }

int main()
{
    system("cls");
    student ram;
    student mohan;
    // ram.getdata();
    // mohan.getdata();
    ram.showdata();
    cout<<"\n\n";
    mohan.showdata();
    getch();
    return 0;
}