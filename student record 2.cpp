#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int ch1, rollno1, no, i = 0, s = 0, x, y, j, k, z = 0, total_class = 0, loc = -1, create_class, rollno;
int update_i[100][1], store_class[100], up_att[100][1], up_datex[100][1];
char cha1, cha2[20];
int classes, reprint, TNOS, ins = 0, a1 = 0, b1, x1, updx = 0, date, month, year;
int present = 0, absent = 0;
struct student_record
{
    char null[1];
    int standard[100];
    int roll_no[100];
    char name[100][50];
    char phone_no[100][15];
    char address[100][50];
    char attend[100][50];
    int store_date[100][3];
};

int main()
{
    system("cls");

    cout << "\n\n\t\tPROJECT MOON VERSION.1\n\n";
    cout << "\t   MADE BY : ARVIND KUMAR GUPTA";
    cout << "\n In this project you can create many classes and \n"
         << " save the student records. you can also display all students\n"
         << " records, search particular student record, modify student\n"
         << " records and delete student reords and many so on....";

    cout << "\n\n Press enter for continue.....";
    getch();
    struct student_record p[100];
    do
    {
    main_menu:
        system("cls");
        cout << "\t Main Menu\n\n";
        cout << "1. See all records\n";
        cout << "2. Entry/Edit menu\n";
        cout << "3. Entry/Edit attendence\n";
        cout << "4. Exit\n\n";
        cout << "Please enter your choice : ";
        cin >> ch1;

        if (ch1 == 1)
        {
        back1:
            system("cls");
            cout << "1. Total no. of students in records\n";
            cout << "2. Phone no. of all students" << endl;
            cout << "3. Back" << endl
                 << endl;
            cout << "Enter your choice : ";
            cin >> ch1;
            if (ch1 == 1)
            {
                system("cls");
                for (i = 0; i < total_class; i++)
                {
                    classes = store_class[i];
                    x = update_i[classes][1];

                    cout << " class " << classes << " : Total no. of student = " << x << endl;
                    TNOS = TNOS + x;
                }

                cout << " \ntotal no. of student : " << TNOS << endl;
                TNOS = 0;
                getch();
                goto back1;
            }
            else if (ch1 == 2)
            {
                system("cls");
                for (i = 0; i < total_class; i++)
                {
                    classes = store_class[i];
                    cout << "class : " << classes << endl;
                    x = update_i[classes][1];
                    for (j = 0; j < x; j++)
                    {

                        cout << "roll no. : " << p[classes].roll_no[j] << " : Phone no. : " << p[classes].phone_no[j] << endl;
                        ;
                    }
                    cout << endl;
                }
                getch();
                goto back1;
            }
            else if (ch1 == 3)
            {
                goto main_menu;
            }

            getch();
        }
        else if (ch1 == 2)
        {
            do
            {
            start:
                system("cls");
                cout << "1. Create student records " << endl;
                cout << "2. Display all student records" << endl;
                cout << "3. Search student record" << endl;
                cout << "4. Modify student records" << endl;
                cout << "5. Delete student records" << endl;
                cout << "6. Back" << endl
                     << endl;
                cout << "Please enter your choice : ";
                cin >> ch1;

                switch (ch1)
                {
                case 1:
                {
                    system("cls");
                    cout << "\t\t Create Student Record " << endl
                         << endl;
                    cout << "Enter number of students : ";
                    cin >> no;
                    cout << "which class : ";
                    cin >> create_class;
                    store_class[total_class] = create_class;
                    total_class++;
                    for (i = 0; i < total_class; i++)
                    {
                        if (store_class[total_class - 1] == store_class[i - 1])
                        {
                            total_class--;
                        }
                    }
                    x = update_i[create_class][1];
                    k = x + no;

                    cout << "\n\n";

                    for (i = x; i < k; i++)
                    {
                        cout << "student of class : " << create_class << endl;
                        p[create_class].standard[i] = create_class;
                    roll:
                        cout << "Enter your roll no. : ";
                        cin >> p[create_class].roll_no[i];
                        y = update_i[create_class][1];
                        for (j = 0; j < y; j++)
                        {
                            if (p[create_class].roll_no[i] == p[create_class].roll_no[j])
                            {
                                cout << "\nthis roll no. is already exist in record \n"
                                     << "if you change the record please go to modify \n"
                                     << "student record\n"
                                     << endl;
                                ;
                                getch();
                                goto roll;
                            }
                        }

                        gets(p[create_class].null);
                        cout << "Enter your name : ";
                        gets(p[create_class].name[i]);

                        cout << "Enter your phone no. : ";
                        gets(p[create_class].phone_no[i]);

                        cout << "Enter your address : ";
                        gets(p[create_class].address[i]);
                        cout << "\n\n";

                        update_i[create_class][1] = i + 1;
                    }
                    cout << "Record will be save............";

                    getch();
                    goto start;
                }
                case 2:
                {
                    system("cls");
                    cout << "which class : ";
                    cin >> create_class;
                    cout << "\n\n";
                    x1 = update_i[create_class][1];

                    for (i = 0; i < x1; i++)
                    {
                        cout << "Class : " << p[create_class].standard[i] << endl;
                        cout << "Student roll no. : " << p[create_class].roll_no[i] << endl;
                        cout << "Student name : " << p[create_class].name[i] << endl;
                        cout << "Student phone no. : " << p[create_class].phone_no[i] << endl;
                        cout << "Student address : " << p[create_class].address[i] << endl;
                        cout << "\n";
                    }
                    if (x1 == 0)
                        cout << "No any record found........";

                    getch();
                    goto start;
                }
                case 3:
                {
                    system("cls");
                    cout << "Enter class : ";
                    cin >> create_class;
                    cout << "Enter roll no. : ";
                    cin >> rollno;
                    cout << "\n\n";
                    x = update_i[create_class][1];
                    for (j = 0; j < x; j++)
                    {
                        if (rollno == p[create_class].roll_no[j])
                        {
                            loc = j;
                        }
                    }
                    if (loc >= 0)
                    {
                        cout << "Class : " << p[create_class].standard[loc] << endl;
                        cout << "Student roll no. : " << p[create_class].roll_no[loc] << endl;
                        cout << "Student name : " << p[create_class].name[loc] << endl;
                        cout << "Student phone no. : " << p[create_class].phone_no[loc] << endl;
                        cout << "Student address : " << p[create_class].address[loc] << endl;
                    }
                    else
                        cout << "No any record found.......";
                    loc = -1;
                    getch();
                    goto start;
                }
                case 4:
                {
                    system("cls");
                    cout << "Enter class : ";
                    cin >> create_class;
                    cout << "Enter roll no. : ";
                    cin >> rollno;
                    cout << "\n\n";
                    x = update_i[create_class][1];
                    for (j = 0; j < x; j++)
                    {
                        if (rollno == p[create_class].roll_no[j])
                        {
                            loc = j;
                        }
                    }
                    if (loc >= 0)
                    {
                        cout << "Class : " << p[create_class].standard[loc] << endl;
                        cout << "Student roll no. : " << p[create_class].roll_no[loc] << endl;
                        cout << "Student name : " << p[create_class].name[loc] << endl;
                        cout << "Student phone no. : " << p[create_class].phone_no[loc] << endl;
                        cout << "Student address : " << p[create_class].address[loc] << endl
                             << endl;

                        cout << "student of class : " << create_class << endl;
                        p[create_class].standard[loc] = create_class;
                    reenterroll:
                        cout << "Enter your roll no. : ";
                        cin >> rollno;
                        if (p[create_class].roll_no[loc] == rollno)
                        {
                            goto name;
                        }
                        y = update_i[create_class][1];
                        for (j = 0; j < y; j++)
                        {
                            if (rollno == p[create_class].roll_no[j])
                            {
                                cout << "\nthis roll no. is already exist in record \n"
                                     << "Please enter new roll no \n"
                                     << endl;

                                getch();
                                goto reenterroll;
                            }
                            else
                            {
                                p[create_class].roll_no[loc] = rollno;
                            }
                        }
                    name:
                        gets(p[create_class].null);
                        cout << "Enter your name : ";
                        gets(p[create_class].name[loc]);

                        cout << "Enter your phone no. : ";
                        gets(p[create_class].phone_no[loc]);

                        cout << "Enter your address : ";
                        gets(p[create_class].address[loc]);
                        cout << "\n\n";

                        cout << "Record will be change............";
                    }
                    else
                        cout << "No any record found.......";
                    loc = -1;
                    getch();

                    goto start;
                }
                case 5:
                {
                    system("cls");
                    cout << "Enter class : ";
                    cin >> create_class;
                    cout << "Enter roll no. : ";
                    cin >> rollno;
                    cout << "\n\n";
                    x = update_i[create_class][1];
                    for (j = 0; j < x; j++)
                    {
                        if (rollno == p[create_class].roll_no[j])
                        {
                            loc = j;
                        }
                    }
                    if (loc >= 0)
                    {
                        cout << "Class : " << p[create_class].standard[loc] << endl;
                        cout << "Student roll no. : " << p[create_class].roll_no[loc] << endl;
                        cout << "Student name : " << p[create_class].name[loc] << endl;
                        cout << "Student phone no. : " << p[create_class].phone_no[loc] << endl;
                        cout << "Student address : " << p[create_class].address[loc] << endl;
                    option:
                        cout << "\nAre you sure you want to delete this record (Y/N) : ";
                        cin >> cha1;
                        if (cha1 == 'y' || cha1 == 'Y')
                        {
                            x = update_i[create_class][1];

                            for (i = loc, j = i + 1; i < x, j < x + 1; i++, j++)
                            {
                                p[create_class].roll_no[i] = p[create_class].roll_no[j];
                                strcpy(p[create_class].name[i], p[create_class].name[j]);
                                strcpy(p[create_class].phone_no[i], p[create_class].phone_no[j]);
                                strcpy(p[create_class].address[i], p[create_class].address[j]);
                                update_i[create_class][1] = x - 1;
                            }
                            cout << "\nRecord is delete.......\n";
                        }
                        else if (cha1 == 'n' || cha1 == 'N')
                        {
                            cout << "\nOK......\n";
                        }
                        else
                        {
                            cout << "\nWrong choice\n";
                            cout << "Please choose correct option";
                            goto option;
                        }
                    }
                    else
                    {
                        cout << "No any record found.......";
                    }

                    loc = -1;
                    getch();
                    goto start;
                }
                case 6:
                {
                    system("cls");
                    goto main_menu;
                }

                default:
                {
                    cout << "Wrong Choice\n"
                         << "Please choose correct options";
                    getch();
                    goto start;
                }
                }
            } while (ch1 >= 1 && ch1 <= 6);
        }

        else if (ch1 == 3)
        {
            do
            {
            back2:
                system("cls");
                cout << "1. Take attendance\n";
                cout << "2. Display all record\n";
                cout << "3. Search particular date record\n";
                cout << "4. Modify attendance records\n";
                cout << "5. Delete particular date record \n";
                cout << "6. Back\n\n";
                cout << "Please enter your choice : ";
                cin >> ch1;

                if (ch1 == 1)
                {
                in_date:
                    system("cls");
                    cout << "Which class : ";
                    cin >> create_class;
                    x = update_i[create_class][1];
                    if (x == 0)
                    {
                        cout << "\n\nNo any record found....\n";
                        goto end1;
                    }
                    cout << "Date : ";
                    cin >> date;
                    cout << "Month : ";
                    cin >> month;
                    cout << "Year : ";
                    cin >> year;
                    updx = up_datex[create_class][1];

                    for (i = 0; i <= updx; i++)
                    {

                        if (date == p[create_class].store_date[i][0] && month == p[create_class].store_date[i][1] && year == p[create_class].store_date[i][2])
                        {
                            cout << "\n\nyou can already use this date ";
                            cout << "\nPlease enter correct date\n";
                            getch();
                            goto in_date;
                        }
                    }
                    p[create_class].store_date[updx][0] = date;
                    p[create_class].store_date[updx][1] = month;
                    p[create_class].store_date[updx][2] = year;
                    up_datex[create_class][1] = updx + 1;

                    a1 = up_att[create_class][1];
                repeat:
                    system("cls");
                    for (i = 0; i < x; i++)
                    {

                        for (j = 0; j <= a1; j++)
                        {
                            if (j == 0)
                            {
                                cout << p[create_class].roll_no[i] << ". " << p[create_class].name[i] << "\t\t: ";
                            }

                            if (reprint == i && j == a1)
                            {
                                goto skip;
                            }
                            if (reprint >= 0 && reprint < i && j == a1)
                            {
                                goto below1;
                            }

                            if (p[create_class].attend[i][j] == 'A' || p[create_class].attend[i][j] == 'P' && j < a1)
                            {
                            below1:
                                cout << p[create_class].attend[i][j] << "  ";
                            }
                            // else if (p[create_class].attend[i][j] != 'A' || p[create_class].attend[i][j] != 'P' && j < a1-1 && j != 0)
                            // {
                            //     cout << "-"
                            //          << "  ";
                            // }
                        }
                    skip:
                        if (i < reprint)
                        {
                            cout << endl;
                            continue;
                        }
                        reprint = -1;

                    reenter:
                        cin >> cha1;
                        if (cha1 == 'p' || cha1 == 'P')
                        {

                            p[create_class].attend[i][a1] = 'P';
                        }
                        else if (cha1 == 'a' || cha1 == 'A')
                        {

                            p[create_class].attend[i][a1] = 'A';
                        }
                        else if (cha1 == '`')
                        {

                            reprint = i - 1;
                            goto repeat;
                        }

                        else
                        {
                            cout << "Enter only absent for (A) or present for (P)";
                            getch();
                            goto reenter;
                        }
                    }
                    up_att[create_class][1] = a1 + 1;

                    cout << "\n\nRecord is save.......\n";

                end1:
                    getch();
                }

                else if (ch1 == 2)
                {
                    system("cls");
                    cout << "Which class : ";
                    cin >> create_class;
                    x = update_i[create_class][1];
                    if (x == 0)
                    {
                        cout << "\n\nNo any record found....\n";
                        goto end2;
                    }

                    updx = up_datex[create_class][1];
                    if (updx == 0)
                    {
                        cout << endl
                             << endl;
                        cout << "No record found........";
                        goto end2;
                    }

                    cout << "Roll no.\tName\t\t   ";
                    for (i = 0; i < updx; i++)
                    {
                        date = p[create_class].store_date[i][0];
                        month = p[create_class].store_date[i][1];
                        year = p[create_class].store_date[i][2];
                        cout << date << "/" << month << "/" << year << "  ";
                    }
                    cout << ": T-Days = " << updx;
                    cout << endl;
                    a1 = up_att[create_class][1];
                    for (i = 0; i < x; i++)
                    {
                        for (j = 0; j < a1; j++)
                        {
                            if (j == 0)
                            {
                                cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                                if (p[create_class].attend[i][j] == 'A' || p[create_class].attend[i][j] == 'P')
                                {
                                    cout << "    " << p[create_class].attend[i][j];
                                }
                                else
                                {
                                    cout << "    "
                                         << "-";
                                }
                            }
                            else
                            {
                                if (p[create_class].attend[i][j] == 'A' || p[create_class].attend[i][j] == 'P')
                                {
                                    cout << "         " << p[create_class].attend[i][j];
                                }
                                else
                                {
                                    cout << "         "
                                         << "-";
                                }
                            }
                            if (p[create_class].attend[i][j] == 'P')
                            {
                                present++;
                            }
                            else if (p[create_class].attend[i][j] == 'A')
                            {
                                absent++;
                            }
                        }
                        cout << "      : P = " << present << " / A = " << absent;
                        cout << endl;
                        present = 0;
                        absent = 0;
                    }
                    cout << endl;
                    cout << "\t\t\t\t:   ";
                    for (i = 0; i < updx; i++)
                    {
                        for (j = 0; j < x; j++)
                        {
                            if (p[create_class].attend[j][i] == 'P')
                            {
                                present++;
                            }
                        }
                        cout << "P = " << present << "     ";
                        present = 0;
                    }
                    cout << endl;
                    cout << "\t\t\t\t:   ";
                    for (i = 0; i < updx; i++)
                    {
                        for (j = 0; j < x; j++)
                        {
                            if (p[create_class].attend[j][i] == 'A')
                            {
                                absent++;
                            }
                        }
                        cout << "A = " << absent << "     ";
                        absent = 0;
                    }

                end2:
                    getch();
                }
                else if (ch1 == 3)
                {
                    system("cls");
                    cout << "Which class : ";
                    cin >> create_class;
                    x = update_i[create_class][1];
                    if (x == 0)
                    {
                        cout << "\n\nNo any record found....\n";
                        goto end3;
                    }
                    cout << "Date : ";
                    cin >> date;
                    cout << "Month : ";
                    cin >> month;
                    cout << "Year : ";
                    cin >> year;
                    updx = up_datex[create_class][1];
                    for (i = 0; i < updx; i++)
                    {

                        if (date == p[create_class].store_date[i][0] && month == p[create_class].store_date[i][1] && year == p[create_class].store_date[i][2])
                        {
                            loc = i;
                            break;
                        }
                    }

                    if (loc == -1)
                    {
                        cout << "\n\nno record found\n";
                        goto end3;
                    }

                    cout << endl;
                    x = update_i[create_class][1];
                    updx = up_datex[create_class][1];
                    cout << "Roll no.\tName\t\tAttend" << endl;
                    for (i = 0; i < x; i++)
                    {
                        cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                        cout << p[create_class].attend[i][loc] << " ";
                        cout << endl;
                    }

                    loc = -1;

                end3:
                    getch();
                }
                else if (ch1 == 4)
                {
                    system("cls");
                    cout << "1. Change a particular date records " << endl;
                    cout << "2. Change a particular student records" << endl;
                    cout << "3. Back" << endl
                         << endl;
                    cout << "Enter your choice : ";
                    cin >> ch1;
                    system("cls");

                    if (ch1 == 1)
                    {
                        cout << "Which class : ";
                        cin >> create_class;
                        x = update_i[create_class][1];
                        if (x == 0)
                        {
                            cout << "\n\nNo any record found....\n";
                            goto end21;
                        }

                        updx = up_datex[create_class][1];
                        if (updx == 0)
                        {
                            cout << "\n\nNo any record found....\n";
                            goto end21;
                        }

                        cout << "Roll no.\tName\t\t   ";
                        for (i = 0; i < updx; i++)
                        {
                            date = p[create_class].store_date[i][0];
                            month = p[create_class].store_date[i][1];
                            year = p[create_class].store_date[i][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }

                        cout << endl;
                        for (i = 0; i < x; i++)
                        {
                            for (j = 0; j < updx; j++)
                            {
                                if (j == 0)
                                {
                                    cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                                    cout << "    " << p[create_class].attend[i][j];
                                }
                                else
                                {
                                    cout << "         " << p[create_class].attend[i][j];
                                }
                            }
                            cout << endl;
                        }
                        cout << endl
                             << endl;
                        cout << "Enter date : ";
                        cin >> date;
                        cout << "Enter month : ";
                        cin >> month;
                        cout << "Enter year : ";
                        cin >> year;
                        system("cls");

                        updx = up_datex[create_class][1];
                        for (i = 0; i < updx; i++)
                        {

                            if (date == p[create_class].store_date[i][0] && month == p[create_class].store_date[i][1] && year == p[create_class].store_date[i][2])
                            {
                                loc = i;
                                break;
                            }
                        }

                        if (loc == -1)
                        {
                            cout << "\n\nno record found\n";
                            goto end21;
                        }

                        cout << endl;
                        x = update_i[create_class][1];
                        updx = up_datex[create_class][1];
                        cout << "Date :- " << date << "/" << month << "/" << year << endl
                             << endl;
                        cout << "Roll no.\tName\t\tAttend" << endl;
                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            cout << p[create_class].attend[i][loc] << " ";
                            cout << endl;
                        }
                        cout << endl
                             << endl;
                        cout << "Change now :-" << endl;
                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                        reenter11:
                            cin >> cha1;
                            if (cha1 == 'p' || cha1 == 'P')
                            {

                                p[create_class].attend[i][loc] = 'P';
                            }
                            else if (cha1 == 'a' || cha1 == 'A')
                            {

                                p[create_class].attend[i][loc] = 'A';
                            }
                            else
                            {
                                cout << "Enter only absent for (A) or present for (P)";
                                getch();
                                goto reenter11;
                            }
                        }
                        cout << "Records will be updates.......";

                        loc = -1;
                    end21:
                        getch();
                    }

                    else if (ch1 == 2)
                    {
                        system("cls");
                        cout << "Which class : ";
                        cin >> create_class;
                        x = update_i[create_class][1];
                        if (x == 0)
                        {
                            cout << "\n\nNo any record found....\n";
                            goto end22;
                        }

                        updx = up_datex[create_class][1];
                        if (updx == 0)
                        {
                            cout << "\n\nNo any record found....\n";
                            goto end22;
                        }
                        cout << "Roll no.\tName\t\t   ";
                        for (i = 0; i < updx; i++)
                        {
                            date = p[create_class].store_date[i][0];
                            month = p[create_class].store_date[i][1];
                            year = p[create_class].store_date[i][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }

                        cout << endl;
                        for (i = 0; i < x; i++)
                        {
                            for (j = 0; j < updx; j++)
                            {
                                if (j == 0)
                                {
                                    cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                                    cout << "    " << p[create_class].attend[i][j];
                                }
                                else
                                {
                                    cout << "         " << p[create_class].attend[i][j];
                                }
                            }
                            cout << endl;
                        }
                        cout << endl
                             << endl;
                        cout << "Enter roll no. : ";
                        cin >> rollno1;
                        y = update_i[create_class][1];
                        for (i = 0; i < y; i++)
                        {
                            if (rollno1 == p[create_class].roll_no[i])
                            {
                                loc = i;
                                break;
                            }
                        }
                        if (loc == -1)
                        {
                            cout << endl
                                 << endl;
                            cout << "No record found......";
                            goto end22;
                        }

                        system("cls");
                        cout << "Roll no.\tName\t\t   ";
                        for (i = 0; i < updx; i++)
                        {
                            date = p[create_class].store_date[i][0];
                            month = p[create_class].store_date[i][1];
                            year = p[create_class].store_date[i][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }

                        cout << endl;

                        for (j = 0; j < updx; j++)
                        {
                            if (j == 0)
                            {
                                cout << "  " << p[create_class].roll_no[loc] << ".\t\t" << p[create_class].name[loc] << "\t\t: ";
                                cout << "    " << p[create_class].attend[loc][j];
                            }
                            else
                            {
                                cout << "         " << p[create_class].attend[loc][j];
                            }
                        }
                        cout << endl
                             << endl;
                        for (j = 0; j < updx; j++)
                        {
                            if (j == 0)
                            {
                                cout << "  " << p[create_class].roll_no[loc] << ".\t\t" << p[create_class].name[loc] << "\t\t: ";
                            }
                            cout << "    ";
                        reenter3:
                            cin >> cha1;
                            if (cha1 == 'p' || cha1 == 'P')
                            {

                                p[create_class].attend[loc][j] = 'P';
                            }
                            else if (cha1 == 'a' || cha1 == 'A')
                            {

                                p[create_class].attend[loc][j] = 'A';
                            }

                            else
                            {
                                cout << "Enter only absent for (A) or present for (P)";
                                getch();
                                goto reenter3;
                            }
                        }
                        loc = -1;
                        cout << endl
                             << endl;
                        cout << "Records  will be updates........";
                    end22:
                        getch();
                    }
                    else if (ch1 == 3)
                    {
                        system("cls");
                        goto back2;
                    }

                    getch();
                }
                else if (ch1 == 5)
                {
                    system("cls");
                    cout << "Which class : ";
                    cin >> create_class;
                    x = update_i[create_class][1];
                    if (x == 0)
                    {
                        cout << "\n\nNo any record found....\n";
                        goto ends;
                    }
                    cout << "Date : ";
                    cin >> date;
                    cout << "Month : ";
                    cin >> month;
                    cout << "Year : ";
                    cin >> year;
                    updx = up_datex[create_class][1];
                    for (i = 0; i < updx; i++)
                    {

                        if (date == p[create_class].store_date[i][0] && month == p[create_class].store_date[i][1] && year == p[create_class].store_date[i][2])
                        {
                            loc = i;
                            break;
                        }
                    }

                    if (loc == -1)
                    {
                        cout << "\n\nno record found\n";
                        goto ends;
                    }

                    cout << endl;
                    x = update_i[create_class][1];
                    updx = up_datex[create_class][1];
                    cout << "Roll no.\tName\t\tAttend" << endl;
                    for (i = 0; i < x; i++)
                    {
                        cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                        cout << p[create_class].attend[i][loc] << " ";
                        cout << endl;
                    }
                    cout << endl
                         << endl;
                again:
                    cout << "Are you sure you want to delete this record (Y/N) : ";
                    cin >> cha1;
                    if (cha1 == 'Y' || cha1 == 'y')
                    {
                        for (i = loc; i < updx; i++)
                        {
                            p[create_class].store_date[i][0] = p[create_class].store_date[i + 1][0];
                            p[create_class].store_date[i][1] = p[create_class].store_date[i + 1][1];
                            p[create_class].store_date[i][2] = p[create_class].store_date[i + 1][2];
                        }

                        for (i = 0; i < x; i++)
                        {
                            for (j = loc; j < updx - 1; j++)
                            {

                                p[create_class].attend[i][j] = p[create_class].attend[i][j + 1];
                            }
                        }
                        up_att[create_class][1] = a1 - 1;
                        up_datex[create_class][1] = updx - 1;
                        cout << "\n\nRecord will be deleted.......";
                    }
                    else if (cha1 == 'N' || cha1 == 'n')
                    {
                        cout << "\n\n Ok......";
                        goto ends;
                    }
                    else
                    {
                        cout << "\nWrong choice\n";
                        cout << "Please choose correct option";

                        goto again;
                    }
                    loc = -1;

                ends:
                    getch();
                }

                else if (ch1 == 6)
                {
                    goto main_menu;
                }

            } while (ch1 >= 1 && ch1 <= 6);
        }

        else if (ch1 == 4)
        {
            break;
        }
    } while (ch1 >= 1 && ch1 <= 3);
    return 0;
}

