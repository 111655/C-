#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int ch1, rollno1, marksj1, no, tsub, i = 0, s = 0, x, y, j, j1, k, z = 0, total_class = 0, loc = -1, create_class, rollno;
int update_i[50][1], store_tsub[20][1], store_class[15], up_att[50][1], up_datex[50][1];
char cha1, cha2[20], subject2[30];
int classes, q1, inc = 0, reprint, TNOS, ins = 0, a1 = 0, b1, x1, updx = 0, date, month, year, location1[30];
int present = 0, absent = 0, enterno1,foche=0,totfm,totgm,perexam;
struct st_marks
{
    int store_marks1[50][30];
    int store_test_date[30][3];
    int stnom1[30];
    int store_marks2[50][30];
    int store_exam_date[30][3];
    int stnom2[30];
};

struct school_record
{
    struct st_marks marks1[10];
    char null[1];

    int roll_no[50];
    char name[50][30];
    char phone_no[50][15];
    char address[50][30];
    char attend[50][50];
    int store_date[50][3];
    char subject[20][30];
    int up_marksj1[20][1];
    int up_marksj2[20][1];
};

void school()
{
    system("cls");

    struct school_record p[12];
    do
    {
    main_menu:
        system("cls");
        cout << "\t Main Menu\n\n";
        cout << "1. See all records\n";
        cout << "2. Entry/Edit record\n";
        cout << "3. Entry/Edit attendence\n";
        cout << "4. Entry/Edit Subject\n";
        cout << "5. Entry/Edit marks\n";
        cout << "6. Back\n\n";
        cout << "Please enter your choice : ";
        cin >> ch1;

        if (ch1 == 1)
        {
        back1:
            system("cls");
            cout << "1. Total no. of students in records\n";
            cout << "2. Phone no. of all students" << endl;
            cout << "3. Full details of particular student " << endl;

            cout << "4. Back" << endl
                 << endl;
            cout << "Enter your choice : ";
            cin >> ch1;
            if (ch1 == 1)
            {
                system("cls");
                cout << "1. Show all class\n";
                cout << "2. Show particular class\n";
                cout << "Enter your choice : ";
                cin >> ch1;
                if (ch1 == 1)
                {
                    system("cls");
                    if (total_class == 0)
                    {
                        cout << "\nno record found.....";
                        getch();
                        goto back1;
                    }
                    else
                    {
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
                }
                else if (ch1 == 2)
                {
                    system("cls");
                    cout << "which class : ";
                    cin >> create_class;
                    if (create_class <= 0)
                    {
                        cout << " You can enter 1 to 10 only ..........";
                        getch();
                        goto back1;
                    }
                    if (create_class > 10)
                    {
                        cout << " You can enter 1 to 10 only ..........";
                        getch();
                        goto back1;
                    }
                    x1 = update_i[create_class][1];
                    if (x1 == 0)
                    {
                        cout << "\nno record found.......";
                        getch();
                        goto back1;
                    }
                    else
                    {
                        cout << "\nTotal no of students in this class is " << x1;
                        getch();
                        goto back1;
                    }
                }
                else
                {
                    cout << "\nSomthing wrong.......";
                    cout << "\nPlease try again.....";
                    getch();
                    goto back1;
                }
                getch();
                goto back1;
            }
            else if (ch1 == 2)
            {
                system("cls");
                cout << "1. Show all class\n";
                cout << "2. Show particular class\n";
                cout << "Enter your choice : ";
                cin >> ch1;
                if (ch1 == 1)
                {
                    system("cls");
                    if (total_class == 0)
                    {
                        cout << "\nno record found.....";
                        getch();
                        goto back1;
                    }
                    else
                    {
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
                }
                else if (ch1 == 2)
                {
                    system("cls");
                    cout << "which class : ";
                    cin >> create_class;
                    if (create_class <= 0)
                    {
                        cout << " You can enter 1 to 10 only ..........";
                        getch();
                        goto back1;
                    }
                    if (create_class > 10)
                    {
                        cout << " You can enter 1 to 10 only ..........";
                        getch();
                        goto back1;
                    }
                    x1 = update_i[create_class][1];
                    if (x1 == 0)
                    {
                        cout << "\nno record found.......";
                        getch();
                        goto back1;
                    }
                    else
                    {
                        for (j = 0; j < x1; j++)
                        {

                            cout << "roll no. : " << p[classes].roll_no[j] << " : Phone no. : " << p[classes].phone_no[j] << endl;
                            ;
                        }
                        getch();
                        goto back1;
                    }
                }
                else
                {
                    cout << "\nSomthing wrong.......";
                    cout << "\nPlease try again.....";
                    getch();
                    goto back1;
                }
            }
            else if (ch1 == 3)
            {
                system("cls");
                cout << "Which class : ";
                cin >> create_class;
                if (create_class <= 0)
                {
                    cout << "\n\nYou can enter 1 to 10 only....";
                    getch();
                    goto back1;
                }
                if (create_class > 10)
                {
                    cout << "\n\nYou can enter 1 to 10 only....";
                    getch();
                    goto back1;
                }
                cout << "Enter student roll no. : ";
                cin >> rollno;
                cout << "\n\n";
                x = update_i[create_class][1];
                loc = -1;
                for (j = 0; j < x; j++)
                {
                    if (rollno == p[create_class].roll_no[j])
                    {
                        loc = j;
                    }
                }
                totfm=0;
                totgm=0;
                if (loc >= 0)
                {
                    cout << "Class             : " << create_class << endl;
                    cout << "Student roll no.  : " << p[create_class].roll_no[loc] << endl;
                    cout << "Student name      : " << p[create_class].name[loc] << endl;
                    cout << "Student phone no. : " << p[create_class].phone_no[loc] << endl;
                    cout << "Student address   : " << p[create_class].address[loc] << endl
                         << endl;
                    updx = up_datex[create_class][1];
                    if (updx > 0)
                    {
                        cout << "Attendance :-\n";
                        present = 0;
                        absent = 0;
                        for (j = 0; j < updx; j++)
                        {
                            
                            if (p[create_class].attend[loc][j] == 'P')
                            {
                                present++;
                            }
                            if (p[create_class].attend[loc][j] == 'A')
                            {
                                absent++;
                            }
                        }
                        // cout << "\n";
                        cout << "  Total Days = " << updx <<endl;
                        cout << "  Present    = " << present << endl;
                        cout << "  Absent     = " << absent;
                    }
                    cout << "\n\n";
                    tsub = store_tsub[create_class][1];
                    if (tsub > 0)
                    {
                        for (i = 0; i < tsub; i++)
                        {
                            marksj1 = p[create_class].up_marksj1[i][1];
                            if (marksj1 > 0)
                            {
                                if (i == 0)
                                {
                                    cout << "Class test marks :-\n";
                                }
                                cout << "Subject : " << p[create_class].subject[i] << endl;

                                cout << "  ";
                                for (j = 0; j < marksj1; j++)
                                {
                                    date = p[create_class].marks1[i].store_test_date[j][0];
                                    month = p[create_class].marks1[i].store_test_date[j][1];
                                    year = p[create_class].marks1[i].store_test_date[j][2];
                                    cout <<date << "/" << month << "/" << year << "    ";
                                }
                                cout << endl;
                                for (j = 0; j < marksj1; j++)
                                {
                                    if (j == 0)
                                    {
                                        cout << "  F.M = " << p[create_class].marks1[i].stnom1[j];
                                    }
                                    else
                                    {
                                        cout << "    F.M = " << p[create_class].marks1[i].stnom1[j];
                                    }
                                }
                                cout << endl;
                                for (j = 0; j < marksj1; j++)
                                {
                                    if (j == 0)
                                    {
                                        cout << "     " << p[create_class].marks1[i].store_marks1[loc][j] << "          ";
                                    }
                                    else
                                    {
                                        cout << p[create_class].marks1[i].store_marks1[loc][j] << "          ";
                                    }
                                }
                                cout << endl
                                     << endl;
                            }
                        }
                    }
                    tsub = store_tsub[create_class][1];
                    if (tsub > 0)
                    {
                        for (i = 0; i < tsub; i++)
                        {
                            marksj1 = p[create_class].up_marksj2[i][1];
                            if (marksj1 > 0)
                            {
                                if (i == 0)
                                {
                                    cout << "Exam marks :-\n";
                                    cout << "Subject           date          F-M     Gain-M" << endl;
                                    foche++;
                                }
                                cout<<p[create_class].subject[i];
                                cout << "\t\t";
                                for (j = 0; j < 1; j++)
                                {
                                    date = p[create_class].marks1[i].store_exam_date[j][0];
                                    month = p[create_class].marks1[i].store_exam_date[j][1];
                                    year = p[create_class].marks1[i].store_exam_date[j][2];
                                    cout <<date << "/" << month << "/" << year << "    ";
                                }
                                // cout << endl;
                                for (j = 0; j < 1; j++)
                                {
                                        cout << "\t" << p[create_class].marks1[i].stnom2[j];
                                        totfm=totfm+p[create_class].marks1[i].stnom2[j];
                                }
                                // cout << endl;
                                for (j = 0; j < 1; j++)
                                {
                                        cout << "\t  " << p[create_class].marks1[i].store_marks2[loc][j];
                                        totgm=totgm+p[create_class].marks1[i].store_marks2[loc][j];
                                }
                                cout <<endl<< endl;
                               
                            }
                                

                                // cout << "                 grade : "<<grade<<endl;
                        }
                        if (foche>=1)
                        {
                            cout << "                               -----------------"<<endl;
                                cout << "                 total :       "<<totfm<<"        "<<totgm<<endl;
                                perexam=(totgm*100)/totfm;
                                cout << "               percent : "<<perexam<<"%"<<endl;
                                if (perexam>=90)
                                {
                                   cout << "                 grade : A+"<<endl;
                                }
                                else if (perexam>=80  &&  perexam<=89)
                                {
                                    cout << "                 grade : A"<<endl;
                                }
                                else if (perexam>=70  &&  perexam<=79)
                                {
                                    cout << "                 grade : B+"<<endl;
                                }
                                else if (perexam>=60  &&  perexam<=69)
                                {
                                    cout << "                 grade : B"<<endl;
                                }
                                else if (perexam>=50  &&  perexam<=59)
                                {
                                    cout << "                 grade : C"<<endl;
                                }
                                else if (perexam>=40  &&  perexam<=49)
                                {
                                    cout << "                 grade : D"<<endl;
                                }
                                else if (perexam>=0  &&  perexam<=39)
                                {
                                    cout << "                 grade : F"<<endl;
                                }
                                foche=0;
                        }
                        
                    }
                }
                else
                    cout << "No any record found.......";
                loc = -1;
                getch();
                goto back1;
            }

            else if (ch1 == 5)
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
                    cout << "which class : ";
                    cin >> create_class;
                    if (create_class <= 0)
                    {
                        cout << " You create 1 to 10 class only ..........";
                        getch();
                        goto start;
                    }
                    if (create_class > 10)
                    {
                        cout << " You create 1 to 10 class only ..........";
                        getch();
                        goto start;
                    }

                    store_class[total_class] = create_class;
                    total_class++;
                    for (i = 0; i < total_class; i++)
                    {
                        if (store_class[total_class - 1] == store_class[i - 1])
                        {
                            total_class--;
                        }
                    }
                    cout << "Enter number of students : ";
                    cin >> no;
                    x = update_i[create_class][1];
                    k = x + no;

                    cout << "\n\n";

                    for (i = x; i < k; i++)
                    {

                    roll:
                        cout << "Enter roll no.          : ";
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
                                getch();
                                goto roll;
                            }
                        }

                        gets(p[create_class].null);
                        cout << "Enter student name      : ";
                        gets(p[create_class].name[i]);

                        cout << "Enter student phone no. : ";
                        gets(p[create_class].phone_no[i]);

                        cout << "Enter student address   : ";
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
                    if (create_class <= 0)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto start;
                    }
                    if (create_class > 10)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto start;
                    }

                    cout << "\n\n";
                    x1 = update_i[create_class][1];

                    for (i = 0; i < x1; i++)
                    {

                        cout << "Student roll no.  : " << p[create_class].roll_no[i] << endl;
                        cout << "Student name      : " << p[create_class].name[i] << endl;
                        cout << "Student phone no. : " << p[create_class].phone_no[i] << endl;
                        cout << "Student address   : " << p[create_class].address[i] << endl;
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
                    cout << "Which class : ";
                    cin >> create_class;
                    if (create_class <= 0)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto start;
                    }
                    if (create_class > 10)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto start;
                    }
                    cout << "Enter student roll no. : ";
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
                        cout << "Class             : " << create_class << endl;
                        cout << "Student roll no.  : " << p[create_class].roll_no[loc] << endl;
                        cout << "Student name      : " << p[create_class].name[loc] << endl;
                        cout << "Student phone no. : " << p[create_class].phone_no[loc] << endl;
                        cout << "Student address   : " << p[create_class].address[loc] << endl;
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
                    cout << "Which class : ";
                    cin >> create_class;
                    if (create_class <= 0)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto start;
                    }
                    if (create_class > 10)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto start;
                    }
                    cout << "Enter student roll no. : ";
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

                        cout << "Student roll no.  : " << p[create_class].roll_no[loc] << endl;
                        cout << "Student name      : " << p[create_class].name[loc] << endl;
                        cout << "Student phone no. : " << p[create_class].phone_no[loc] << endl;
                        cout << "Student address   : " << p[create_class].address[loc] << endl
                             << endl;

                    reenterroll:
                        cout << "Enter student roll no.  : ";
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
                        cout << "Enter student name      : ";
                        gets(p[create_class].name[loc]);

                        cout << "Enter student phone no. : ";
                        gets(p[create_class].phone_no[loc]);

                        cout << "Enter student address   : ";
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
                    cout << "Which class : ";
                    cin >> create_class;
                    if (create_class <= 0)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto start;
                    }
                    if (create_class > 10)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto start;
                    }
                    cout << "Enter student roll no. : ";
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

                        cout << "Student roll no.  : " << p[create_class].roll_no[loc] << endl;
                        cout << "Student name      : " << p[create_class].name[loc] << endl;
                        cout << "Student phone no. : " << p[create_class].phone_no[loc] << endl;
                        cout << "Student address   : " << p[create_class].address[loc] << endl;
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
            } while (ch1 != 6);
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
                    if (create_class <= 0)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto back2;
                    }
                    if (create_class > 10)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto back2;
                    }
                    x = update_i[create_class][1];
                    if (x == 0)
                    {
                        cout << "\n\nNo any record found....\n";
                        goto end1;
                    }
                    cout << "Date  : ";
                    cin >> date;
                    cout << "Month : ";
                    cin >> month;
                    cout << "Year  : ";
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
                            if (reprint >= 0 && reprint > i && j == a1)
                            {
                                goto below1;
                            }

                            if (j < a1 && p[create_class].attend[i][j] == 'A' || p[create_class].attend[i][j] == 'P')
                            {
                            below1:
                                cout << p[create_class].attend[i][j] << "  ";
                            }
                            // else if (j < a1-1 && j != 0  && p[create_class].attend[i][j] != 'A' || p[create_class].attend[i][j] != 'P' )
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
                    if (create_class <= 0)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto back2;
                    }
                    if (create_class > 10)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto back2;
                    }
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
                    if (create_class <= 0)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto back2;
                    }
                    if (create_class > 10)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto back2;
                    }
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
                part1:
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
                        if (create_class <= 0)
                        {
                            cout << "\n\nYou can enter 1 to 10 only....";
                            getch();
                            goto part1;
                        }
                        if (create_class > 10)
                        {
                            cout << "\n\nYou can enter 1 to 10 only....";
                            getch();
                            goto part1;
                        }
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
                        cout << "Enter date  : ";
                        cin >> date;
                        cout << "Enter month : ";
                        cin >> month;
                        cout << "Enter year  : ";
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
                        if (create_class <= 0)
                        {
                            cout << "\n\nYou can enter 1 to 10 only....";
                            getch();
                            goto part1;
                        }
                        if (create_class > 10)
                        {
                            cout << "\n\nYou can enter 1 to 10 only....";
                            getch();
                            goto part1;
                        }
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
                    if (create_class <= 0)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto back2;
                    }
                    if (create_class > 10)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto back2;
                    }
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
                    a1 = up_att[create_class][1];
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
                            for (j = loc; j < a1; j++)
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

            } while (ch1 != 6);
        }
        else if (ch1 == 4)
        {
        addsub:
            system("cls");
            cout << "1. Entry " << endl;
            cout << "2. Display " << endl;
            cout << "3. Modify " << endl;
            cout << "4. Delete " << endl;
            cout << "5. Back" << endl
                 << endl;
            cout << "Please enter your choice : ";
            cin >> ch1;
            switch (ch1)
            {
            case 1:
            {
                system("cls");
                cout << "Which class : ";
                cin >> create_class;
                if (create_class <= 0)
                {
                    cout << "\n\nYou can enter 1 to 10 only....";
                    getch();
                    goto addsub;
                }
                if (create_class > 10)
                {
                    cout << "\n\nYou can enter 1 to 10 only....";
                    getch();
                    goto addsub;
                }
                cout << "Enter total no. of subject : ";
                cin >> no;
                cout << "\n\n";
                gets(p[create_class].null);

                tsub = store_tsub[create_class][1];
                k = tsub + no;
                for (i = tsub; i < k; i++)
                {
                    cout << "Sub " << i + 1 << " : ";

                    gets(subject2);
                    strcpy(p[create_class].subject[i], subject2);
                }
                store_tsub[create_class][1] = k;
                cout << "\n\n Record will be saved.....\n";

                getch();
                goto addsub;
            }
            case 2:
            {
                system("cls");
                cout << "Which class : ";
                cin >> create_class;
                if (create_class <= 0)
                {
                    cout << "\n\nYou can enter 1 to 10 only....";
                    getch();
                    goto addsub;
                }
                if (create_class > 10)
                {
                    cout << "\n\nYou can enter 1 to 10 only....";
                    getch();
                    goto addsub;
                }
                cout << "\n\n";

                tsub = store_tsub[create_class][1];
                if (tsub == 0)
                {
                    cout << "\n\nNo record found.......\n";
                }
                else
                {
                    for (i = 0; i < tsub; i++)
                    {
                        cout << "Sub " << i + 1 << " : " << p[create_class].subject[i] << endl;
                    }
                }

                getch();
                goto addsub;
            }
            case 3:
            {
                system("cls");
                cout << "Which class : ";
                cin >> create_class;
                if (create_class <= 0)
                {
                    cout << "\n\nYou can enter 1 to 10 only....";
                    getch();
                    goto addsub;
                }
                if (create_class > 10)
                {
                    cout << "\n\nYou can enter 1 to 10 only....";
                    getch();
                    goto addsub;
                }
                cout << "\n\n";

                tsub = store_tsub[create_class][1];
                if (tsub == 0)
                {
                    cout << "\n\nNo record found.......\n";
                }
                else
                {
                    for (i = 0; i < tsub; i++)
                    {
                        cout << "Sub " << i + 1 << " : " << p[create_class].subject[i] << endl;
                    }
                rein1:
                    cout << "\n\nWhich subject modify : ";
                    cin >> ch1;
                    gets(p[create_class].null);
                    if (ch1 > 0 && ch1 <= tsub)
                    {
                        cout << "\nPlease re-inter : ";
                        gets(subject2);
                        strcpy(p[create_class].subject[ch1 - 1], subject2);
                        cout << "\n\nChange will be saved......";
                    }
                    else
                    {
                        cout << "\nPlease enter correct option ......... ";
                        goto rein1;
                    }
                }

                getch();
                goto addsub;
            }
            case 4:
            {
                system("cls");
                cout << "Which class : ";
                cin >> create_class;
                if (create_class <= 0)
                {
                    cout << "\n\nYou can enter 1 to 10 only....";
                    getch();
                    goto addsub;
                }
                if (create_class > 10)
                {
                    cout << "\n\nYou can enter 1 to 10 only....";
                    getch();
                    goto addsub;
                }
                cout << "\n\n";
                tsub = store_tsub[create_class][1];
                if (tsub == 0)
                {
                    cout << "\n\nNo record found.......\n";
                }
                else
                {
                    for (i = 0; i < tsub; i++)
                    {
                        cout << "Sub " << i + 1 << " : " << p[create_class].subject[i] << endl;
                    }
                rein2:
                    cout << "\n\nWhich subject delete : ";
                    cin >> ch1;
                    if (ch1 > 0 && ch1 <= tsub)
                    {
                        for (i = ch1 - 1; i < tsub; i++)
                        {
                            strcpy(p[create_class].subject[i], p[create_class].subject[i + 1]);
                        }
                        store_tsub[create_class][1] = tsub - 1;
                        cout << "\n\nChange will be saved......";
                    }
                    else
                    {
                        cout << "\nPlease enter correct option ......... ";
                        goto rein2;
                    }
                }
                getch();
                goto addsub;
            }
            case 5:
            {
                goto main_menu;
            }
            }
        }
        else if (ch1 == 5)
        {
            system("cls");
            cout << "1. For class test \n";
            cout << "2. For examination \n\n";
            cout << "Enter your choice : ";
            cin >> ch1;

            if (ch1 == 1)
            {
                entry_11marks:
                system("cls");
                    cout << "Which class : ";
                    cin >> create_class;
                    if (create_class <= 0)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto entry_11marks;
                    }
                    if (create_class > 10)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto entry_11marks;
                    }
            entry_marks:
                system("cls");
                cout << "1. Entry Marks" << endl;
                cout << "2. Display " << endl;
                cout << "3. Modify " << endl;
                cout << "4. Delete " << endl;
                cout << "5. Back" << endl
                     << endl;
                cout << "Please enter your choice : ";
                cin >> ch1;
                switch (ch1)
                {
                case 1:
                {
                    
                    x = update_i[create_class][1];
                    if (x == 0)
                    {
                        cout << "\n\nNo record found......\n";
                        getch();
                        goto entry_marks;
                    }
                    tsub = store_tsub[create_class][1];
                    if (tsub == 0)
                    {
                        cout << "\n\nNo record found......\n";
                        getch();
                        goto entry_marks;
                    }
                    else
                    {
                    bac1:
                        system("cls");
                        cout << "Class : " << create_class;
                        cout << "\n\n";
                        for (i = 0; i < tsub; i++)
                        {
                            cout << "Sub " << i + 1 << " : " << p[create_class].subject[i] << endl;
                        }
                        cout << "\n Choose subject : ";
                        cin >> ch1;
                        if (ch1 > 0 && ch1 <= tsub)
                        {
                            goto cont1;
                        }
                        else
                        {
                            cout << "\n\nSomthing wrong....\n";
                            cout << "Please re-enter....\n";
                            goto bac1;
                        }
                    cont1:
                        cout << "Date  : ";
                        cin >> date;
                        cout << "Month : ";
                        cin >> month;
                        cout << "Year  : ";
                        cin >> year;

                        marksj1 = p[create_class].up_marksj1[ch1 - 1][1];

                        p[create_class].marks1[ch1 - 1].store_test_date[marksj1][0] = date;
                        p[create_class].marks1[ch1 - 1].store_test_date[marksj1][1] = month;
                        p[create_class].marks1[ch1 - 1].store_test_date[marksj1][2] = year;

                        system("cls");

                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl;
                        cout << "Date    : " << date << "/" << month << "/" << year << endl
                             << endl;
                        cout << "Enter full marks : ";
                        cin >> p[create_class].marks1[ch1 - 1].stnom1[marksj1];
                        x = update_i[create_class][1];
                        marksj1 = p[create_class].up_marksj1[ch1 - 1][1];
                        cout << endl;

                        for (i = 0; i < x; i++)
                        {
                        entermarks1:
                            cout << p[create_class].roll_no[i] << ". " << p[create_class].name[i] << "\t\t:  ";
                            cin >> enterno1;
                            if (enterno1 <= p[create_class].marks1[ch1 - 1].stnom1[marksj1])
                            {
                                p[create_class].marks1[ch1 - 1].store_marks1[i][marksj1] = enterno1;
                            }
                            else
                            {
                                cout << "\nEnter no. is wrong because this no. is greater then full marks,"
                                     << "\nso, please re-enter the marks.\n\n";
                                goto entermarks1;
                            }
                        }
                        p[create_class].up_marksj1[ch1 - 1][1] = marksj1 + 1;
                        cout << "\n\nRecord will be saved........\n";
                    }

                    getch();
                    goto entry_marks;
                }
                case 2:
                {

                    
                bac2:
                    system("cls");
                    cout << "Class : " << create_class;
                    tsub = store_tsub[create_class][1];
                    if (tsub == 0)
                    {
                        cout << "\n\nNo record found......\n";
                        getch();
                        goto entry_marks;
                    }
                    else
                    {
                        cout << "\n\n";
                        for (i = 0; i < tsub; i++)
                        {
                            cout << "Sub " << i + 1 << " : " << p[create_class].subject[i] << endl;
                        }
                        cout << "\n Choose subject : ";
                        cin >> ch1;
                        if (ch1 > 0 && ch1 <= tsub)
                        {
                            goto cont2;
                        }
                        else
                        {
                            cout << "\n\nSomthing wrong....\n";
                            cout << "Please re-enter....\n";
                            goto bac2;
                        }
                    cont2:
                        marksj1 = p[create_class].up_marksj1[ch1 - 1][1];
                        if (marksj1 == 0)
                        {
                            cout << "\n\nNo record found......\n";
                            getch();
                            goto entry_marks;
                        }
                        system("cls");
                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl
                             << endl;
                        cout << "Roll no.\tName\t\t   ";
                        for (i = 0; i < marksj1; i++)
                        {
                            date = p[create_class].marks1[ch1 - 1].store_test_date[i][0];
                            month = p[create_class].marks1[ch1 - 1].store_test_date[i][1];
                            year = p[create_class].marks1[ch1 - 1].store_test_date[i][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }
                        cout << endl;
                        for (i = 0; i < marksj1; i++)
                        {
                            if (i == 0)
                            {
                                cout << "               \t    \t\t  F.M = " << p[create_class].marks1[ch1 - 1].stnom1[i];
                            }
                            else
                            {
                                cout << "  F.M = " << p[create_class].marks1[ch1 - 1].stnom1[i];
                            }
                        }
                        cout << endl;

                        x = update_i[create_class][1];

                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            for (j = 0; j < marksj1; j++)
                            {
                                cout << "    " << p[create_class].marks1[ch1 - 1].store_marks1[i][j] << "     ";
                            }
                            cout << endl;
                        }
                    }
                    getch();
                    goto entry_marks;
                }
                case 3:
                {

                    
                bac3:
                    system("cls");
                    cout << "Class : " << create_class;
                    tsub = store_tsub[create_class][1];
                    if (tsub == 0)
                    {
                        cout << "\n\nNo record found......\n";
                        getch();
                        goto entry_marks;
                    }
                    else
                    {
                        cout << "\n\n";
                        for (i = 0; i < tsub; i++)
                        {
                            cout << "Sub " << i + 1 << " : " << p[create_class].subject[i] << endl;
                        }
                        cout << "\n Choose subject : ";
                        cin >> ch1;
                        if (ch1 > 0 && ch1 <= tsub)
                        {
                            goto cont3;
                        }
                        else
                        {
                            cout << "\n\nSomthing wrong....\n";
                            cout << "Please re-enter....\n";
                            goto bac3;
                        }
                    cont3:
                        marksj1 = p[create_class].up_marksj1[ch1 - 1][1];
                        if (marksj1 == 0)
                        {
                            cout << "\n\nNo record found......\n";
                            getch();
                            goto entry_marks;
                        }
                    back01:
                        system("cls");
                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl
                             << endl;
                        cout << "Roll no.\tName\t\t   ";
                        for (i = 0; i < marksj1; i++)
                        {
                            date = p[create_class].marks1[ch1 - 1].store_test_date[i][0];
                            month = p[create_class].marks1[ch1 - 1].store_test_date[i][1];
                            year = p[create_class].marks1[ch1 - 1].store_test_date[i][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }
                        cout << endl;
                        for (i = 0; i < marksj1; i++)
                        {
                            if (i == 0)
                            {
                                cout << "               \t    \t\t   F.M = " << p[create_class].marks1[ch1 - 1].stnom1[i];
                            }
                            else
                            {
                                cout << "  F.M = " << p[create_class].marks1[ch1 - 1].stnom1[i];
                            }
                        }
                        cout << endl;
                        x = update_i[create_class][1];

                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            for (j = 0; j < marksj1; j++)
                            {
                                cout << "    " << p[create_class].marks1[ch1 - 1].store_marks1[i][j] << "     ";
                            }
                            cout << endl;
                        }
                        cout << endl;
                        cout << "Enter date : ";
                        cin >> date;
                        cout << "     month : ";
                        cin >> month;
                        cout << "      year : ";
                        cin >> year;
                        inc = 0;
                        for (i = 0; i < marksj1; i++)
                        {
                            if (date == p[create_class].marks1[ch1 - 1].store_test_date[i][0] && month == p[create_class].marks1[ch1 - 1].store_test_date[i][1] && year == p[create_class].marks1[ch1 - 1].store_test_date[i][2])
                            {
                                location1[inc] = i;
                                inc++;
                            }
                        }
                        if (inc == 0)
                        {
                            cout << "\n\nSomthing wrong.........\n";
                            cout << "Please try again...........\n";
                            getch();
                            goto back01;
                        }

                        if (inc == 1)
                        {
                            j = location1[0];
                            goto middle1;
                        }
                    back02:
                        system("cls");
                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl
                             << endl;
                        cout << "Roll no.\tName\t\t   ";
                        for (i = 0; i < inc; i++)
                        {
                            j = location1[i];
                            date = p[create_class].marks1[ch1 - 1].store_test_date[j][0];
                            month = p[create_class].marks1[ch1 - 1].store_test_date[j][1];
                            year = p[create_class].marks1[ch1 - 1].store_test_date[j][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }
                        cout << endl;
                        for (i = 0; i < inc; i++)
                        {
                            j = location1[i];
                            if (i == 0)
                            {
                                cout << "               \t    \t\t   F.M = " << p[create_class].marks1[ch1 - 1].stnom1[j];
                            }
                            else
                            {
                                cout << "   F.M = " << p[create_class].marks1[ch1 - 1].stnom1[j];
                            }
                        }
                        cout << endl;
                        x = update_i[create_class][1];

                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            for (j = 0; j < inc; j++)
                            {
                                q1 = location1[j];
                                cout << "    " << p[create_class].marks1[ch1 - 1].store_marks1[i][q1] << "     ";
                            }
                            cout << endl;
                        }
                        cout << endl;
                        cout << "Choose any one : ";
                        cin >> q1;
                        if (q1 <= 0)
                        {
                            cout << "\n\nSomthing wrong.........\n";
                            cout << "Please try again...........\n";
                            getch();
                            goto back02;
                        }
                        if (q1 > inc)
                        {
                            cout << "\n\nSomthing wrong.........\n";
                            cout << "Please try again...........\n";
                            getch();
                            goto back02;
                        }

                        j = location1[q1 - 1];
                    middle1:
                        system("cls");
                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl
                             << endl;
                        cout << "Roll no.\tName\t\t   ";

                        date = p[create_class].marks1[ch1 - 1].store_test_date[j][0];
                        month = p[create_class].marks1[ch1 - 1].store_test_date[j][1];
                        year = p[create_class].marks1[ch1 - 1].store_test_date[j][2];
                        cout << date << "/" << month << "/" << year << "  " << endl;
                        cout << "               \t    \t\t   F.M = " << p[create_class].marks1[ch1 - 1].stnom1[j];
                        cout << endl;
                        x = update_i[create_class][1];

                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            cout << "    " << p[create_class].marks1[ch1 - 1].store_marks1[i][j] << "     ";
                            cout << endl;
                        }
                    }
                    cout << endl;
                    cout << "Re-enter marks :-" << endl
                         << endl;
                    cout << "Enter full marks : ";
                    cin >> p[create_class].marks1[ch1 - 1].stnom1[j];
                    cout << endl;
                    for (i = 0; i < x; i++)
                    {
                    entermarks2:
                        cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                        cin >> enterno1;
                        if (enterno1 <= p[create_class].marks1[ch1 - 1].stnom1[j])
                        {
                            p[create_class].marks1[ch1 - 1].store_marks1[i][j] = enterno1;
                        }
                        else
                        {
                            cout << "\nEnter no. is wrong because this no. is greater then full marks,"
                                 << "\nso, please re-enter the marks.\n\n";
                            goto entermarks2;
                        }
                    }
                    cout << "\n\nRecord will be updated............";
                    getch();
                    goto entry_marks;
                }
                case 4:
                {

                    
                bac4:
                    system("cls");
                    cout << "Class : " << create_class;
                    tsub = store_tsub[create_class][1];
                    if (tsub == 0)
                    {
                        cout << "\n\nNo record found......\n";
                        getch();
                        goto entry_marks;
                    }
                    else
                    {
                        cout << "\n\n";
                        for (i = 0; i < tsub; i++)
                        {
                            cout << "Sub " << i + 1 << " : " << p[create_class].subject[i] << endl;
                        }
                        cout << "\n Choose subject : ";
                        cin >> ch1;
                        if (ch1 > 0 && ch1 <= tsub)
                        {
                            goto cont4;
                        }
                        else
                        {
                            cout << "\n\nSomthing wrong....\n";
                            cout << "Please re-enter....\n";
                            goto bac4;
                        }
                    cont4:
                        marksj1 = p[create_class].up_marksj1[ch1 - 1][1];
                        if (marksj1 == 0)
                        {
                            cout << "\n\nNo record found......\n";
                            getch();
                            goto entry_marks;
                        }
                    back05:
                        system("cls");
                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl
                             << endl;
                        cout << "Roll no.\tName\t\t   ";
                        for (i = 0; i < marksj1; i++)
                        {
                            date = p[create_class].marks1[ch1 - 1].store_test_date[i][0];
                            month = p[create_class].marks1[ch1 - 1].store_test_date[i][1];
                            year = p[create_class].marks1[ch1 - 1].store_test_date[i][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }
                        cout << endl;
                        for (i = 0; i < marksj1; i++)
                        {
                            if (i == 0)
                            {
                                cout << "               \t    \t\t   F.M = " << p[create_class].marks1[ch1 - 1].stnom1[i];
                            }
                            else
                            {
                                cout << "  F.M = " << p[create_class].marks1[ch1 - 1].stnom1[i];
                            }
                        }
                        cout << endl;
                        x = update_i[create_class][1];

                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            for (j = 0; j < marksj1; j++)
                            {
                                cout << "    " << p[create_class].marks1[ch1 - 1].store_marks1[i][j] << "     ";
                            }
                            cout << endl;
                        }
                        cout << endl;
                        cout << "Enter date : ";
                        cin >> date;
                        cout << "     month : ";
                        cin >> month;
                        cout << "      year : ";
                        cin >> year;
                        inc = 0;
                        for (i = 0; i < marksj1; i++)
                        {
                            if (date == p[create_class].marks1[ch1 - 1].store_test_date[i][0] && month == p[create_class].marks1[ch1 - 1].store_test_date[i][1] && year == p[create_class].marks1[ch1 - 1].store_test_date[i][2])
                            {
                                location1[inc] = i;
                                inc++;
                            }
                        }
                        if (inc == 0)
                        {
                            cout << "\n\nSomthing wrong.........\n";
                            cout << "Please try again...........\n";
                            getch();
                            goto back05;
                        }

                        if (inc == 1)
                        {
                            j = location1[0];
                            goto middle2;
                        }
                    back03:
                        system("cls");
                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl
                             << endl;
                        cout << "Roll no.\tName\t\t   ";
                        for (i = 0; i < inc; i++)
                        {
                            j = location1[i];
                            date = p[create_class].marks1[ch1 - 1].store_test_date[j][0];
                            month = p[create_class].marks1[ch1 - 1].store_test_date[j][1];
                            year = p[create_class].marks1[ch1 - 1].store_test_date[j][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }
                        cout << endl;
                        for (i = 0; i < inc; i++)
                        {
                            j = location1[i];
                            if (i == 0)
                            {
                                cout << "               \t    \t\t   F.M = " << p[create_class].marks1[ch1 - 1].stnom1[j];
                            }
                            else
                            {
                                cout << "   F.M = " << p[create_class].marks1[ch1 - 1].stnom1[j];
                            }
                        }
                        cout << endl;
                        x = update_i[create_class][1];

                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            for (j = 0; j < inc; j++)
                            {
                                q1 = location1[j];
                                cout << "    " << p[create_class].marks1[ch1 - 1].store_marks1[i][q1] << "     ";
                            }
                            cout << endl;
                        }
                        cout << endl;
                        cout << "Choose any one : ";
                        cin >> q1;
                        if (q1 <= 0)
                        {
                            cout << "\n\nSomthing wrong.........\n";
                            cout << "Please try again...........\n";
                            getch();
                            goto back03;
                        }
                        if (q1 > inc)
                        {
                            cout << "\n\nSomthing wrong.........\n";
                            cout << "Please try again...........\n";
                            getch();
                            goto back03;
                        }

                        j = location1[q1 - 1];
                    middle2:
                        system("cls");
                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl
                             << endl;
                        cout << "Roll no.\tName\t\t   ";

                        date = p[create_class].marks1[ch1 - 1].store_test_date[j][0];
                        month = p[create_class].marks1[ch1 - 1].store_test_date[j][1];
                        year = p[create_class].marks1[ch1 - 1].store_test_date[j][2];
                        cout << date << "/" << month << "/" << year << "  " << endl;
                        cout << "               \t    \t\t   F.M = " << p[create_class].marks1[ch1 - 1].stnom1[j];
                        cout << endl;
                        x = update_i[create_class][1];

                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            cout << "    " << p[create_class].marks1[ch1 - 1].store_marks1[i][j] << "     ";
                            cout << endl;
                        }
                    }
                    cout << endl;
                    marksj1 = p[create_class].up_marksj1[ch1 - 1][1];
                rein01:
                    cout << "Are you sure you want to delete this records (Y/N) : ";
                    cin >> cha1;
                    if (cha1 == 'Y' || cha1 == 'y')
                    {
                        for (i = j; i < marksj1; i++)
                        {
                            p[create_class].marks1[ch1 - 1].store_test_date[i][0] = p[create_class].marks1[ch1 - 1].store_test_date[i + 1][0];
                            p[create_class].marks1[ch1 - 1].store_test_date[i][1] = p[create_class].marks1[ch1 - 1].store_test_date[i + 1][1];
                            p[create_class].marks1[ch1 - 1].store_test_date[i][2] = p[create_class].marks1[ch1 - 1].store_test_date[i + 1][2];
                            p[create_class].marks1[ch1 - 1].stnom1[i] = p[create_class].marks1[ch1 - 1].stnom1[i + 1];
                        }
                        for (i = 0; i < x; i++)
                        {
                            for (j1 = j; j1 < marksj1; j1++)
                            {
                                p[create_class].marks1[ch1 - 1].store_marks1[i][j1] = p[create_class].marks1[ch1 - 1].store_marks1[i][j1 + 1];
                            }
                        }
                        p[create_class].up_marksj1[ch1 - 1][1] = marksj1 - 1;
                        cout << "\nRecord will be deleted............\n";
                    }
                    else if (cha1 == 'N' || cha1 == 'n')
                    {
                        cout << "\nOk.........\n";
                    }
                    else
                    {
                        cout << "\nPlease enter correct option ......... ";
                        goto rein01;
                    }

                    getch();
                    goto entry_marks;

                case 5:
                {
                    goto main_menu;
                }
                }
                }
            }

            else if (ch1 == 2)
            {
            entry_11exam_marks:
             system("cls");
                    cout << "Which class : ";
                    cin >> create_class;
                    if (create_class <= 0)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto entry_11exam_marks;
                    }
                    if (create_class > 10)
                    {
                        cout << "\n\nYou can enter 1 to 10 only....";
                        getch();
                        goto entry_11exam_marks;
                    }
                     entry_exam_marks:
                system("cls");
                cout << "1. Entry Marks" << endl;
                cout << "2. Display " << endl;
                cout << "3. Modify " << endl;
                cout << "4. Delete " << endl;
                cout << "5. Back" << endl
                     << endl;
                cout << "Please enter your choice : ";
                cin >> ch1;
                switch (ch1)
                {
                case 1:
                {
                   
                    x = update_i[create_class][1];
                    if (x == 0)
                    {
                        cout << "\n\nNo record found......\n";
                        getch();
                        goto entry_exam_marks;
                    }
                    tsub = store_tsub[create_class][1];
                    if (tsub == 0)
                    {
                        cout << "\n\nNo record found......\n";
                        getch();
                        goto entry_marks;
                    }
                    else
                    {
                    backs10:
                        system("cls");
                        cout << "Class : " << create_class;
                        cout << "\n\n";
                        for (i = 0; i < tsub; i++)
                        {
                            cout << "Sub " << i + 1 << " : " << p[create_class].subject[i] << endl;
                        }
                        cout << "\n Choose subject : ";
                        cin >> ch1;
                        if (ch1 > 0 && ch1 <= tsub)
                        {
                            goto conti1;
                        }
                        else
                        {
                            cout << "\n\nSomthing wrong....\n";
                            cout << "Please re-enter....\n";
                            goto backs10;
                        }
                    conti1:
                        cout << "Date  : ";
                        cin >> date;
                        cout << "Month : ";
                        cin >> month;
                        cout << "Year  : ";
                        cin >> year;

                        marksj1 = p[create_class].up_marksj2[ch1 - 1][1];

                        p[create_class].marks1[ch1 - 1].store_exam_date[marksj1][0] = date;
                        p[create_class].marks1[ch1 - 1].store_exam_date[marksj1][1] = month;
                        p[create_class].marks1[ch1 - 1].store_exam_date[marksj1][2] = year;

                        system("cls");

                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl;
                        cout << "Date    : " << date << "/" << month << "/" << year << endl
                             << endl;
                        cout << "Enter full marks : ";
                        cin >> p[create_class].marks1[ch1 - 1].stnom2[marksj1];
                        x = update_i[create_class][1];
                        marksj1 = p[create_class].up_marksj2[ch1 - 1][1];
                        cout << endl;

                        for (i = 0; i < x; i++)
                        {
                        entermarks19:
                            cout << p[create_class].roll_no[i] << ". " << p[create_class].name[i] << "\t\t:  ";
                            cin >> enterno1;
                            if (enterno1 <= p[create_class].marks1[ch1 - 1].stnom2[marksj1])
                            {
                                p[create_class].marks1[ch1 - 1].store_marks2[i][marksj1] = enterno1;
                            }
                            else
                            {
                                cout << "\nEnter no. is wrong because this no. is greater then full marks,"
                                     << "\nso, please re-enter the marks.\n\n";
                                goto entermarks19;
                            }
                        }
                        p[create_class].up_marksj2[ch1 - 1][1] = marksj1 + 1;
                        cout << "\n\nRecord will be saved........\n";
                    }
                    getch();
                    goto entry_exam_marks;
                }
                case 2:
                {
                    
                backs2:
                    system("cls");
                    cout << "Class : " << create_class;
                    tsub = store_tsub[create_class][1];
                    if (tsub == 0)
                    {
                        cout << "\n\nNo record found......\n";
                        getch();
                        goto entry_exam_marks;
                    }
                    else
                    {
                        cout << "\n\n";
                        for (i = 0; i < tsub; i++)
                        {
                            cout << "Sub " << i + 1 << " : " << p[create_class].subject[i] << endl;
                        }
                        cout << "\n Choose subject : ";
                        cin >> ch1;
                        if (ch1 > 0 && ch1 <= tsub)
                        {
                            goto conts2;
                        }
                        else
                        {
                            cout << "\n\nSomthing wrong....\n";
                            cout << "Please re-enter....\n";
                            goto backs2;
                        }
                    conts2:
                        marksj1 = p[create_class].up_marksj2[ch1 - 1][1];
                        if (marksj1 == 0)
                        {
                            cout << "\n\nNo record found......\n";
                            getch();
                            goto entry_exam_marks;
                        }
                        system("cls");
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl
                             << endl;
                        cout << "Roll no.\tName\t\t   ";
                        for (i = 0; i < marksj1; i++)
                        {
                            date = p[create_class].marks1[ch1 - 1].store_exam_date[i][0];
                            month = p[create_class].marks1[ch1 - 1].store_exam_date[i][1];
                            year = p[create_class].marks1[ch1 - 1].store_exam_date[i][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }
                        cout << endl;
                        for (i = 0; i < marksj1; i++)
                        {
                            if (i == 0)
                            {
                                cout << "               \t    \t\t  F.M = " << p[create_class].marks1[ch1 - 1].stnom2[i];
                            }
                            else
                            {
                                cout << "  F.M = " << p[create_class].marks1[ch1 - 1].stnom2[i];
                            }
                        }

                        cout << endl;
                        x = update_i[create_class][1];

                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            for (j = 0; j < marksj1; j++)
                            {
                                cout << "    " << p[create_class].marks1[ch1 - 1].store_marks2[i][j] << "     ";
                            }
                            cout << endl;
                        }
                    }
                    getch();
                    goto entry_exam_marks;
                }
                case 3:
                {
                    
                backs3:
                    system("cls");
                    cout << "Class : " << create_class;
                    tsub = store_tsub[create_class][1];
                    if (tsub == 0)
                    {
                        cout << "\n\nNo record found......\n";
                        getch();
                        goto entry_exam_marks;
                    }
                    else
                    {
                        cout << "\n\n";
                        for (i = 0; i < tsub; i++)
                        {
                            cout << "Sub " << i + 1 << " : " << p[create_class].subject[i] << endl;
                        }
                        cout << "\n Choose subject : ";
                        cin >> ch1;
                        if (ch1 > 0 && ch1 <= tsub)
                        {
                            goto conti3;
                        }
                        else
                        {
                            cout << "\n\nSomthing wrong....\n";
                            cout << "Please re-enter....\n";
                            goto backs3;
                        }
                    conti3:
                        marksj1 = p[create_class].up_marksj2[ch1 - 1][1];
                        if (marksj1 == 0)
                        {
                            cout << "\n\nNo record found......\n";
                            getch();
                            goto entry_exam_marks;
                        }
                    backs01:
                        system("cls");
                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl
                             << endl;
                        cout << "Roll no.\tName\t\t   ";
                        for (i = 0; i < marksj1; i++)
                        {
                            date = p[create_class].marks1[ch1 - 1].store_exam_date[i][0];
                            month = p[create_class].marks1[ch1 - 1].store_exam_date[i][1];
                            year = p[create_class].marks1[ch1 - 1].store_exam_date[i][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }
                        cout << endl;
                        for (i = 0; i < marksj1; i++)
                        {
                            if (i == 0)
                            {
                                cout << "               \t    \t\t   F.M = " << p[create_class].marks1[ch1 - 1].stnom1[i];
                            }
                            else
                            {
                                cout << "  F.M = " << p[create_class].marks1[ch1 - 1].stnom2[i];
                            }
                        }
                        cout << endl;
                        x = update_i[create_class][1];

                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            for (j = 0; j < marksj1; j++)
                            {
                                cout << "    " << p[create_class].marks1[ch1 - 1].store_marks2[i][j] << "     ";
                            }
                            cout << endl;
                        }
                        cout << endl;
                        cout << "Enter date : ";
                        cin >> date;
                        cout << "     month : ";
                        cin >> month;
                        cout << "      year : ";
                        cin >> year;
                        inc = 0;
                        for (i = 0; i < marksj1; i++)
                        {
                            if (date == p[create_class].marks1[ch1 - 1].store_exam_date[i][0] && month == p[create_class].marks1[ch1 - 1].store_exam_date[i][1] && year == p[create_class].marks1[ch1 - 1].store_exam_date[i][2])
                            {
                                location1[inc] = i;
                                inc++;
                            }
                        }
                        if (inc == 0)
                        {
                            cout << "\n\nSomthing wrong.........\n";
                            cout << "Please try again...........\n";
                            getch();
                            goto backs01;
                        }
                        if (inc == 1)
                        {
                            j = location1[0];
                            goto mid1;
                        }
                    backs02:
                        system("cls");
                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl
                             << endl;
                        cout << "Roll no.\tName\t\t   ";
                        for (i = 0; i < inc; i++)
                        {
                            j = location1[i];
                            date = p[create_class].marks1[ch1 - 1].store_exam_date[j][0];
                            month = p[create_class].marks1[ch1 - 1].store_exam_date[j][1];
                            year = p[create_class].marks1[ch1 - 1].store_exam_date[j][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }
                        cout << endl;
                        for (i = 0; i < inc; i++)
                        {
                            j = location1[i];
                            if (i == 0)
                            {
                                cout << "               \t    \t\t   F.M = " << p[create_class].marks1[ch1 - 1].stnom2[j];
                            }
                            else
                            {
                                cout << "   F.M = " << p[create_class].marks1[ch1 - 1].stnom2[j];
                            }
                        }
                        cout << endl;
                        x = update_i[create_class][1];

                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            for (j = 0; j < inc; j++)
                            {
                                q1 = location1[j];
                                cout << "    " << p[create_class].marks1[ch1 - 1].store_marks2[i][q1] << "     ";
                            }
                            cout << endl;
                        }
                        cout << endl;
                        cout << "Choose any one : ";
                        cin >> q1;
                        if (q1 <= 0)
                        {
                            cout << "\n\nSomthing wrong.........\n";
                            cout << "Please try again...........\n";
                            getch();
                            goto backs02;
                        }
                        if (q1 > inc)
                        {
                            cout << "\n\nSomthing wrong.........\n";
                            cout << "Please try again...........\n";
                            getch();
                            goto backs02;
                        }

                        j = location1[q1 - 1];
                    mid1:
                        system("cls");
                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl
                             << endl;
                        cout << "Roll no.\tName\t\t   ";

                        date = p[create_class].marks1[ch1 - 1].store_exam_date[j][0];
                        month = p[create_class].marks1[ch1 - 1].store_exam_date[j][1];
                        year = p[create_class].marks1[ch1 - 1].store_exam_date[j][2];
                        cout << date << "/" << month << "/" << year << "  " << endl;
                        cout << "               \t    \t\t   F.M = " << p[create_class].marks1[ch1 - 1].stnom2[j];
                        cout << endl;
                        x = update_i[create_class][1];

                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            cout << "    " << p[create_class].marks1[ch1 - 1].store_marks2[i][j] << "     ";
                            cout << endl;
                        }
                    }
                    cout << endl;
                    cout << "Re-enter marks :-" << endl
                         << endl;
                    cout << "Enter full marks : ";
                    cin >> p[create_class].marks1[ch1 - 1].stnom2[j];
                    cout << endl;
                    for (i = 0; i < x; i++)
                    {
                    e_marks2:
                        cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                        cin >> enterno1;
                        if (enterno1 <= p[create_class].marks1[ch1 - 1].stnom2[j])
                        {
                            p[create_class].marks1[ch1 - 1].store_marks2[i][j] = enterno1;
                        }
                        else
                        {
                            cout << "\nEnter no. is wrong because this no. is greater then full marks,"
                                 << "\nso, please re-enter the marks.\n\n";
                            goto e_marks2;
                        }
                    }
                    cout << "\n\nRecord will be updated............";
                    getch();
                    goto entry_exam_marks;
                }
                case 4:
                {
                    
                backs4:
                    system("cls");
                    cout << "Class : " << create_class;
                    tsub = store_tsub[create_class][1];
                    if (tsub == 0)
                    {
                        cout << "\n\nNo record found......\n";
                        getch();
                        goto entry_exam_marks;
                    }
                    else
                    {
                        cout << "\n\n";
                        for (i = 0; i < tsub; i++)
                        {
                            cout << "Sub " << i + 1 << " : " << p[create_class].subject[i] << endl;
                        }
                        cout << "\n Choose subject : ";
                        cin >> ch1;
                        if (ch1 > 0 && ch1 <= tsub)
                        {
                            goto conti4;
                        }
                        else
                        {
                            cout << "\n\nSomthing wrong....\n";
                            cout << "Please re-enter....\n";
                            goto backs4;
                        }
                    conti4:
                        marksj1 = p[create_class].up_marksj2[ch1 - 1][1];
                        if (marksj1 == 0)
                        {
                            cout << "\n\nNo record found......\n";
                            getch();
                            goto entry_exam_marks;
                        }
                    backs05:
                        system("cls");
                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl
                             << endl;
                        cout << "Roll no.\tName\t\t   ";
                        for (i = 0; i < marksj1; i++)
                        {
                            date = p[create_class].marks1[ch1 - 1].store_exam_date[i][0];
                            month = p[create_class].marks1[ch1 - 1].store_exam_date[i][1];
                            year = p[create_class].marks1[ch1 - 1].store_exam_date[i][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }
                        cout << endl;
                        for (i = 0; i < marksj1; i++)
                        {
                            if (i == 0)
                            {
                                cout << "               \t    \t\t   F.M = " << p[create_class].marks1[ch1 - 1].stnom2[i];
                            }
                            else
                            {
                                cout << "  F.M = " << p[create_class].marks1[ch1 - 1].stnom2[i];
                            }
                        }
                        cout << endl;
                        x = update_i[create_class][1];

                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            for (j = 0; j < marksj1; j++)
                            {
                                cout << "    " << p[create_class].marks1[ch1 - 1].store_marks2[i][j] << "     ";
                            }
                            cout << endl;
                        }
                        cout << endl;
                        cout << "Enter date : ";
                        cin >> date;
                        cout << "     month : ";
                        cin >> month;
                        cout << "      year : ";
                        cin >> year;
                        inc = 0;
                        for (i = 0; i < marksj1; i++)
                        {
                            if (date == p[create_class].marks1[ch1 - 1].store_exam_date[i][0] && month == p[create_class].marks1[ch1 - 1].store_exam_date[i][1] && year == p[create_class].marks1[ch1 - 1].store_exam_date[i][2])
                            {
                                location1[inc] = i;
                                inc++;
                            }
                        }
                        if (inc == 0)
                        {
                            cout << "\n\nSomthing wrong.........\n";
                            cout << "Please try again...........\n";
                            getch();
                            goto backs05;
                        }
                        if (inc == 1)
                        {
                            j = location1[0];
                            goto mid2;
                        }
                    backs03:
                        system("cls");
                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl
                             << endl;
                        cout << "Roll no.\tName\t\t   ";
                        for (i = 0; i < inc; i++)
                        {
                            j = location1[i];
                            date = p[create_class].marks1[ch1 - 1].store_exam_date[j][0];
                            month = p[create_class].marks1[ch1 - 1].store_exam_date[j][1];
                            year = p[create_class].marks1[ch1 - 1].store_exam_date[j][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }
                        cout << endl;
                        for (i = 0; i < inc; i++)
                        {
                            j = location1[i];
                            if (i == 0)
                            {
                                cout << "               \t    \t\t   F.M = " << p[create_class].marks1[ch1 - 1].stnom2[j];
                            }
                            else
                            {
                                cout << "   F.M = " << p[create_class].marks1[ch1 - 1].stnom2[j];
                            }
                        }
                        cout << endl;
                        x = update_i[create_class][1];

                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            for (j = 0; j < inc; j++)
                            {
                                q1 = location1[j];
                                cout << "    " << p[create_class].marks1[ch1 - 1].store_marks2[i][q1] << "     ";
                            }
                            cout << endl;
                        }
                        cout << endl;
                        cout << "Choose any one : ";
                        cin >> q1;
                        if (q1 <= 0)
                        {
                            cout << "\n\nSomthing wrong.........\n";
                            cout << "Please try again...........\n";
                            getch();
                            goto backs03;
                        }
                        if (q1 > inc)
                        {
                            cout << "\n\nSomthing wrong.........\n";
                            cout << "Please try again...........\n";
                            getch();
                            goto backs03;
                        }
                        j = location1[q1 - 1];
                    mid2:
                        system("cls");
                        cout << "Class   : " << create_class << endl;
                        cout << "Subject : " << p[create_class].subject[ch1 - 1] << endl
                             << endl;
                        cout << "Roll no.\tName\t\t   ";

                        date = p[create_class].marks1[ch1 - 1].store_exam_date[j][0];
                        month = p[create_class].marks1[ch1 - 1].store_exam_date[j][1];
                        year = p[create_class].marks1[ch1 - 1].store_exam_date[j][2];
                        cout << date << "/" << month << "/" << year << "  " << endl;
                        cout << "               \t    \t\t   F.M = " << p[create_class].marks1[ch1 - 1].stnom2[j];
                        cout << endl;
                        x = update_i[create_class][1];

                        for (i = 0; i < x; i++)
                        {
                            cout << "  " << p[create_class].roll_no[i] << ".\t\t" << p[create_class].name[i] << "\t\t: ";
                            cout << "    " << p[create_class].marks1[ch1 - 1].store_marks2[i][j] << "     ";
                            cout << endl;
                        }
                    }
                    cout << endl;
                    marksj1 = p[create_class].up_marksj2[ch1 - 1][1];
                reint01:
                    cout << "Are you sure you want to delete this records (Y/N) : ";
                    cin >> cha1;
                    if (cha1 == 'Y' || cha1 == 'y')
                    {
                        for (i = j; i < marksj1; i++)
                        {
                            p[create_class].marks1[ch1 - 1].store_exam_date[i][0] = p[create_class].marks1[ch1 - 1].store_exam_date[i + 1][0];
                            p[create_class].marks1[ch1 - 1].store_exam_date[i][1] = p[create_class].marks1[ch1 - 1].store_exam_date[i + 1][1];
                            p[create_class].marks1[ch1 - 1].store_exam_date[i][2] = p[create_class].marks1[ch1 - 1].store_exam_date[i + 1][2];
                            p[create_class].marks1[ch1 - 1].stnom2[i] = p[create_class].marks1[ch1 - 1].stnom2[i + 1];
                        }
                        for (i = 0; i < x; i++)
                        {
                            for (j1 = j; j1 < marksj1; j1++)
                            {
                                p[create_class].marks1[ch1 - 1].store_marks2[i][j1] = p[create_class].marks1[ch1 - 1].store_marks2[i][j1 + 1];
                            }
                        }
                        p[create_class].up_marksj2[ch1 - 1][1] = marksj1 - 1;
                        cout << "\nRecord will be deleted............\n";
                    }

                    else if (cha1 == 'N' || cha1 == 'n')
                    {
                        cout << "\nOk.........\n";
                    }
                    else
                    {
                        cout << "\nPlease enter correct option ......... ";
                        goto reint01;
                    }

                    getch();
                    goto entry_marks;
                }
                case 5:
                {
                    goto main_menu;
                }
                }
            }
        }

        else if (ch1 == 6)
        {
            break;
        }
    } while (ch1 != 6);
}
//----------------------------------------------------------------------------------------------------------
// ************************** COLLAGE **********************************************************************
//----------------------------------------------------------------------------------------------------------

int ch11, no11, class11, date11, create_class11, loc11 = -1;
int x11, k11, ch_subject11, present11 = 0, absent11 = 0, subject11, attend11, reprint11 = -1, i11, j11, y11, roll11;
char null[5], cha11;
struct subject
{
    int roll_no1[50];
    char name1[50][50];
    char phone_no1[50][15];
    char address1[50][50];
    char attend1[50][50];
    int store_date1[100][3];
    int update_i11[1][1];
    int date_i11[1][1];
    int up_attend11[1][1];
};
struct collage_record
{
    struct subject sub[5];
};
void collage()
{
    struct collage_record cr[5];
    system("cls");
    do
    {
        system("cls");
    main_menu11:
        cout << "\t Main Menu\n\n";
        cout << "1. See all records\n";
        cout << "2. Entry/Edit menu\n";
        cout << "3. Entry/Edit attendance\n";
        cout << "4. Exit\n\n";
        cout << "Please enter your chice : ";
        cin >> ch11;
        if (ch11 == 1)
        {
            /* code */
        }
        else if (ch11 == 2)
        {
            do
            {
            class_11:
                system("cls");
                cout << "1. Create student records " << endl;
                cout << "2. Display all student records" << endl;
                cout << "3. Search student record" << endl;
                cout << "4. Modify student records" << endl;
                cout << "5. Delete student records" << endl;
                cout << "6. Back" << endl
                     << endl;
                cout << "Please enter your choice : ";
                cin >> ch11;
                switch (ch11)
                {
                case 1:
                {
                enter_class:
                    system("cls");
                    cout << "\t\t Create Student Record" << endl
                         << endl;
                    cout << "Enter no of student : ";
                    cin >> no11;
                    cout << "Which class : ";
                    cin >> class11;
                    if (class11 >= 11 && class11 <= 12)
                    {
                        if (class11 == 11)
                        {
                            create_class11 = 0;
                        }
                        else if (class11 == 12)
                        {
                            create_class11 = 1;
                        }
                        cout << "\n";
                        cout << "Which Subject" << endl;
                        cout << "1. Science" << endl;
                        cout << "2. Commerce" << endl;
                        cout << "3. Arts" << endl
                             << endl;
                    re_subj:
                        cout << "Choose subject : ";
                        cin >> ch_subject11;
                        if (ch_subject11 == 1)
                        {
                            subject11 = 0;
                        }
                        else if (ch_subject11 == 2)
                        {
                            subject11 = 1;
                        }
                        else if (ch_subject11 == 3)
                        {
                            subject11 = 2;
                        }
                        else
                        {
                            cout << "Please enter correct option....\n\n";
                            goto re_subj;
                        }

                        system("cls");

                        cout << "Class :- " << class11 << endl;
                        cout << "Subject :- ";
                        if (ch_subject11 == 1)
                        {
                            cout << "Science";
                        }
                        else if (ch_subject11 == 2)
                        {
                            cout << "Commerce";
                        }
                        else if (ch_subject11 == 3)
                        {
                            cout << "Arts";
                        }
                        cout << "\n\n";
                        x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                        k11 = x11 + no11;
                        for (i11 = x11; i11 < k11; i11++)
                        {
                        re_roll:
                            cout << "Enter roll no : ";
                            cin >> cr[create_class11].sub[subject11].roll_no1[i11];
                            y11 = cr[create_class11].sub[subject11].update_i11[1][1];
                            for (j11 = 0; j11 < y11; j11++)
                            {
                                if (cr[create_class11].sub[subject11].roll_no1[i11] == cr[create_class11].sub[subject11].roll_no1[j11])
                                {
                                    cout << "\nthis roll no. is already exist in record \n"
                                         << "if you change the record please go to modify \n"
                                         << "student record\n"
                                         << endl;
                                    getch();
                                    goto re_roll;
                                }
                            }
                            gets(null);
                            cout << "Enter your name : ";
                            gets(cr[create_class11].sub[subject11].name1[i11]);
                            cout << "Enter your phone no : ";
                            gets(cr[create_class11].sub[subject11].phone_no1[i11]);
                            cout << "Enter your address : ";
                            gets(cr[create_class11].sub[subject11].address1[i11]);

                            cout << "\n\n";
                            cr[create_class11].sub[subject11].update_i11[1][1] = i11 + 1;
                        }
                        cout << "Record will be saved...............";
                    }
                    else
                    {
                        cout << "Wrong enter.....\n";
                        cout << " You create 11 and 12 class only .........";
                        getch();
                        goto enter_class;
                    }
                    getch();
                    goto class_11;
                }
                case 2:
                {
                    system("cls");
                    cout << "Which class : ";
                    cin >> class11;
                    if (class11 >= 11 && class11 <= 12)
                    {
                        if (class11 == 11)
                        {
                            create_class11 = 0;
                        }
                        else if (class11 == 12)
                        {
                            create_class11 = 1;
                        }
                        cout << "\n";
                        cout << "Which Subject" << endl;
                        cout << "1. Science" << endl;
                        cout << "2. Commerce" << endl;
                        cout << "3. Arts" << endl
                             << endl;
                    re_subj1:
                        cout << "Choose subject : ";
                        cin >> ch_subject11;
                        if (ch_subject11 == 1)
                        {
                            subject11 = 0;
                        }
                        else if (ch_subject11 == 2)
                        {
                            subject11 = 1;
                        }
                        else if (ch_subject11 == 3)
                        {
                            subject11 = 2;
                        }
                        else
                        {
                            cout << "Please enter correct option....\n\n";
                            goto re_subj1;
                        }
                        system("cls");

                        cout << "Class :- " << class11 << endl;
                        cout << "Subject :- ";
                        if (ch_subject11 == 1)
                        {
                            cout << "Science";
                        }
                        else if (ch_subject11 == 2)
                        {
                            cout << "Commerce";
                        }
                        else if (ch_subject11 == 3)
                        {
                            cout << "Arts";
                        }
                        cout << "\n\n";
                        x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                        if (x11 == 0)
                        {
                            cout << "No any record found.........";
                            getch();
                            goto class_11;
                        }
                        for (i11 = 0; i11 < x11; i11++)
                        {
                            cout << "Student roll no  : " << cr[create_class11].sub[subject11].roll_no1[i11] << endl;
                            cout << "Student name     : " << cr[create_class11].sub[subject11].name1[i11] << endl;
                            cout << "Student phone no : " << cr[create_class11].sub[subject11].phone_no1[i11] << endl;
                            cout << "Student address  : " << cr[create_class11].sub[subject11].address1[i11] << endl;
                            cout << "\n";
                        }
                    }
                    else
                    {
                        cout << "No record found........";
                    }
                    getch();
                    goto class_11;
                }
                case 3:
                {
                    system("cls");
                    cout << "Which class : ";
                    cin >> class11;
                    if (class11 >= 11 && class11 <= 12)
                    {
                        if (class11 == 11)
                        {
                            create_class11 = 0;
                        }
                        else if (class11 == 12)
                        {
                            create_class11 = 1;
                        }
                        cout << "\n";
                        cout << "Which Subject" << endl;
                        cout << "1. Science" << endl;
                        cout << "2. Commerce" << endl;
                        cout << "3. Arts" << endl
                             << endl;
                    re_subj2:
                        cout << "Choose subject : ";
                        cin >> ch_subject11;
                        if (ch_subject11 == 1)
                        {
                            subject11 = 0;
                        }
                        else if (ch_subject11 == 2)
                        {
                            subject11 = 1;
                        }
                        else if (ch_subject11 == 3)
                        {
                            subject11 = 2;
                        }
                        else
                        {
                            cout << "Please enter correct option....\n\n";
                            goto re_subj2;
                        }
                        cout << "Enter roll no : ";
                        cin >> roll11;
                        system("cls");

                        cout << "Class :- " << class11 << endl;
                        cout << "Subject :- ";
                        if (ch_subject11 == 1)
                        {
                            cout << "Science";
                        }
                        else if (ch_subject11 == 2)
                        {
                            cout << "Commerce";
                        }
                        else if (ch_subject11 == 3)
                        {
                            cout << "Arts";
                        }
                        cout << "\n\n";
                        x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                        if (x11 == 0)
                        {
                            cout << "No any record found.........";
                            getch();
                            goto class_11;
                        }

                        for (i11 = 0; i11 < x11; i11++)
                        {
                            if (roll11 == cr[create_class11].sub[subject11].roll_no1[i11])
                            {
                                loc11 = i11;
                            }
                        }
                        if (loc11 >= 0)
                        {
                            cout << "Student roll no  : " << cr[create_class11].sub[subject11].roll_no1[loc11] << endl;
                            cout << "Student name     : " << cr[create_class11].sub[subject11].name1[loc11] << endl;
                            cout << "Student phone no : " << cr[create_class11].sub[subject11].phone_no1[loc11] << endl;
                            cout << "Student address  : " << cr[create_class11].sub[subject11].address1[loc11] << endl;
                            cout << "\n";
                        }
                        else
                        {
                            cout << "No any record found..........";
                        }
                    }
                    else
                    {
                        cout << "No record found........";
                    }
                    loc11 = -1;
                    getch();
                    goto class_11;
                }
                case 4:
                {
                    system("cls");
                    cout << "Which class : ";
                    cin >> class11;
                    if (class11 >= 11 && class11 <= 12)
                    {
                        if (class11 == 11)
                        {
                            create_class11 = 0;
                        }
                        else if (class11 == 12)
                        {
                            create_class11 = 1;
                        }
                        cout << "\n";
                        cout << "Which Subject" << endl;
                        cout << "1. Science" << endl;
                        cout << "2. Commerce" << endl;
                        cout << "3. Arts" << endl
                             << endl;
                    re_subj3:
                        cout << "Choose subject : ";
                        cin >> ch_subject11;
                        if (ch_subject11 == 1)
                        {
                            subject11 = 0;
                        }
                        else if (ch_subject11 == 2)
                        {
                            subject11 = 1;
                        }
                        else if (ch_subject11 == 3)
                        {
                            subject11 = 2;
                        }
                        else
                        {
                            cout << "Please enter correct option....\n\n";
                            goto re_subj3;
                        }
                        cout << "Enter roll no : ";
                        cin >> roll11;
                        system("cls");

                        cout << "Class :- " << class11 << endl;
                        cout << "Subject :- ";
                        if (ch_subject11 == 1)
                        {
                            cout << "Science";
                        }
                        else if (ch_subject11 == 2)
                        {
                            cout << "Commerce";
                        }
                        else if (ch_subject11 == 3)
                        {
                            cout << "Arts";
                        }
                        cout << "\n\n";
                        x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                        if (x11 == 0)
                        {
                            cout << "No any record found.........";
                            getch();
                            goto class_11;
                        }

                        for (i11 = 0; i11 < x11; i11++)
                        {
                            if (roll11 == cr[create_class11].sub[subject11].roll_no1[i11])
                            {
                                loc11 = i11;
                            }
                        }
                        if (loc11 >= 0)
                        {
                            cout << "Student roll no  : " << cr[create_class11].sub[subject11].roll_no1[loc11] << endl;
                            cout << "Student name     : " << cr[create_class11].sub[subject11].name1[loc11] << endl;
                            cout << "Student phone no : " << cr[create_class11].sub[subject11].phone_no1[loc11] << endl;
                            cout << "Student address  : " << cr[create_class11].sub[subject11].address1[loc11] << endl;
                            cout << "\n\n";

                        re_roll11:
                            cout << "Enter roll no       : ";
                            cin >> roll11;
                            if (roll11 == cr[create_class11].sub[subject11].roll_no1[loc11])
                            {
                                goto name11;
                            }

                            y11 = cr[create_class11].sub[subject11].update_i11[1][1];
                            for (j11 = 0; j11 < y11; j11++)
                            {
                                if (roll11 == cr[create_class11].sub[subject11].roll_no1[j11])
                                {
                                    cout << "\nthis roll no. is already exist in record \n"
                                         << "if you change the record please go to modify \n"
                                         << "student record\n"
                                         << endl;
                                    getch();
                                    goto re_roll11;
                                }
                            }
                        name11:
                            gets(null);
                            cout << "Enter your name     : ";
                            gets(cr[create_class11].sub[subject11].name1[loc11]);
                            cout << "Enter your phone no : ";
                            gets(cr[create_class11].sub[subject11].phone_no1[loc11]);
                            cout << "Enter your address  : ";
                            gets(cr[create_class11].sub[subject11].address1[loc11]);

                            cout << "\n\n";
                            cout << "Record will be saved...............";
                        }

                        else
                        {
                            cout << "No any record found..........";
                        }
                    }
                    else
                    {
                        cout << "No record found........";
                    }
                    loc11 = -1;
                    getch();
                    goto class_11;
                }
                case 5:
                {
                    system("cls");
                    cout << "Which class : ";
                    cin >> class11;
                    if (class11 >= 11 && class11 <= 12)
                    {
                        if (class11 == 11)
                        {
                            create_class11 = 0;
                        }
                        else if (class11 == 12)
                        {
                            create_class11 = 1;
                        }
                        cout << "\n";
                        cout << "Which Subject" << endl;
                        cout << "1. Science" << endl;
                        cout << "2. Commerce" << endl;
                        cout << "3. Arts" << endl
                             << endl;
                    re_subj4:
                        cout << "Choose subject : ";
                        cin >> ch_subject11;
                        if (ch_subject11 == 1)
                        {
                            subject11 = 0;
                        }
                        else if (ch_subject11 == 2)
                        {
                            subject11 = 1;
                        }
                        else if (ch_subject11 == 3)
                        {
                            subject11 = 2;
                        }
                        else
                        {
                            cout << "Please enter correct option....\n\n";
                            goto re_subj4;
                        }
                        cout << "Enter roll no : ";
                        cin >> roll11;
                        system("cls");

                        cout << "Class :- " << class11 << endl;
                        cout << "Subject :- ";
                        if (ch_subject11 == 1)
                        {
                            cout << "Science";
                        }
                        else if (ch_subject11 == 2)
                        {
                            cout << "Commerce";
                        }
                        else if (ch_subject11 == 3)
                        {
                            cout << "Arts";
                        }
                        cout << "\n\n";
                        x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                        if (x11 == 0)
                        {
                            cout << "No any record found.........";
                            getch();
                            goto class_11;
                        }

                        for (i11 = 0; i11 < x11; i11++)
                        {
                            if (roll11 == cr[create_class11].sub[subject11].roll_no1[i11])
                            {
                                loc11 = i11;
                            }
                        }
                        if (loc11 >= 0)
                        {
                            cout << "Student roll no  : " << cr[create_class11].sub[subject11].roll_no1[loc11] << endl;
                            cout << "Student name     : " << cr[create_class11].sub[subject11].name1[loc11] << endl;
                            cout << "Student phone no : " << cr[create_class11].sub[subject11].phone_no1[loc11] << endl;
                            cout << "Student address  : " << cr[create_class11].sub[subject11].address1[loc11] << endl;
                            cout << "\n";
                        option11:
                            cout << "\nAre you sure you want to delete this record (Y/N) : ";
                            cin >> cha11;
                            if (cha11 == 'y' || cha11 == 'Y')
                            {
                                x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                                for (i11 = loc11; i11 < x11; i11++)
                                {
                                    cr[create_class11].sub[subject11].roll_no1[i11] = cr[create_class11].sub[subject11].roll_no1[i11 + 1];
                                    strcpy(cr[create_class11].sub[subject11].name1[i11], cr[create_class11].sub[subject11].name1[i11 + 1]);
                                    strcpy(cr[create_class11].sub[subject11].phone_no1[i11], cr[create_class11].sub[subject11].phone_no1[i11 + 1]);
                                    strcpy(cr[create_class11].sub[subject11].address1[i11], cr[create_class11].sub[subject11].address1[i11 + 1]);
                                }
                                cout << "\n\n";
                                cr[create_class11].sub[subject11].update_i11[1][1] = i11 - 1;
                                cout << "Record is delete.............\n";
                            }
                            else if (cha11 == 'n' || cha11 == 'N')
                            {
                                cout << "Ok..........\n";
                            }
                            else
                            {
                                cout << "\nWrong choice\n";
                                cout << "Please choose correct option";
                                goto option11;
                            }
                        }
                        else
                        {
                            cout << "No any record found..........";
                        }
                    }
                    else
                    {
                        cout << "No record found........";
                    }
                    loc11 = -1;
                    getch();
                    goto class_11;
                }

                default:
                {
                    cout << "\n\nEnter correct options.......";
                }
                }
            } while (ch11 != 6);
        }
        else if (ch11 == 3)
        {
            do
            {
            start_11:
                system("cls");
                cout << "1. Take attendance\n";
                cout << "2. Display all record\n";
                cout << "3. Search particular date record\n";
                cout << "4. Modify attendance records\n";
                cout << "5. Delete particular date record \n";
                cout << "6. Back\n\n";
                cout << "Please enter your choice : ";
                cin >> ch11;

                if (ch11 == 1)
                {
                    system("cls");
                    cout << "Which class : ";
                    cin >> class11;
                    if (class11 >= 11 && class11 <= 12)
                    {
                        if (class11 == 11)
                        {
                            create_class11 = 0;
                        }
                        else if (class11 == 12)
                        {
                            create_class11 = 1;
                        }
                        cout << "\n";
                        cout << "Which Subject" << endl;
                        cout << "1. Science" << endl;
                        cout << "2. Commerce" << endl;
                        cout << "3. Arts" << endl
                             << endl;
                    re_subj5:
                        cout << "Choose subject : ";
                        cin >> ch_subject11;
                        if (ch_subject11 == 1)
                        {
                            subject11 = 0;
                        }
                        else if (ch_subject11 == 2)
                        {
                            subject11 = 1;
                        }
                        else if (ch_subject11 == 3)
                        {
                            subject11 = 2;
                        }
                        else
                        {
                            cout << "Please enter correct option....\n\n";
                            goto re_subj5;
                        }
                        x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                        if (x11 == 0)
                        {
                            cout << "\nNo record found.......\n";
                            getch();
                            goto start_11;
                        }
                    in_date11:
                        system("cls");
                        cout << "class : " << class11 << endl;
                        cout << "subject : ";
                        if (ch_subject11 == 1)
                        {
                            cout << "Science";
                        }
                        else if (ch_subject11 == 2)
                        {
                            cout << "commerce";
                        }
                        else if (ch_subject11 == 3)
                        {
                            cout << "Arts";
                        }

                        cout << "\n\nDate : ";
                        cin >> date;
                        cout << "Month : ";
                        cin >> month;
                        cout << "Year : ";
                        cin >> year;
                        date11 = cr[create_class11].sub[subject11].date_i11[1][1];
                        for (i11 = 0; i11 <= date11; i11++)
                        {
                            if (date == cr[create_class11].sub[subject11].store_date1[i11][0] && month == cr[create_class11].sub[subject11].store_date1[i11][1] && year == cr[create_class11].sub[subject11].store_date1[i11][2])
                            {
                                cout << "\n\nyou can already use this date ";
                                cout << "\nPlease enter correct date\n";
                                getch();
                                goto in_date11;
                            }
                        }
                        cr[create_class11].sub[subject11].store_date1[date11][0] = date;
                        cr[create_class11].sub[subject11].store_date1[date11][1] = month;
                        cr[create_class11].sub[subject11].store_date1[date11][2] = year;
                        cr[create_class11].sub[subject11].date_i11[1][1] = date11 + 1;

                        attend11 = cr[create_class11].sub[subject11].up_attend11[1][1];
                    repeat11:
                        system("cls");
                        for (i11 = 0; i11 < x11; i11++)
                        {
                            for (j11 = 0; j11 <= attend11; j11++)
                            {
                                if (j11 == 0)
                                {
                                    cout << cr[create_class11].sub[subject11].roll_no1[i11] << ". " << cr[create_class11].sub[subject11].name1[i11] << "\t\t: ";
                                }
                                if (reprint11 == i11 && j11 == attend11)
                                {
                                    goto skip11;
                                }
                                if (reprint11 >= 0 && reprint11 > i11 && j11 == attend11)
                                {
                                    goto below11;
                                }
                                if (j11 < attend11 && cr[create_class11].sub[subject11].attend1[i11][j11] == 'A' || cr[create_class11].sub[subject11].attend1[i11][j11] == 'P')
                                {
                                below11:
                                    cout << cr[create_class11].sub[subject11].attend1[i11][j11] << "  ";
                                }
                            }
                        skip11:
                            if (i11 < reprint11)
                            {
                                cout << endl;
                                continue;
                            }
                            reprint = -1;
                        reenter11:
                            cin >> cha11;
                            if (cha11 == 'P' || cha11 == 'p')
                            {
                                cr[create_class11].sub[subject11].attend1[i11][attend11] = 'P';
                            }
                            else if (cha11 == 'A' || cha11 == 'a')
                            {
                                cr[create_class11].sub[subject11].attend1[i11][attend11] = 'A';
                            }
                            else if (cha11 == '`')
                            {
                                reprint11 = i - 1;
                                goto repeat11;
                            }
                            else
                            {
                                cout << "Enter only absent for (A) or present for (P)";
                                getch();
                                goto reenter11;
                            }
                        }
                        cr[create_class11].sub[subject11].up_attend11[1][1] = attend11 + 1;
                        cout << "\n\nRecord is saved.............\n";
                    }
                    else
                    {
                        cout << "Wrong enter........";
                    }
                    getch();
                    goto start_11;
                }
                else if (ch11 == 2)
                {
                    system("cls");
                    cout << "Which class : ";
                    cin >> class11;
                    if (class11 >= 11 && class11 <= 12)
                    {
                        if (class11 == 11)
                        {
                            create_class11 = 0;
                        }
                        else if (class11 == 12)
                        {
                            create_class11 = 1;
                        }
                        cout << "\n";
                        cout << "Which Subject" << endl;
                        cout << "1. Science" << endl;
                        cout << "2. Commerce" << endl;
                        cout << "3. Arts" << endl
                             << endl;
                    re_subj7:
                        cout << "Choose subject : ";
                        cin >> ch_subject11;
                        if (ch_subject11 == 1)
                        {
                            subject11 = 0;
                        }
                        else if (ch_subject11 == 2)
                        {
                            subject11 = 1;
                        }
                        else if (ch_subject11 == 3)
                        {
                            subject11 = 2;
                        }
                        else
                        {
                            cout << "Please enter correct option....\n\n";
                            goto re_subj7;
                        }
                        x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                        if (x11 == 0)
                        {
                            cout << "\nNo record found.......\n";
                            getch();
                            goto start_11;
                        }

                        system("cls");
                        cout << "class : " << class11 << endl;
                        cout << "subject : ";
                        if (ch_subject11 == 1)
                        {
                            cout << "Science";
                        }
                        else if (ch_subject11 == 2)
                        {
                            cout << "commerce";
                        }
                        else if (ch_subject11 == 3)
                        {
                            cout << "Arts";
                        }
                        cout << endl
                             << endl;
                        date11 = cr[create_class11].sub[subject11].date_i11[1][1];
                        if (date11 == 0)
                        {
                            cout << endl
                                 << endl;
                            cout << "No record found..............";
                            getch();
                            goto start_11;
                        }
                        cout << "Roll no.\tName\t\t   ";
                        for (i11 = 0; i11 < date11; i11++)
                        {
                            date = cr[create_class11].sub[subject11].store_date1[i11][0];
                            month = cr[create_class11].sub[subject11].store_date1[i11][1];
                            year = cr[create_class11].sub[subject11].store_date1[i11][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }
                        cout << ":T-Days = " << date11;
                        cout << endl;
                        x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                        attend11 = cr[create_class11].sub[subject11].up_attend11[1][1];
                        for (i11 = 0; i11 < x11; i11++)
                        {
                            for (j11 = 0; j11 < attend11; j11++)
                            {
                                if (j11 == 0)
                                {
                                    cout << "  " << cr[create_class11].sub[subject11].roll_no1[i11] << ".\t\t" << cr[create_class11].sub[subject11].name1[i11] << "\t\t: ";

                                    if (cr[create_class11].sub[subject11].attend1[i11][j11] == 'P' || cr[create_class11].sub[subject11].attend1[i11][j11] == 'A')
                                    {
                                        cout << "    " << cr[create_class11].sub[subject11].attend1[i11][j11];
                                    }
                                    else
                                    {
                                        cout << "    "
                                             << "-";
                                    }
                                }
                                else
                                {
                                    if (cr[create_class11].sub[subject11].attend1[i11][j11] == 'P' || cr[create_class11].sub[subject11].attend1[i11][j11] == 'A')
                                    {
                                        cout << "         " << cr[create_class11].sub[subject11].attend1[i11][j11];
                                    }
                                    else
                                    {
                                        cout << "         "
                                             << "-";
                                    }
                                }
                                if (cr[create_class11].sub[subject11].attend1[i11][j11] == 'P')
                                {
                                    present11++;
                                }
                                else if (cr[create_class11].sub[subject11].attend1[i11][j11] == 'A')
                                {
                                    absent11++;
                                }
                            }
                            cout << "      : P = " << present11 << " / A = " << absent11;
                            cout << endl;
                            present11 = 0;
                            absent11 = 0;
                        }
                        cout << endl;
                        cout << "\t\t\t\t:   ";
                        for (i11 = 0; i11 < attend11; i11++)
                        {
                            for (j11 = 0; j11 < x11; j11++)
                            {
                                if (cr[create_class11].sub[subject11].attend1[j11][i11] == 'P')
                                {
                                    present11++;
                                }
                            }
                            cout << "P = " << present11 << "     ";
                            present11 = 0;
                        }
                        cout << endl;
                        cout << "\t\t\t\t:   ";
                        for (i11 = 0; i11 < attend11; i11++)
                        {
                            for (j11 = 0; j11 < x11; j11++)
                            {
                                if (cr[create_class11].sub[subject11].attend1[j11][i11] == 'A')
                                {
                                    absent11++;
                                }
                            }
                            cout << "A = " << absent11 << "     ";
                            absent11 = 0;
                        }
                    }
                    getch();
                    goto start_11;
                }
                else if (ch11 == 3)
                {
                    system("cls");
                    cout << "Which class : ";
                    cin >> class11;
                    if (class11 >= 11 && class11 <= 12)
                    {
                        if (class11 == 11)
                        {
                            create_class11 = 0;
                        }
                        else if (class11 == 12)
                        {
                            create_class11 = 1;
                        }
                        cout << "\n";
                        cout << "Which Subject" << endl;
                        cout << "1. Science" << endl;
                        cout << "2. Commerce" << endl;
                        cout << "3. Arts" << endl
                             << endl;
                    re_subj8:
                        cout << "Choose subject : ";
                        cin >> ch_subject11;
                        if (ch_subject11 == 1)
                        {
                            subject11 = 0;
                        }
                        else if (ch_subject11 == 2)
                        {
                            subject11 = 1;
                        }
                        else if (ch_subject11 == 3)
                        {
                            subject11 = 2;
                        }
                        else
                        {
                            cout << "Please enter correct option....\n\n";
                            goto re_subj8;
                        }
                        x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                        if (x11 == 0)
                        {
                            cout << "\nNo record found.......\n";
                            getch();
                            goto start_11;
                        }

                        system("cls");
                        cout << "class : " << class11 << endl;
                        cout << "subject : ";
                        if (ch_subject11 == 1)
                        {
                            cout << "Science";
                        }
                        else if (ch_subject11 == 2)
                        {
                            cout << "commerce";
                        }
                        else if (ch_subject11 == 3)
                        {
                            cout << "Arts";
                        }

                        cout << "\n\nDate : ";
                        cin >> date;
                        cout << "Month : ";
                        cin >> month;
                        cout << "Year : ";
                        cin >> year;
                        date11 = cr[create_class11].sub[subject11].date_i11[1][1];
                        for (i11 = 0; i11 <= date11; i11++)
                        {
                            if (date == cr[create_class11].sub[subject11].store_date1[i11][0] && month == cr[create_class11].sub[subject11].store_date1[i11][1] && year == cr[create_class11].sub[subject11].store_date1[i11][2])
                            {
                                loc11 = i11;
                            }
                        }
                        if (loc11 == -1)
                        {
                            cout << "\n\nNo record found..........";
                            getch();
                            goto start_11;
                        }
                        cout << endl;
                        x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                        cout << "Roll no.\tName\t\tAttend" << endl;
                        for (i11 = 0; i11 < x11; i11++)
                        {
                            cout << "  " << cr[create_class11].sub[subject11].roll_no1[i11] << ".\t\t" << cr[create_class11].sub[subject11].name1[i11] << "\t\t: ";
                            cout << cr[create_class11].sub[subject11].attend1[i11][loc11] << " ";
                            cout << endl;
                        }
                        loc11 = -1;
                    }
                    else
                    {
                        cout << "\n\nSomthing wrong........\n";
                    }
                    getch();
                    goto start_11;
                }
                else if (ch11 == 4)
                {
                    system("cls");
                    cout << "1. Change a particular date records " << endl;
                    cout << "2. Change a particular student records" << endl;
                    cout << "3. Back" << endl
                         << endl;
                    cout << "Enter your choice : ";
                    cin >> ch11;
                    system("cls");

                    if (ch11 == 1)
                    {
                        system("cls");
                        cout << "Which class : ";
                        cin >> class11;
                        if (class11 >= 11 && class11 <= 12)
                        {
                            if (class11 == 11)
                            {
                                create_class11 = 0;
                            }
                            else if (class11 == 12)
                            {
                                create_class11 = 1;
                            }
                            cout << "\n";
                            cout << "Which Subject" << endl;
                            cout << "1. Science" << endl;
                            cout << "2. Commerce" << endl;
                            cout << "3. Arts" << endl
                                 << endl;
                        re_subj9:
                            cout << "Choose subject : ";
                            cin >> ch_subject11;
                            if (ch_subject11 == 1)
                            {
                                subject11 = 0;
                            }
                            else if (ch_subject11 == 2)
                            {
                                subject11 = 1;
                            }
                            else if (ch_subject11 == 3)
                            {
                                subject11 = 2;
                            }
                            else
                            {
                                cout << "Please enter correct option....\n\n";
                                goto re_subj9;
                            }
                            x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                            if (x11 == 0)
                            {
                                cout << "\nNo record found.......\n";
                                getch();
                                goto start_11;
                            }

                            system("cls");
                            cout << "class : " << class11 << endl;
                            cout << "subject : ";
                            if (ch_subject11 == 1)
                            {
                                cout << "Science";
                            }
                            else if (ch_subject11 == 2)
                            {
                                cout << "commerce";
                            }
                            else if (ch_subject11 == 3)
                            {
                                cout << "Arts";
                            }
                            cout << endl
                                 << endl;
                            date11 = cr[create_class11].sub[subject11].date_i11[1][1];
                            if (date11 == 0)
                            {
                                cout << endl
                                     << endl;
                                cout << "No record found..............";
                                getch();
                                goto start_11;
                            }
                            cout << "Roll no.\tName\t\t   ";
                            for (i11 = 0; i11 < date11; i11++)
                            {
                                date = cr[create_class11].sub[subject11].store_date1[i11][0];
                                month = cr[create_class11].sub[subject11].store_date1[i11][1];
                                year = cr[create_class11].sub[subject11].store_date1[i11][2];
                                cout << date << "/" << month << "/" << year << "  ";
                            }

                            cout << endl;
                            x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                            attend11 = cr[create_class11].sub[subject11].up_attend11[1][1];
                            for (i11 = 0; i11 < x11; i11++)
                            {
                                for (j11 = 0; j11 < attend11; j11++)
                                {
                                    if (j11 == 0)
                                    {
                                        cout << "  " << cr[create_class11].sub[subject11].roll_no1[i11] << ".\t\t" << cr[create_class11].sub[subject11].name1[i11] << "\t\t: ";

                                        if (cr[create_class11].sub[subject11].attend1[i11][j11] == 'P' || cr[create_class11].sub[subject11].attend1[i11][j11] == 'A')
                                        {
                                            cout << "    " << cr[create_class11].sub[subject11].attend1[i11][j11];
                                        }
                                        else
                                        {
                                            cout << "    "
                                                 << "-";
                                        }
                                    }
                                    else
                                    {
                                        if (cr[create_class11].sub[subject11].attend1[i11][j11] == 'P' || cr[create_class11].sub[subject11].attend1[i11][j11] == 'A')
                                        {
                                            cout << "         " << cr[create_class11].sub[subject11].attend1[i11][j11];
                                        }
                                        else
                                        {
                                            cout << "         "
                                                 << "-";
                                        }
                                    }
                                }
                                cout << endl;
                            }
                            cout << "\n\nDate : ";
                            cin >> date;
                            cout << "Month : ";
                            cin >> month;
                            cout << "Year : ";
                            cin >> year;
                            date11 = cr[create_class11].sub[subject11].date_i11[1][1];
                            for (i11 = 0; i11 <= date11; i11++)
                            {
                                if (date == cr[create_class11].sub[subject11].store_date1[i11][0] && month == cr[create_class11].sub[subject11].store_date1[i11][1] && year == cr[create_class11].sub[subject11].store_date1[i11][2])
                                {
                                    loc11 = i11;
                                }
                            }
                            if (loc11 == -1)
                            {
                                cout << "\n\nNo record found..........";
                                getch();
                                goto start_11;
                            }
                            system("cls");
                            cout << "class : " << class11 << endl;
                            cout << "subject : ";
                            if (ch_subject11 == 1)
                            {
                                cout << "Science";
                            }
                            else if (ch_subject11 == 2)
                            {
                                cout << "commerce";
                            }
                            else if (ch_subject11 == 3)
                            {
                                cout << "Arts";
                            }
                            cout << "\n\nDate  : " << date;
                            cout << "/" << month;
                            cout << "/" << year;
                            cout << endl
                                 << endl;
                            x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                            cout << "Roll no.\tName\t\tAttend" << endl;
                            for (i11 = 0; i11 < x11; i11++)
                            {
                                cout << "  " << cr[create_class11].sub[subject11].roll_no1[i11] << ".\t\t" << cr[create_class11].sub[subject11].name1[i11] << "\t\t: ";
                                cout << cr[create_class11].sub[subject11].attend1[i11][loc11] << " ";
                                cout << endl;
                            }
                            cout << endl
                                 << endl;
                            for (i11 = 0; i11 < x11; i11++)
                            {
                                cout << "  " << cr[create_class11].sub[subject11].roll_no1[i11] << ".\t\t" << cr[create_class11].sub[subject11].name1[i11] << "\t\t: ";
                            reenter110:
                                cin >> cha11;
                                if (cha11 == 'P' || cha11 == 'p')
                                {
                                    cr[create_class11].sub[subject11].attend1[i11][loc11] = 'P';
                                }
                                else if (cha11 == 'A' || cha11 == 'a')
                                {
                                    cr[create_class11].sub[subject11].attend1[i11][loc11] = 'A';
                                }
                                else
                                {
                                    cout << "Enter only absent for (A) or present for (P)";
                                    getch();
                                    goto reenter110;
                                }
                            }
                            cout << "\n\nRecord will be updated............";

                            loc11 = -1;
                        }
                        else
                        {
                            cout << "\n\nSomthing wrong.......";
                        }
                        getch();
                        goto start_11;
                    }
                    else if (ch11 == 2)
                    {
                        system("cls");
                        cout << "Which class : ";
                        cin >> class11;
                        if (class11 >= 11 && class11 <= 12)
                        {
                            if (class11 == 11)
                            {
                                create_class11 = 0;
                            }
                            else if (class11 == 12)
                            {
                                create_class11 = 1;
                            }
                            cout << "\n";
                            cout << "Which Subject" << endl;
                            cout << "1. Science" << endl;
                            cout << "2. Commerce" << endl;
                            cout << "3. Arts" << endl
                                 << endl;
                        re_subj10:
                            cout << "Choose subject : ";
                            cin >> ch_subject11;
                            if (ch_subject11 == 1)
                            {
                                subject11 = 0;
                            }
                            else if (ch_subject11 == 2)
                            {
                                subject11 = 1;
                            }
                            else if (ch_subject11 == 3)
                            {
                                subject11 = 2;
                            }
                            else
                            {
                                cout << "Please enter correct option....\n\n";
                                goto re_subj10;
                            }
                            x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                            if (x11 == 0)
                            {
                                cout << "\nNo record found.......\n";
                                getch();
                                goto start_11;
                            }

                            system("cls");
                            cout << "class : " << class11 << endl;
                            cout << "subject : ";
                            if (ch_subject11 == 1)
                            {
                                cout << "Science";
                            }
                            else if (ch_subject11 == 2)
                            {
                                cout << "commerce";
                            }
                            else if (ch_subject11 == 3)
                            {
                                cout << "Arts";
                            }
                            cout << endl
                                 << endl;
                            date11 = cr[create_class11].sub[subject11].date_i11[1][1];
                            if (date11 == 0)
                            {
                                cout << endl
                                     << endl;
                                cout << "No record found..............";
                                getch();
                                goto start_11;
                            }
                            cout << "Roll no.\tName\t\t   ";
                            for (i11 = 0; i11 < date11; i11++)
                            {
                                date = cr[create_class11].sub[subject11].store_date1[i11][0];
                                month = cr[create_class11].sub[subject11].store_date1[i11][1];
                                year = cr[create_class11].sub[subject11].store_date1[i11][2];
                                cout << date << "/" << month << "/" << year << "  ";
                            }

                            cout << endl;
                            x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                            attend11 = cr[create_class11].sub[subject11].up_attend11[1][1];
                            for (i11 = 0; i11 < x11; i11++)
                            {
                                for (j11 = 0; j11 < attend11; j11++)
                                {
                                    if (j11 == 0)
                                    {
                                        cout << "  " << cr[create_class11].sub[subject11].roll_no1[i11] << ".\t\t" << cr[create_class11].sub[subject11].name1[i11] << "\t\t: ";

                                        if (cr[create_class11].sub[subject11].attend1[i11][j11] == 'P' || cr[create_class11].sub[subject11].attend1[i11][j11] == 'A')
                                        {
                                            cout << "    " << cr[create_class11].sub[subject11].attend1[i11][j11];
                                        }
                                        else
                                        {
                                            cout << "    "
                                                 << "-";
                                        }
                                    }
                                    else
                                    {
                                        if (cr[create_class11].sub[subject11].attend1[i11][j11] == 'P' || cr[create_class11].sub[subject11].attend1[i11][j11] == 'A')
                                        {
                                            cout << "         " << cr[create_class11].sub[subject11].attend1[i11][j11];
                                        }
                                        else
                                        {
                                            cout << "         "
                                                 << "-";
                                        }
                                    }
                                }
                                cout << endl;
                            }
                            cout << "\n\nEnter roll no. : ";
                            cin >> roll11;

                            x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                            for (i11 = 0; i11 < x11; i11++)
                            {
                                if (roll11 == cr[create_class11].sub[subject11].roll_no1[i11])
                                {
                                    loc11 = i11;
                                }
                            }
                            if (loc11 == -1)
                            {
                                cout << "\n\nNo record found..........";
                                getch();
                                goto start_11;
                            }
                            system("cls");
                            cout << "class : " << class11 << endl;
                            cout << "subject : ";
                            if (ch_subject11 == 1)
                            {
                                cout << "Science";
                            }
                            else if (ch_subject11 == 2)
                            {
                                cout << "commerce";
                            }
                            else if (ch_subject11 == 3)
                            {
                                cout << "Arts";
                            }
                            cout << "\n\nRoll no.  : " << roll11;
                            cout << endl
                                 << endl;
                            cout << "Roll no.\tName" << endl;
                            cout << "  " << cr[create_class11].sub[subject11].roll_no1[loc11] << ".\t\t" << cr[create_class11].sub[subject11].name1[loc11] << endl
                                 << endl;
                            date11 = cr[create_class11].sub[subject11].date_i11[1][1];
                            for (i11 = 0; i11 < date11; i11++)
                            {
                                date = cr[create_class11].sub[subject11].store_date1[i11][0];
                                month = cr[create_class11].sub[subject11].store_date1[i11][1];
                                year = cr[create_class11].sub[subject11].store_date1[i11][2];
                                cout << "\t" << date << "/" << month << "/" << year << "  :  ";
                                cout << cr[create_class11].sub[subject11].attend1[loc11][i11];
                                cout << endl;
                            }
                            cout << endl
                                 << endl;
                            for (i11 = 0; i11 < date11; i11++)
                            {
                                date = cr[create_class11].sub[subject11].store_date1[i11][0];
                                month = cr[create_class11].sub[subject11].store_date1[i11][1];
                                year = cr[create_class11].sub[subject11].store_date1[i11][2];
                                cout << "\t" << date << "/" << month << "/" << year << "  :  ";

                            reenter112:
                                cin >> cha11;
                                if (cha11 == 'P' || cha11 == 'p')
                                {
                                    cr[create_class11].sub[subject11].attend1[loc11][i11] = 'P';
                                }
                                else if (cha11 == 'A' || cha11 == 'a')
                                {
                                    cr[create_class11].sub[subject11].attend1[loc11][i11] = 'A';
                                }
                                else
                                {
                                    cout << "Enter only absent for (A) or present for (P)";
                                    getch();
                                    goto reenter112;
                                }
                            }
                            cout << "\n\nRecord will be updated............";

                            loc11 = -1;
                        }
                        else
                        {
                            cout << "\n\nSomthing wrong.......";
                        }
                        getch();
                        goto start_11;
                    }
                }
                else if (ch11 == 5)
                {
                    system("cls");
                    cout << "Which class : ";
                    cin >> class11;
                    if (class11 >= 11 && class11 <= 12)
                    {
                        if (class11 == 11)
                        {
                            create_class11 = 0;
                        }
                        else if (class11 == 12)
                        {
                            create_class11 = 1;
                        }
                        cout << "\n";
                        cout << "Which Subject" << endl;
                        cout << "1. Science" << endl;
                        cout << "2. Commerce" << endl;
                        cout << "3. Arts" << endl
                             << endl;
                    re_subj11:
                        cout << "Choose subject : ";
                        cin >> ch_subject11;
                        if (ch_subject11 == 1)
                        {
                            subject11 = 0;
                        }
                        else if (ch_subject11 == 2)
                        {
                            subject11 = 1;
                        }
                        else if (ch_subject11 == 3)
                        {
                            subject11 = 2;
                        }
                        else
                        {
                            cout << "Please enter correct option....\n\n";
                            goto re_subj11;
                        }
                        x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                        if (x11 == 0)
                        {
                            cout << "\nNo record found.......\n";
                            getch();
                            goto start_11;
                        }

                        system("cls");
                        cout << "class : " << class11 << endl;
                        cout << "subject : ";
                        if (ch_subject11 == 1)
                        {
                            cout << "Science";
                        }
                        else if (ch_subject11 == 2)
                        {
                            cout << "commerce";
                        }
                        else if (ch_subject11 == 3)
                        {
                            cout << "Arts";
                        }
                        cout << endl
                             << endl;
                        date11 = cr[create_class11].sub[subject11].date_i11[1][1];
                        if (date11 == 0)
                        {
                            cout << endl
                                 << endl;
                            cout << "No record found..............";
                            getch();
                            goto start_11;
                        }
                        cout << "Roll no.\tName\t\t   ";
                        for (i11 = 0; i11 < date11; i11++)
                        {
                            date = cr[create_class11].sub[subject11].store_date1[i11][0];
                            month = cr[create_class11].sub[subject11].store_date1[i11][1];
                            year = cr[create_class11].sub[subject11].store_date1[i11][2];
                            cout << date << "/" << month << "/" << year << "  ";
                        }

                        cout << endl;
                        x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                        attend11 = cr[create_class11].sub[subject11].up_attend11[1][1];
                        for (i11 = 0; i11 < x11; i11++)
                        {
                            for (j11 = 0; j11 < attend11; j11++)
                            {
                                if (j11 == 0)
                                {
                                    cout << "  " << cr[create_class11].sub[subject11].roll_no1[i11] << ".\t\t" << cr[create_class11].sub[subject11].name1[i11] << "\t\t: ";

                                    if (cr[create_class11].sub[subject11].attend1[i11][j11] == 'P' || cr[create_class11].sub[subject11].attend1[i11][j11] == 'A')
                                    {
                                        cout << "    " << cr[create_class11].sub[subject11].attend1[i11][j11];
                                    }
                                    else
                                    {
                                        cout << "    "
                                             << "-";
                                    }
                                }
                                else
                                {
                                    if (cr[create_class11].sub[subject11].attend1[i11][j11] == 'P' || cr[create_class11].sub[subject11].attend1[i11][j11] == 'A')
                                    {
                                        cout << "         " << cr[create_class11].sub[subject11].attend1[i11][j11];
                                    }
                                    else
                                    {
                                        cout << "         "
                                             << "-";
                                    }
                                }
                            }
                            cout << endl;
                        }
                        cout << "\n\nDate : ";
                        cin >> date;
                        cout << "Month : ";
                        cin >> month;
                        cout << "Year : ";
                        cin >> year;
                        date11 = cr[create_class11].sub[subject11].date_i11[1][1];
                        for (i11 = 0; i11 <= date11; i11++)
                        {
                            if (date == cr[create_class11].sub[subject11].store_date1[i11][0] && month == cr[create_class11].sub[subject11].store_date1[i11][1] && year == cr[create_class11].sub[subject11].store_date1[i11][2])
                            {
                                loc11 = i11;
                            }
                        }
                        if (loc11 == -1)
                        {
                            cout << "\n\nNo record found..........";
                            getch();
                            goto start_11;
                        }
                    again_11:
                        system("cls");
                        cout << "class : " << class11 << endl;
                        cout << "subject : ";
                        if (ch_subject11 == 1)
                        {
                            cout << "Science";
                        }
                        else if (ch_subject11 == 2)
                        {
                            cout << "commerce";
                        }
                        else if (ch_subject11 == 3)
                        {
                            cout << "Arts";
                        }
                        cout << "\n\nDate  : " << date;
                        cout << "/" << month;
                        cout << "/" << year;
                        cout << endl
                             << endl;
                        x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                        cout << "Roll no.\tName\t\tAttend" << endl;
                        for (i11 = 0; i11 < x11; i11++)
                        {
                            cout << "  " << cr[create_class11].sub[subject11].roll_no1[i11] << ".\t\t" << cr[create_class11].sub[subject11].name1[i11] << "\t\t: ";
                            cout << cr[create_class11].sub[subject11].attend1[i11][loc11] << " ";
                            cout << endl;
                        }
                        cout << endl
                             << endl;
                        x11 = cr[create_class11].sub[subject11].update_i11[1][1];
                        attend11 = cr[create_class11].sub[subject11].up_attend11[1][1];
                        date11 = cr[create_class11].sub[subject11].date_i11[1][1];

                        cout << "Are you sure you want to delete this record (Y/N) : ";
                        cin >> cha11;
                        if (cha11 == 'Y' || cha11 == 'y')
                        {
                            for (i11 = loc11; i11 < date11; i11++)
                            {
                                cr[create_class11].sub[subject11].store_date1[i11][0] = cr[create_class11].sub[subject11].store_date1[i11 + 1][0];
                                cr[create_class11].sub[subject11].store_date1[i11][1] = cr[create_class11].sub[subject11].store_date1[i11 + 1][1];
                                cr[create_class11].sub[subject11].store_date1[i11][2] = cr[create_class11].sub[subject11].store_date1[i11 + 1][2];
                            }
                            for (i11 = 0; i11 < x11; i11++)
                            {
                                for (j11 = loc11; j11 < attend11; j11++)
                                {
                                    cr[create_class11].sub[subject11].attend1[i11][j11] = cr[create_class11].sub[subject11].attend1[i11][j11 + 1];
                                }
                            }
                            cr[create_class11].sub[subject11].up_attend11[1][1] = attend11 - 1;
                            cr[create_class11].sub[subject11].date_i11[1][1] = date11 - 1;
                            cout << "\n\nRecord will be deleted.......";
                        }
                        else if (cha11 == 'N' || cha11 == 'n')
                        {
                            cout << "\n\n Ok......";
                            getch();
                            goto start_11;
                        }
                        else
                        {
                            cout << "\nWrong choice\n";
                            cout << "Please choose correct option";

                            goto again_11;
                        }

                        loc11 = -1;
                        getch();
                    }
                }

            } while (ch11 != 6);
        }

    } while (ch11 != 4);
}
// ****************************************************************************************************************************************************************************
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//*****************************************************************************************************************************************************************************
// UNIVERSITY
int ucho1;
void aiml();
void aicstre();
int forclasstest();
int forexam();
int ai_attend();
int take_ai_attend();
int display_ai_attend();
int search_ai_att();
int modify_ai_att();
int delete_ai_att();
void university()
{
    do
    {
        system("cls");
        cout << "1. MCA \n";
        cout << "2. BCA \n";
        cout << "3. UCET \n";
        cout << "4. Back \n\n";
        cout << "Enter your choice : ";
        cin >> ucho1;
        switch (ucho1)
        {
        case 1:
        {
            system("cls");
            cout << "MCA";
            getch();
            break;
        }
        case 2:
        {
            system("cls");
            cout << "BCA";
            getch();
            break;
        }
        case 3:
        {
            do
            {
                system("cls");
                cout << "*****************UCET**********************\n\n";
                cout << "1. Computer Science & Engineering \n";
                cout << "2. Information Technology\n";
                cout << "3. Mechanical Engineering\n";
                cout << "4. Electronics & Comm. Engineering\n";
                cout << "5. Back\n\n";
                cout << "Enter your choice : ";
                cin >> ucho1;
                switch (ucho1)
                {
                case 1:
                {
                    do
                    {
                        /* code */

                        system("cls");
                        cout << "1. CSE\n";
                        cout << "2. AI & ML\n";
                        cout << "3. Back\n\n";
                        cout << "Enter your choice : ";
                        cin >> ucho1;
                        switch (ucho1)
                        {
                        case 1:
                        {
                            system("cls");
                            cout << "CSE";
                            getch();
                            break;
                        }
                        case 2:
                        {
                            aiml();
                            break;
                        }
                        }
                    } while (ucho1 > 0 && ucho1 < 3);
                    break;
                }
                case 2:
                {
                    system("cls");
                    cout << "Information Technology";
                    getch();
                    break;
                }
                case 3:
                {
                    system("cls");
                    cout << "Mechnacial Engineering";
                    getch();
                    break;
                }
                case 4:
                {
                    system("cls");
                    cout << "Electronics & comm. Engineering";
                    getch();
                    break;
                }
                }
            } while (ucho1 > 0 && ucho1 < 5);
        }
        }
    } while (ucho1 > 0 && ucho1 < 4);
}

//........................................ AI & ML ............................................................................................................................
int sem1, unch1, totalsem = 0, unno1, unx, unk, unch2, subch1, forcheck = -1;
int store_sem[8], countts[8][1], unstsub[20][1];
int tclass=0,pre13=0,ab13=0,t1class;
struct attend
{
    char attend1[50][50];

    int store_date1[50][3];
};

struct unst_marks
{
    int store_marks1[50][30];
    int store_test_date[30][3];
    int stnom1[30];
    int store_marks2[50][30];
    int store_exam_date[30][3];
    int stnom2[30];
};
struct ai_ml
{
    struct attend un_att[20];
    struct unst_marks unmarks1[20];
    int roll_no[50];
    char name[50][30];
    char phone_no[50][15];
    char address[50][30];
    char attend[50][50];
    int store_date[50][3];
    char subject[20][30];
    int up_marksj1[20][1];
    int up_marksj2[20][1];
    int up_attend11[20][1];
    int date_i11[20][1];
};
struct ai_ml ai[7];
void aiml()
{
    bak112:
    system("cls");
    cout << "Enter semester : ";
    cin >> sem1;
    if (sem1>0  &&  sem1<7)
    {
    store_sem[totalsem] = sem1;
    totalsem++;
    for (i = 0; i < totalsem; i++)
    {
        if (store_sem[totalsem - 1] == store_sem[i - 1])
        {
            totalsem--;
        }
    }
    }
    else
    {
        cout<<"\nEnter between 1-6 only ";
        getch();
        goto bak112;
    }
    do
    {

        system("cls");
        cout << "\t Main Menu\n\n";
        cout << "1. See all records\n";
        cout << "2. Entry/Edit record\n";
        cout << "3. Entry/Edit attendence\n";
        cout << "4. Entry/Edit Subject\n";
        cout << "5. Entry/Edit marks\n";
        cout << "6. Back\n\n";
        cout << "Please enter your choice : ";
        cin >> unch1;
        switch (unch1)
        {
        case 1:
        {
            ba1ck1:
            system("cls");
            cout << "1. Total no. of students in records\n";
            cout << "2. Phone no. of all students" << endl;
            cout << "3. Full details of particular student " << endl;
            cout << "4. Record of attendance"<<endl;
            cout << "5. recorrd of exam"<<endl;
            cout << "6. Back" << endl
                 << endl;
            cout << "Enter your choice : ";
            cin >> ch1;
            if (ch1 == 1)
            {
                system("cls");
                cout << "1. Show all semester\n";
                cout << "2. Show particular semester\n";
                cout << "Enter your choice : ";
                cin >> unch1;
                if (unch1 == 1)
                {
                    
                    system("cls");
                    if (store_sem == 0)
                    {
                        cout << "\nno record found.....";
                        getch();
                        goto ba1ck1;
                    }
                    else
                    {
                        for (i = 0; i < totalsem; i++)
                        {
                            classes = store_sem[i];
                            unx = countts[classes][1];

                            cout << " Semester " << classes << " : Total no. of student = " << unx << endl;
                            TNOS = TNOS + unx;
                        }

                        cout << " \ntotal no. of student : " << TNOS << endl;
                        TNOS = 0;
                        getch();
                        goto ba1ck1;
                    }
                }
            
                else if (unch1 == 2)
                {
                    system("cls");
                    cout << "which semester : ";
                    cin >> create_class;
                    if (create_class <= 0)
                    {
                        cout << " You can enter 1 to 6 only ..........";
                        getch();
                        goto ba1ck1;
                    }
                    if (create_class > 6)
                    {
                        cout << " You can enter 1 to 6 only ..........";
                        getch();
                        goto ba1ck1;
                    }
                    x1 = countts[create_class][1];
                    if (x1 == 0)
                    {
                        cout << "\nno record found.......";
                        getch();
                        goto ba1ck1;
                    }
                    else
                    {
                        cout << "\nTotal no of students in this class is " << x1;
                        getch();
                        goto ba1ck1;
                    }
                }
                else
                {
                    cout << "\nSomthing wrong.......";
                    cout << "\nPlease try again.....";
                    getch();
                    goto ba1ck1;
                }
            }
            else if (ch1==2)
            {
                system("cls");
                cout << "1. Show all class\n";
                cout << "2. Show particular class\n";
                cout << "Enter your choice : ";
                cin >> ch1;
                if (ch1 == 1)
                {
                    system("cls");
                    if (totalsem == 0)
                    {
                        cout << "\nno record found.....";
                        getch();
                        goto ba1ck1;
                    }
                    else
                    {
                        for (i = 0; i < totalsem; i++)
                        {
                            classes = store_sem[i];
                            cout << "Semester : " << classes << endl;
                            x = countts[classes][1];
                            for (j = 0; j < x; j++)
                            {

                                cout << "roll no. : " << ai[classes].roll_no[j] << " : Phone no. : " << ai[classes].phone_no[j] << endl;
                                ;
                            }
                            cout << endl;
                        }
                        getch();
                        goto ba1ck1;
                    }
                }
                else if (ch1 == 2)
                {
                    system("cls");
                    cout << "which semester : ";
                    cin >> create_class;
                    if (create_class <= 0)
                    {
                        cout << " You can enter 1 to 6 only ..........";
                        getch();
                        goto ba1ck1;
                    }
                    if (create_class > 6)
                    {
                        cout << " You can enter 1 to 6 only ..........";
                        getch();
                        goto ba1ck1;
                    }
                    x1 = countts[create_class][1];
                    if (x1 == 0)
                    {
                        cout << "\nno record found.......";
                        getch();
                        goto ba1ck1;
                    }
                    else
                    {
                        for (j = 0; j < x1; j++)
                        {

                            cout << "roll no. : " << ai[create_class].roll_no[j] << " : Phone no. : " << ai[create_class].phone_no[j] << endl;
                            ;
                        }
                        getch();
                        goto ba1ck1;
                    }
                }
                else
                {
                    cout << "\nSomthing wrong.......";
                    cout << "\nPlease try again.....";
                    getch();
                    goto ba1ck1;
                }
            
            }
            else if (ch1==3)
            {
                system("cls");
                    cout << "which semester : ";
                    cin >> create_class;
                    if (create_class <= 0)
                    {
                        cout << " You can enter 1 to 6 only ..........";
                        getch();
                        goto ba1ck1;
                    }
                    if (create_class > 6)
                    {
                        cout << " You can enter 1 to 6 only ..........";
                        getch();
                        goto ba1ck1;
                    }
                    cout << "Enter student roll no. : ";
                cin >> rollno;
                cout << "\n\n";
                x = countts[create_class][1];
                loc = -1;
                for (j = 0; j < x; j++)
                {
                    if (rollno == ai[create_class].roll_no[j])
                    {
                        loc = j;
                    }
                }
               
                if (loc >= 0)
                {
                    cout << "Semester          : " << create_class << endl;
                    cout << "Student roll no.  : " << ai[create_class].roll_no[loc] << endl;
                    cout << "Student name      : " << ai[create_class].name[loc] << endl;
                    cout << "Student phone no. : " << ai[create_class].phone_no[loc] << endl;
                    cout << "Student address   : " << ai[create_class].address[loc] << endl
                         << endl;
                     tsub = unstsub[create_class][1];
                    if (tsub > 0)
                    {
                        cout << "Attendance :-\n";
                            tclass=0;
                            pre13=0;
                            ab13=0;
                        tsub = unstsub[create_class][1];
                         for (i = 0; i < tsub; i++)
                         {
                            cout << "Sub : " << ai[create_class].subject[i] << endl;
                            updx = ai[create_class].up_attend11[i][1];
                             present = 0;
                             absent = 0;
                            for (j = 0; j < updx; j++)
                            {
                            
                            if (ai[create_class].un_att[i].attend1[loc][j] == 'P')
                            {
                                present++;
                            }
                            if (ai[create_class].un_att[i].attend1[loc][j] == 'A')
                            {
                                absent++;
                            }
                           }
                           cout << "       Total class = " << updx <<endl;
                           cout << "       Present     = " << present << endl;
                           cout << "       Absent      = " << absent<<endl<<endl;
                            tclass=tclass+updx;
                            pre13=pre13+present;
                            ab13=ab13+absent;
                         }
                        cout << "\n";
                        cout << "       Total class = " << tclass <<endl;
                        cout << "       Present     = " << pre13 << endl;
                        cout << "       Absent      = " << ab13<<endl;
                        cout << "       Percent     = " << (pre13*100)/tclass<<"%";
                    }
                    cout << "\n\n";
                     tsub = unstsub[create_class][1];
                    if (tsub > 0)
                    {
                        for (i = 0; i < tsub; i++)
                        {
                            marksj1 = ai[create_class].up_marksj1[i][1];
                            if (marksj1 > 0)
                            {
                                if (i == 0)
                                {
                                    cout << "Class test marks :-\n";
                                }
                                cout << "Subject : " <<ai[create_class].subject[i] << endl;

                                cout << "  ";
                                for (j = 0; j < marksj1; j++)
                                {
                                    date = ai[create_class].unmarks1[i].store_test_date[j][0];
                                    month = ai[create_class].unmarks1[i].store_test_date[j][1];
                                    year = ai[create_class].unmarks1[i].store_test_date[j][2];
                                    cout <<date << "/" << month << "/" << year << "    ";
                                }
                                cout << endl;
                                for (j = 0; j < marksj1; j++)
                                {
                                    if (j == 0)
                                    {
                                        cout << "  F.M = " << ai[create_class].unmarks1[i].stnom1[j];
                                    }
                                    else
                                    {
                                        cout << "    F.M = " << ai[create_class].unmarks1[i].stnom1[j];
                                    }
                                }
                                cout << endl;
                                for (j = 0; j < marksj1; j++)
                                {
                                    if (j == 0)
                                    {
                                        cout << "     " << ai[create_class].unmarks1[i].store_marks1[loc][j] << "          ";
                                    }
                                    else
                                    {
                                        cout << ai[create_class].unmarks1[i].store_marks1[loc][j] << "          ";
                                    }
                                }
                                cout << endl
                                     << endl;
                            }
                        }
                    }
                    tsub = unstsub[create_class][1];
                     totfm=0;
                     totgm=0;
                     foche=0;
                    if (tsub > 0)
                    {
                        for (i = 0; i < tsub; i++)
                        {
                            marksj1 = ai[create_class].up_marksj2[i][1];
                            if (marksj1 > 0)
                            {
                                if (i == 0)
                                {
                                    cout << "Exam marks :-\n";
                                    cout << "Subject           date          F-M     Gain-M" << endl;
                                    foche++;
                                }
                                cout<<ai[create_class].subject[i];
                                cout << "\t\t";
                                for (j = 0; j < 1; j++)
                                {
                                    date = ai[create_class].unmarks1[i].store_exam_date[j][0];
                                    month = ai[create_class].unmarks1[i].store_exam_date[j][1];
                                    year = ai[create_class].unmarks1[i].store_exam_date[j][2];
                                    cout <<date << "/" << month << "/" << year << "    ";
                                }
                                // cout << endl;
                                for (j = 0; j < 1; j++)
                                {
                                        cout << "\t" << ai[create_class].unmarks1[i].stnom2[j];
                                        totfm=totfm+ai[create_class].unmarks1[i].stnom2[j];
                                }
                                // cout << endl;
                                for (j = 0; j < 1; j++)
                                {
                                        cout << "\t  " << ai[create_class].unmarks1[i].store_marks2[loc][j];
                                        totgm=totgm+ai[create_class].unmarks1[i].store_marks2[loc][j];
                                }
                                cout <<endl<< endl;
                               
                            }
                        }
                        if (foche>=1)
                        {
                            cout << "                               -----------------"<<endl;
                                cout << "                 total :       "<<totfm<<"        "<<totgm<<endl;
                                perexam=(totgm*100)/totfm;
                                cout << "               percent : "<<perexam<<"%"<<endl;
                                if (perexam>=90)
                                {
                                   cout << "                 grade : A+"<<endl;
                                }
                                else if (perexam>=80  &&  perexam<=89)
                                {
                                    cout << "                 grade : A"<<endl;
                                }
                                else if (perexam>=70  &&  perexam<=79)
                                {
                                    cout << "                 grade : B+"<<endl;
                                }
                                else if (perexam>=60  &&  perexam<=69)
                                {
                                    cout << "                 grade : B"<<endl;
                                }
                                else if (perexam>=50  &&  perexam<=59)
                                {
                                    cout << "                 grade : C"<<endl;
                                }
                                else if (perexam>=40  &&  perexam<=49)
                                {
                                    cout << "                 grade : D"<<endl;
                                }
                                else if (perexam>=0  &&  perexam<=39)
                                {
                                    cout << "                 grade : F"<<endl;
                                }
                                foche=0;
                        }
                        
                    }
                }
                
                else
                    cout << "No any record found.......";
                
                getch();
                goto ba1ck1;
            }
            else if (ch1==4)
                {
                  system("cls");
                  cout<<"Semester : ";
                  cin>>create_class;
                  cout<<endl;
                  cout<<"Attendence records :-"<<endl<<endl;
                  cout<<"Roll no.   Name  \t";
                   tsub = unstsub[create_class][1];
                   for ( i = 0; i < tsub; i++)
                   {
                     cout<< ai[create_class].subject[i]<<"\t";
                   }
                   cout<<"T-Class   per %"<<endl;
                   tclass=0;
                   for ( i = 0; i < tsub; i++)
                   {
                   updx = ai[create_class].up_attend11[i][1];
                   if (i==0)
                   {
                   cout<<"\t\t\t"<<updx;
                   }
                   else
                     cout<<"\t"<<updx;
                    tclass=tclass+updx;
                   }
                   cout<<"\t"<<tclass<<endl<<endl;
                   t1class=tclass;
                   
                   x = countts[create_class][1]; 
                   for ( i = 0; i < x; i++)
                   {
                      cout << "   "<<ai[create_class].roll_no[i] << ". \t  " << ai[create_class].name[i] << " : ";
                      tclass=0;
                      for ( j = 0; j < tsub; j++)
                      {
                        updx = ai[create_class].up_attend11[j][1];
                        present=0;
                        
                        for ( i11 = 0; i11 < updx; i11++)
                        {
                           if (ai[create_class].un_att[j].attend1[i][i11] == 'P')
                            {
                                present++;
                            }
                        }
                        cout<<"\t"<<present;
                        tclass=tclass+present;
                      }
                      cout<<"\t"<<tclass;
                      cout<<"\t   "<<(tclass*100)/t1class<<"%"<<endl;  
                   }
                   getch();
                   goto ba1ck1;
                   
                }
                else if (ch1==5)
                {
                     system("cls");
                  cout<<"Semester : ";
                  cin>>create_class;
                  cout<<endl;
                   marksj1 = ai[create_class].up_marksj2[0][1];
                    for ( i11 = 0; i11 < marksj1; i11++)
                    {
                  cout<<"Exam records :-"<<endl<<endl;
                  cout<<"Roll no.   Name  \t";
                   tsub = unstsub[create_class][1];
                   for ( i = 0; i < tsub; i++)
                   {
                     cout<< ai[create_class].subject[i]<<"\t";
                   }
                   cout<<"T-Marks   per %"<<endl;
                   totfm=0;
                   for ( i = 0; i < tsub; i++)
                   {
                    updx=ai[create_class].unmarks1[i].stnom2[i11];
                   if (i==0)
                   {
                   cout<<"\t\t\t"<<updx;
                   }
                   else
                     cout<<"\t"<<updx;
                     totfm=totfm+updx;
                   }
                   cout<<"\t"<<totfm<<endl<<endl;
                   t1class=totfm;
                   
                   x = countts[create_class][1]; 
                   for ( i = 0; i < x; i++)
                   {
                      cout << "   "<<ai[create_class].roll_no[i] << ". \t  " << ai[create_class].name[i] << " : ";
                      tclass=0;
                      for ( j = 0; j < tsub; j++)
                      {
                        present=ai[create_class].unmarks1[j].store_marks2[i][i11];
                        cout<<"\t"<<present;
                        tclass=tclass+present;
                      }
                      cout<<"\t"<<tclass;
                      cout<<"\t   "<<(tclass*100)/t1class<<"%"<<endl;  
                   }
                   cout<<endl<<endl;
                    }
                    getch();
                    goto ba1ck1;
                }
                
                

            getch();
            break;
        }
        case 2:
        {
            system("cls");
            do
            {

                system("cls");
                cout << "1. Create student records " << endl;
                cout << "2. Display all student records" << endl;
                cout << "3. Search student record" << endl;
                cout << "4. Modify student records" << endl;
                cout << "5. Delete student records" << endl;
                cout << "6. Back" << endl
                     << endl;
                cout << "Please enter your choice : ";
                cin >> unch2;
                switch (unch2)
                {
                case 1:
                {
                    system("cls");
                    aicstre();
                    getch();
                    break;
                }
                case 2:
                {
                    system("cls");
                    unx = countts[sem1][1];
                    for (i = 0; i < unx; i++)
                    {

                        cout << "Student roll no.  : " << ai[sem1].roll_no[i] << endl;
                        cout << "Student name      : " << ai[sem1].name[i] << endl;
                        cout << "Student phone no. : " << ai[sem1].phone_no[i] << endl;
                        cout << "Student address   : " << ai[sem1].address[i] << endl;
                        cout << "\n";
                    }
                    if (unx == 0)
                        cout << "No any record found........";
                    getch();
                    break;
                }
                case 3:
                {
                    system("cls");
                    cout << "Enter student roll no. : ";
                    cin >> rollno;
                    cout << "\n\n";
                    unx = countts[sem1][1];
                    for (j = 0; j < unx; j++)
                    {
                        if (rollno == ai[sem1].roll_no[j])
                        {
                            loc = j;
                        }
                    }
                    if (loc >= 0)
                    {
                        cout << "Semester          : " << sem1 << endl;
                        cout << "Student roll no.  : " << ai[sem1].roll_no[loc] << endl;
                        cout << "Student name      : " << ai[sem1].name[loc] << endl;
                        cout << "Student phone no. : " << ai[sem1].phone_no[loc] << endl;
                        cout << "Student address   : " << ai[sem1].address[loc] << endl;
                    }
                    else
                        cout << "No any record found.......";
                    loc = -1;
                    getch();
                    break;
                }
                case 4:
                {
                    system("cls");
                    cout << "Enter student roll no. : ";
                    cin >> rollno;
                    cout << "\n\n";
                    unx = countts[sem1][1];
                    for (j = 0; j < unx; j++)
                    {
                        if (rollno == ai[sem1].roll_no[j])
                        {
                            loc = j;
                        }
                    }
                    if (loc >= 0)
                    {

                        cout << "Student roll no.  : " << ai[sem1].roll_no[loc] << endl;
                        cout << "Student name      : " << ai[sem1].name[loc] << endl;
                        cout << "Student phone no. : " << ai[sem1].phone_no[loc] << endl;
                        cout << "Student address   : " << ai[sem1].address[loc] << endl
                             << endl;

                    unreenterroll:
                        cout << "Enter student roll no.  : ";
                        cin >> rollno;
                        if (ai[sem1].roll_no[loc] == rollno)
                        {
                            goto unname;
                        }
                        unx = countts[sem1][1];
                        for (j = 0; j < unx; j++)
                        {
                            if (rollno == ai[sem1].roll_no[j])
                            {
                                cout << "\nthis roll no. is already exist in record \n"
                                     << "Please enter new roll no \n"
                                     << endl;

                                getch();
                                goto unreenterroll;
                            }
                            else
                            {
                                ai[sem1].roll_no[loc] = rollno;
                            }
                        }
                    unname:
                        gets(null);
                        cout << "Enter student name      : ";
                        gets(ai[sem1].name[loc]);

                        cout << "Enter student phone no. : ";
                        gets(ai[sem1].phone_no[loc]);

                        cout << "Enter student address   : ";
                        gets(ai[sem1].address[loc]);
                        cout << "\n\n";

                        cout << "Record will be change............";
                    }
                    else
                        cout << "No any record found.......";
                    loc = -1;
                    getch();
                    break;
                }
                case 5:
                {
                    system("cls");
                    cout << "Enter student roll no. : ";
                    cin >> rollno;
                    cout << "\n\n";
                    unx = countts[sem1][1];
                    for (j = 0; j < unx; j++)
                    {
                        if (rollno == ai[sem1].roll_no[j])
                        {
                            loc = j;
                        }
                    }
                    if (loc >= 0)
                    {

                        cout << "Student roll no.  : " << ai[sem1].roll_no[loc] << endl;
                        cout << "Student name      : " << ai[sem1].name[loc] << endl;
                        cout << "Student phone no. : " << ai[sem1].phone_no[loc] << endl;
                        cout << "Student address   : " << ai[sem1].address[loc] << endl;
                    unoption:
                        cout << "\nAre you sure you want to delete this record (Y/N) : ";
                        cin >> cha1;
                        if (cha1 == 'y' || cha1 == 'Y')
                        {
                            unx = countts[sem1][1];

                            for (i = loc, j = i + 1; i < x, j < unx + 1; i++, j++)
                            {
                                ai[sem1].roll_no[i] = ai[sem1].roll_no[j];
                                strcpy(ai[sem1].name[i], ai[sem1].name[j]);
                                strcpy(ai[sem1].phone_no[i], ai[sem1].phone_no[j]);
                                strcpy(ai[sem1].address[i], ai[sem1].address[j]);
                                unx = countts[sem1][1] = unx - 1;
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
                            goto unoption;
                        }
                    }
                    else
                    {
                        cout << "No any record found.......";
                    }

                    loc = -1;
                    getch();
                    break;
                }
                }
            } while (unch2 != 6);
            break;
        }
        case 3:
        {
            system("cls");
            ai_attend();
            getch();
            break;
        }
        case 4:
        {
            do
            {
                system("cls");
                cout << "1. Entry " << endl;
                cout << "2. Display " << endl;
                cout << "3. Modify " << endl;
                cout << "4. Delete " << endl;
                cout << "5. Back" << endl
                     << endl;
                cout << "Please enter your choice : ";
                cin >> ch1;
                switch (ch1)
                {
                case 1:
                {
                    system("cls");
                    cout << "Enter total no. of subject : ";
                    cin >> no;
                    cout << "\n\n";
                    gets(null);

                    tsub = unstsub[sem1][1];
                    k = tsub + no;
                    for (i = tsub; i < k; i++)
                    {
                        cout << "Sub " << i + 1 << " : ";

                        gets(subject2);
                        strcpy(ai[sem1].subject[i], subject2);
                    }
                    unstsub[sem1][1] = k;
                    cout << "\n\n Record will be saved.....\n";
                    getch();
                    break;
                }
                case 2:
                {
                    system("cls");
                    tsub = unstsub[sem1][1];
                    if (tsub == 0)
                    {
                        cout << "\n\nNo record found.......\n";
                    }
                    else
                    {
                        for (i = 0; i < tsub; i++)
                        {
                            cout << "Sub " << i + 1 << " : " << ai[sem1].subject[i] << endl;
                        }
                    }
                    getch();
                    break;
                }
                case 3:
                {
                    system("cls");
                    tsub = unstsub[sem1][1];
                    if (tsub == 0)
                    {
                        cout << "\n\nNo record found.......\n";
                    }
                    else
                    {
                        for (i = 0; i < tsub; i++)
                        {
                            cout << "Sub " << i + 1 << " : " << ai[sem1].subject[i] << endl;
                        }
                    unrein1:
                        cout << "\n\nWhich subject modify : ";
                        cin >> ch1;
                        gets(null);
                        if (ch1 > 0 && ch1 <= tsub)
                        {
                            cout << "\nPlease re-inter : ";
                            gets(subject2);
                            strcpy(ai[sem1].subject[ch1 - 1], subject2);
                            cout << "\n\nChange will be saved......";
                        }
                        else
                        {
                            cout << "\nPlease enter correct option ......... ";
                            goto unrein1;
                        }
                    }
                    getch();
                    break;
                }
                case 4:
                {
                    system("cls");
                    tsub = unstsub[sem1][1];
                    if (tsub == 0)
                    {
                        cout << "\n\nNo record found.......\n";
                    }
                    else
                    {
                        for (i = 0; i < tsub; i++)
                        {
                            cout << "Sub " << i + 1 << " : " << ai[sem1].subject[i] << endl;
                        }
                    rein2:
                        cout << "\n\nWhich subject delete : ";
                        cin >> ch1;
                        if (ch1 > 0 && ch1 <= tsub)
                        {
                            for (i = ch1 - 1; i < tsub; i++)
                            {
                                strcpy(ai[sem1].subject[i], ai[sem1].subject[i + 1]);
                            }
                            tsub = unstsub[sem1][1] = tsub - 1;
                            cout << "\n\nChange will be saved......";
                        }
                        else
                        {
                            cout << "\nPlease enter correct option ......... ";
                            goto rein2;
                        }
                    }
                    getch();
                    break;
                }
                }

            } while (ch1 != 5);
            break;
        }
        case 5:
        {
            system("cls");
            cout << "1. For class test \n";
            cout << "2. For examination \n\n";
            cout << "Enter your choice : ";
            cin >> ch1;
            switch (ch1)
            {
            case 1:
            {
                system("cls");
                forclasstest();
                break;
            }
            case 2:
            {
                system("cls");
                forexam();
                break;
            }
            }
            break;
        }
        }
    } while (unch1 != 6);
}

int forclasstest()
{
unentry_marks:
    system("cls");
    cout << "1. Entry Marks" << endl;
    cout << "2. Display " << endl;
    cout << "3. Modify " << endl;
    cout << "4. Delete " << endl;
    cout << "5. Back" << endl
         << endl;
    cout << "Please enter your choice : ";
    cin >> ch1;
    switch (ch1)
    {
    case 1:
    {
        unx = countts[sem1][1];
        if (unx == 0)
        {
            cout << "\n\nNo record found......\n";
            getch();
            goto unentry_marks;
        }
        tsub = unstsub[sem1][1];
        if (tsub == 0)
        {
            cout << "\n\nNo record found......\n";
            getch();
            goto unentry_marks;
        }
        else
        {
        unbac1:
            system("cls");
            cout << "Semester : " << sem1;
            cout << "\n\n";
            for (i = 0; i < tsub; i++)
            {
                cout << "Sub " << i + 1 << " : " << ai[sem1].subject[i] << endl;
            }
            cout << "\n Choose subject : ";
            cin >> ch1;
            if (ch1 > 0 && ch1 <= tsub)
            {
                goto uncont1;
            }
            else
            {
                cout << "\n\nSomthing wrong....\n";
                cout << "Please re-enter....\n";
                goto unbac1;
            }
        uncont1:
            cout << "Date  : ";
            cin >> date;
            cout << "Month : ";
            cin >> month;
            cout << "Year  : ";
            cin >> year;

            marksj1 = ai[sem1].up_marksj1[ch1 - 1][1];

            ai[sem1].unmarks1[ch1 - 1].store_test_date[marksj1][0] = date;
            ai[sem1].unmarks1[ch1 - 1].store_test_date[marksj1][1] = month;
            ai[sem1].unmarks1[ch1 - 1].store_test_date[marksj1][2] = year;

            system("cls");

            cout << "Semester   : " << sem1 << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl;
            cout << "Date    : " << date << "/" << month << "/" << year << endl
                 << endl;
            cout << "Enter full marks : ";
            cin >> ai[sem1].unmarks1[ch1 - 1].stnom1[marksj1];
            unx = countts[sem1][1];
            marksj1 = ai[sem1].up_marksj1[ch1 - 1][1];
            cout << endl;
            unx = countts[sem1][1];
            for (i = 0; i < unx; i++)
            {
            unentermarks1:
                cout << ai[sem1].roll_no[i] << ". " << ai[sem1].name[i] << "\t\t:  ";
                cin >> enterno1;
                if (enterno1 <= ai[sem1].unmarks1[ch1 - 1].stnom1[marksj1])
                {
                    ai[sem1].unmarks1[ch1 - 1].store_marks1[i][marksj1] = enterno1;
                }
                else
                {
                    cout << "\nEnter no. is wrong because this no. is greater then full marks,"
                         << "\nso, please re-enter the marks.\n\n";
                    goto unentermarks1;
                }
            }
            ai[sem1].up_marksj1[ch1 - 1][1] = marksj1 + 1;
            cout << "\n\nRecord will be saved........\n";
            getch();
            goto unentry_marks;
        }
    }
    case 2:
    {
    unbac2:
        system("cls");
        cout << "Semester : " << sem1;
        tsub = unstsub[sem1][1];
        if (tsub == 0)
        {
            cout << "\n\nNo record found......\n";
            getch();
            goto unentry_marks;
        }
        else
        {
            cout << "\n\n";
            for (i = 0; i < tsub; i++)
            {
                cout << "Sub " << i + 1 << " : " << ai[sem1].subject[i] << endl;
            }
            cout << "\n Choose subject : ";
            cin >> ch1;
            if (ch1 > 0 && ch1 <= tsub)
            {
                goto uncont2;
            }
            else
            {
                cout << "\n\nSomthing wrong....\n";
                cout << "Please re-enter....\n";
                goto unbac2;
            }
        uncont2:
            marksj1 = ai[sem1].up_marksj1[ch1 - 1][1];
            if (marksj1 == 0)
            {
                cout << "\n\nNo record found......\n";
                getch();
                goto unentry_marks;
            }
            system("cls");
            cout << "Semester: " << sem1 << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl
                 << endl;
            cout << "Roll no.\tName\t\t   ";
            for (i = 0; i < marksj1; i++)
            {
                date = ai[sem1].unmarks1[ch1 - 1].store_test_date[i][0];
                month = ai[sem1].unmarks1[ch1 - 1].store_test_date[i][1];
                year = ai[sem1].unmarks1[ch1 - 1].store_test_date[i][2];
                cout << date << "/" << month << "/" << year << "  ";
            }
            cout << endl;
            for (i = 0; i < marksj1; i++)
            {
                if (i == 0)
                {
                    cout << "               \t    \t\t  F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom1[i];
                }
                else
                {
                    cout << "  F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom1[i];
                }
            }
            cout << endl;

            unx = countts[sem1][1];

            for (i = 0; i < unx; i++)
            {
                cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
                for (j = 0; j < marksj1; j++)
                {
                    cout << "    " << ai[sem1].unmarks1[ch1 - 1].store_marks1[i][j] << "     ";
                }
                cout << endl;
            }
        }
        getch();
        goto unentry_marks;
    }
    case 3:
    {
    unbac3:
        system("cls");
        cout << "Semester : " << sem1;
        tsub = unstsub[sem1][1];
        if (tsub == 0)
        {
            cout << "\n\nNo record found......\n";
            getch();
            goto unentry_marks;
        }
        else
        {
            cout << "\n\n";
            for (i = 0; i < tsub; i++)
            {
                cout << "Sub " << i + 1 << " : " << ai[sem1].subject[i] << endl;
            }
            cout << "\n Choose subject : ";
            cin >> ch1;
            if (ch1 > 0 && ch1 <= tsub)
            {
                goto uncont3;
            }
            else
            {
                cout << "\n\nSomthing wrong....\n";
                cout << "Please re-enter....\n";
                goto unbac3;
            }
        uncont3:
            marksj1 = ai[sem1].up_marksj1[ch1 - 1][1];
            if (marksj1 == 0)
            {
                cout << "\n\nNo record found......\n";
                getch();
                goto unentry_marks;
            }
        unback01:
            system("cls");
            cout << "Class   : " << create_class << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl
                 << endl;
            cout << "Roll no.\tName\t\t   ";
            for (i = 0; i < marksj1; i++)
            {
                date = ai[sem1].unmarks1[ch1 - 1].store_test_date[i][0];
                month = ai[sem1].unmarks1[ch1 - 1].store_test_date[i][1];
                year = ai[sem1].unmarks1[ch1 - 1].store_test_date[i][2];
                cout << date << "/" << month << "/" << year << "  ";
            }
            cout << endl;
            for (i = 0; i < marksj1; i++)
            {
                if (i == 0)
                {
                    cout << "               \t    \t\t   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom1[i];
                }
                else
                {
                    cout << "  F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom1[i];
                }
            }
            cout << endl;
            unx = countts[sem1][1];

            for (i = 0; i < unx; i++)
            {
                cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
                for (j = 0; j < marksj1; j++)
                {
                    cout << "    " << ai[sem1].unmarks1[ch1 - 1].store_marks1[i][j] << "     ";
                }
                cout << endl;
            }
            cout << endl;
            cout << "Enter date : ";
            cin >> date;
            cout << "     month : ";
            cin >> month;
            cout << "      year : ";
            cin >> year;
            inc = 0;
            for (i = 0; i < marksj1; i++)
            {
                if (date == ai[sem1].unmarks1[ch1 - 1].store_test_date[i][0] && month == ai[sem1].unmarks1[ch1 - 1].store_test_date[i][1] && year == ai[sem1].unmarks1[ch1 - 1].store_test_date[i][2])
                {
                    location1[inc] = i;
                    inc++;
                }
            }
            if (inc == 0)
            {
                cout << "\n\nSomthing wrong.........\n";
                cout << "Please try again...........\n";
                getch();
                goto unback01;
            }

            if (inc == 1)
            {
                j = location1[0];
                goto unmiddle1;
            }
        unback02:
            system("cls");
            cout << "Class   : " << create_class << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl
                 << endl;
            cout << "Roll no.\tName\t\t   ";
            for (i = 0; i < inc; i++)
            {
                j = location1[i];
                date = ai[sem1].unmarks1[ch1 - 1].store_test_date[j][0];
                month = ai[sem1].unmarks1[ch1 - 1].store_test_date[j][1];
                year = ai[sem1].unmarks1[ch1 - 1].store_test_date[j][2];
                cout << date << "/" << month << "/" << year << "  ";
            }
            cout << endl;
            for (i = 0; i < inc; i++)
            {
                j = location1[i];
                if (i == 0)
                {
                    cout << "               \t    \t\t   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom1[j];
                }
                else
                {
                    cout << "   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom1[j];
                }
            }
            cout << endl;
            unx = countts[sem1][1];

            for (i = 0; i < unx; i++)
            {
                cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
                for (j = 0; j < inc; j++)
                {
                    q1 = location1[j];
                    cout << "    " << ai[sem1].unmarks1[ch1 - 1].store_marks1[i][q1] << "     ";
                }
                cout << endl;
            }
            cout << endl;
            cout << "Choose any one : ";
            cin >> q1;
            if (q1 <= 0)
            {
                cout << "\n\nSomthing wrong.........\n";
                cout << "Please try again...........\n";
                getch();
                goto unback02;
            }
            if (q1 > inc)
            {
                cout << "\n\nSomthing wrong.........\n";
                cout << "Please try again...........\n";
                getch();
                goto unback02;
            }

            j = location1[q1 - 1];
        unmiddle1:
            system("cls");
            cout << "Class   : " << create_class << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl
                 << endl;
            cout << "Roll no.\tName\t\t   ";

            date = ai[sem1].unmarks1[ch1 - 1].store_test_date[j][0];
            month = ai[sem1].unmarks1[ch1 - 1].store_test_date[j][1];
            year = ai[sem1].unmarks1[ch1 - 1].store_test_date[j][2];
            cout << date << "/" << month << "/" << year << "  " << endl;
            cout << "               \t    \t\t   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom1[j];
            cout << endl;
            unx = countts[sem1][1];

            for (i = 0; i < unx; i++)
            {
                cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
                cout << "    " << ai[sem1].unmarks1[ch1 - 1].store_marks1[i][j] << "     ";
                cout << endl;
            }
        }
        cout << endl;
        cout << "Re-enter marks :-" << endl
             << endl;
        cout << "Enter full marks : ";
        cin >> ai[sem1].unmarks1[ch1 - 1].stnom1[j];
        cout << endl;
        for (i = 0; i < unx; i++)
        {
        unentermarks2:
            cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
            cin >> enterno1;
            if (enterno1 <= ai[sem1].unmarks1[ch1 - 1].stnom1[j])
            {
                ai[sem1].unmarks1[ch1 - 1].store_marks1[i][j] = enterno1;
            }
            else
            {
                cout << "\nEnter no. is wrong because this no. is greater then full marks,"
                     << "\nso, please re-enter the marks.\n\n";
                goto unentermarks2;
            }
        }
        cout << "\n\nRecord will be updated............";
        getch();
        goto unentry_marks;
    }
    case 4:
    {
        system("cls");
    unbac4:
        cout << "Semester : " << sem1;
        tsub = unstsub[sem1][1];
        if (tsub == 0)
        {
            cout << "\n\nNo record found......\n";
            getch();
            goto unentry_marks;
        }
        else
        {
            cout << "\n\n";
            for (i = 0; i < tsub; i++)
            {
                cout << "Sub " << i + 1 << " : " << ai[sem1].subject[i] << endl;
            }
            cout << "\n Choose subject : ";
            cin >> ch1;
            if (ch1 > 0 && ch1 <= tsub)
            {
                goto uncont4;
            }
            else
            {
                cout << "\n\nSomthing wrong....\n";
                cout << "Please re-enter....\n";
                goto unbac4;
            }
        uncont4:
            marksj1 = ai[sem1].up_marksj1[ch1 - 1][1];
            if (marksj1 == 0)
            {
                cout << "\n\nNo record found......\n";
                getch();
                goto unentry_marks;
            }
        unback05:
            system("cls");
            cout << "Class   : " << create_class << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl
                 << endl;
            cout << "Roll no.\tName\t\t   ";
            for (i = 0; i < marksj1; i++)
            {
                date = ai[sem1].unmarks1[ch1 - 1].store_test_date[i][0];
                month = ai[sem1].unmarks1[ch1 - 1].store_test_date[i][1];
                year = ai[sem1].unmarks1[ch1 - 1].store_test_date[i][2];
                cout << date << "/" << month << "/" << year << "  ";
            }
            cout << endl;
            for (i = 0; i < marksj1; i++)
            {
                if (i == 0)
                {
                    cout << "               \t    \t\t   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom1[i];
                }
                else
                {
                    cout << "  F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom1[i];
                }
            }
            cout << endl;
            unx = countts[sem1][1];

            for (i = 0; i < unx; i++)
            {
                cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
                for (j = 0; j < marksj1; j++)
                {
                    cout << "    " << ai[sem1].unmarks1[ch1 - 1].store_marks1[i][j] << "     ";
                }
                cout << endl;
            }
            cout << endl;
            cout << "Enter date : ";
            cin >> date;
            cout << "     month : ";
            cin >> month;
            cout << "      year : ";
            cin >> year;
            inc = 0;
            for (i = 0; i < marksj1; i++)
            {
                if (date == ai[sem1].unmarks1[ch1 - 1].store_test_date[i][0] && month == ai[sem1].unmarks1[ch1 - 1].store_test_date[i][1] && year == ai[sem1].unmarks1[ch1 - 1].store_test_date[i][2])
                {
                    location1[inc] = i;
                    inc++;
                }
            }
            if (inc == 0)
            {
                cout << "\n\nSomthing wrong.........\n";
                cout << "Please try again...........\n";
                getch();
                goto unback05;
            }

            if (inc == 1)
            {
                j = location1[0];
                goto unmiddle2;
            }
        unback03:
            system("cls");
            cout << "Semester   : " << sem1 << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl
                 << endl;
            cout << "Roll no.\tName\t\t   ";
            for (i = 0; i < inc; i++)
            {
                j = location1[i];
                date = ai[sem1].unmarks1[ch1 - 1].store_test_date[j][0];
                month = ai[sem1].unmarks1[ch1 - 1].store_test_date[j][1];
                year = ai[sem1].unmarks1[ch1 - 1].store_test_date[j][2];
                cout << date << "/" << month << "/" << year << "  ";
            }
            cout << endl;
            for (i = 0; i < inc; i++)
            {
                j = location1[i];
                if (i == 0)
                {
                    cout << "               \t    \t\t   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom1[j];
                }
                else
                {
                    cout << "   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom1[j];
                }
            }
            cout << endl;
            unx = countts[sem1][1];

            for (i = 0; i < unx; i++)
            {
                cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
                for (j = 0; j < inc; j++)
                {
                    q1 = location1[j];
                    cout << "    " << ai[sem1].unmarks1[ch1 - 1].store_marks1[i][q1] << "     ";
                }
                cout << endl;
            }
            cout << endl;
            cout << "Choose any one : ";
            cin >> q1;
            if (q1 <= 0)
            {
                cout << "\n\nSomthing wrong.........\n";
                cout << "Please try again...........\n";
                getch();
                goto unback03;
            }
            if (q1 > inc)
            {
                cout << "\n\nSomthing wrong.........\n";
                cout << "Please try again...........\n";
                getch();
                goto unback03;
            }

            j = location1[q1 - 1];
        unmiddle2:
            system("cls");
            cout << "Class   : " << create_class << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl
                 << endl;
            cout << "Roll no.\tName\t\t   ";

            date = ai[sem1].unmarks1[ch1 - 1].store_test_date[j][0];
            month = ai[sem1].unmarks1[ch1 - 1].store_test_date[j][1];
            year = ai[sem1].unmarks1[ch1 - 1].store_test_date[j][2];
            cout << date << "/" << month << "/" << year << "  " << endl;
            cout << "               \t    \t\t   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom1[j];
            cout << endl;
            unx = countts[sem1][1];
            for (i = 0; i < unx; i++)
            {
                cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
                cout << "    " << ai[sem1].unmarks1[ch1 - 1].store_marks1[i][j] << "     ";
                cout << endl;
            }
        }
        cout << endl;
        marksj1 = ai[sem1].up_marksj1[ch1 - 1][1];
    unrein01:
        cout << "Are you sure you want to delete this records (Y/N) : ";
        cin >> cha1;
        if (cha1 == 'Y' || cha1 == 'y')
        {
            for (i = j; i < marksj1; i++)
            {
                ai[sem1].unmarks1[ch1 - 1].store_test_date[i][0] = ai[sem1].unmarks1[ch1 - 1].store_test_date[i + 1][0];
                ai[sem1].unmarks1[ch1 - 1].store_test_date[i][1] = ai[sem1].unmarks1[ch1 - 1].store_test_date[i + 1][1];
                ai[sem1].unmarks1[ch1 - 1].store_test_date[i][2] = ai[sem1].unmarks1[ch1 - 1].store_test_date[i + 1][2];
                ai[sem1].unmarks1[ch1 - 1].stnom1[i] = ai[sem1].unmarks1[ch1 - 1].stnom1[i + 1];
            }
            for (i = 0; i < unx; i++)
            {
                for (j1 = j; j1 < marksj1; j1++)
                {
                    ai[sem1].unmarks1[ch1 - 1].store_marks1[i][j1] = ai[sem1].unmarks1[ch1 - 1].store_marks1[i][j1 + 1];
                }
            }
            ai[sem1].up_marksj1[ch1 - 1][1] = marksj1 - 1;
            cout << "\nRecord will be deleted............\n";
        }
        else if (cha1 == 'N' || cha1 == 'n')
        {
            cout << "\nOk.........\n";
        }
        else
        {
            cout << "\nPlease enter correct option ......... ";
            goto unrein01;
        }

        getch();
        goto unentry_marks;
    }
    case 5:
    {
        return 0;
        break;
    }
    }
}

int ai_attend()
{
    do
    {
        system("cls");
        cout << "1. Take attendance\n";
        cout << "2. Display all record\n";
        cout << "3. Search particular date record\n";
        cout << "4. Modify attendance records\n";
        cout << "5. Delete particular date record \n";
        cout << "6. Back\n\n";
        cout << "Please enter your choice : ";
        cin >> ch11;

        switch (ch11)
        {
        case 1:
        {
            system("cls");
            take_ai_attend();
            getch();
            break;
        }
        case 2:
        {
            system("cls");
            display_ai_attend();
            getch();
            break;
        }
        case 3:
        {
            system("cls");
            search_ai_att();
            getch();
            break;
        }
        case 4:
        {
            system("cls");
            modify_ai_att();
            getch();
            break;
        }
        case 5:
        {
            system("cls");
            delete_ai_att();
            getch();
            break;
        }
        }
    } while (ch11 != 6);
}

int take_ai_attend()
{
    reprint = -1;
    unx = countts[sem1][1];
    if (unx == 0)
    {
        cout << "\n\nNo student record found......\n";
        getch();
        return 0;
    }
    tsub = unstsub[sem1][1];
    if (tsub == 0)
    {
        cout << "\n\nNo subject record found......\n";
        getch();
        return 0;
    }
unbacai:
    system("cls");
    cout << "Semester : " << sem1;
    cout << "\n\n";
    for (i = 0; i < tsub; i++)
    {
        cout << "Sub " << i + 1 << " : " << ai[sem1].subject[i] << endl;
    }
    cout << "\n Choose subject : ";
    cin >> subch1;
    if (subch1 > 0 && subch1 <= tsub)
    {
        goto uncontai;
    }
    else
    {
        cout << "\n\nSomthing wrong....\n";
        cout << "Please re-enter....\n";
        goto unbacai;
    }
uncontai:
    system("cls");
    cout << "Semester : " << sem1 << "\n";
    cout << "Subject  : " << ai[sem1].subject[subch1 - 1] << "\n\n";
    cout << "Date  : ";
    cin >> date;
    cout << "Month : ";
    cin >> month;
    cout << "Year  : ";
    cin >> year;

    date11 = ai[sem1].date_i11[subch1 - 1][1];
    for (i11 = 0; i11 <= date11; i11++)
    {
        if (date == ai[sem1].un_att[subch1 - 1].store_date1[i11][0] && month == ai[sem1].un_att[subch1 - 1].store_date1[i11][1] && year == ai[sem1].un_att[subch1 - 1].store_date1[i11][2])
        {
            cout << "\n\nyou can already use this date ";
            cout << "\nPlease enter correct date\n";
            getch();
            goto uncontai;
        }
    }

    ai[sem1].un_att[subch1 - 1].store_date1[date11][0] = date;
    ai[sem1].un_att[subch1 - 1].store_date1[date11][1] = month;
    ai[sem1].un_att[subch1 - 1].store_date1[date11][2] = year;
    ai[sem1].date_i11[subch1 - 1][1] = date11 + 1;

    attend11 = ai[sem1].up_attend11[subch1 - 1][1];
    unx = countts[sem1][1];
unrepeat11:
    system("cls");
    for (i11 = 0; i11 < unx; i11++)
    {
        for (j11 = 0; j11 <= attend11; j11++)
        {
            if (j11 == 0)
            {
                cout << ai[sem1].roll_no[i11] << ". " << ai[sem1].name[i11] << "\t\t: ";
            }
            if (reprint11 == i11 && j11 == attend11)
            {
                goto unskip11;
            }
            if (reprint11 >= 0 && reprint11 > i11 && j11 == attend11)
            {
                goto unbelow11;
            }
            if (j11 < attend11 && ai[sem1].un_att[subch1 - 1].attend1[i11][j11] == 'A' || ai[sem1].un_att[subch1 - 1].attend1[i11][j11] == 'P')
            {
            unbelow11:
                cout << ai[sem1].un_att[subch1 - 1].attend1[i11][j11] << "  ";
            }
        }
    unskip11:
        if (i11 < reprint11)
        {
            cout << endl;
            continue;
        }
        reprint11 = -1;
    unreenter11:
        cin >> cha11;
        if (cha11 == 'P' || cha11 == 'p')
        {
            ai[sem1].un_att[subch1 - 1].attend1[i11][attend11] = 'P';
        }
        else if (cha11 == 'A' || cha11 == 'a')
        {
            ai[sem1].un_att[subch1 - 1].attend1[i11][attend11] = 'A';
        }
        else if (cha11 == '`')
        {
            reprint11 = i11 - 1;
            goto unrepeat11;
        }
        else
        {
            cout << "Enter only absent for (A) or present for (P)";
            getch();
            goto unreenter11;
        }
    }
    attend11 = ai[sem1].up_attend11[subch1 - 1][1] = attend11 + 1;
    cout << "\n\nRecord is saved.............\n";
}

int display_ai_attend()
{
    unx = countts[sem1][1];
    if (unx == 0)
    {
        cout << "\n\nNo student record found......\n";
        getch();
        return 0;
    }
    tsub = unstsub[sem1][1];
    if (tsub == 0)
    {
        cout << "\n\nNo subject record found......\n";
        getch();
        return 0;
    }
unbacai1:
    system("cls");
    cout << "Semester : " << sem1;
    cout << "\n\n";
    for (i = 0; i < tsub; i++)
    {
        cout << "Sub " << i + 1 << " : " << ai[sem1].subject[i] << endl;
    }
    cout << "\n Choose subject : ";
    cin >> subch1;
    if (subch1 > 0 && subch1 <= tsub)
    {
        goto uncontai1;
    }
    else
    {
        cout << "\n\nSomthing wrong....\n";
        cout << "Please re-enter....\n";
        goto unbacai1;
    }
uncontai1:
    date11 = ai[sem1].date_i11[subch1 - 1][1];
    if (date11 == 0)
    {
        cout << endl
             << endl;
        cout << "No any attendance record found..............";
        getch();
        return 0;
    }
    system("cls");
    cout << "Semester : " << sem1 << "\n";
    cout << "Subject  : " << ai[sem1].subject[subch1 - 1] << "\n\n";
    cout << "Roll no.\tName\t\t   ";
    for (i11 = 0; i11 < date11; i11++)
    {
        date = ai[sem1].un_att[subch1 - 1].store_date1[i11][0];
        month = ai[sem1].un_att[subch1 - 1].store_date1[i11][1];
        year = ai[sem1].un_att[subch1 - 1].store_date1[i11][2];
        cout << date << "/" << month << "/" << year << "  ";
    }
    cout << ":T-Days = " << date11;
    cout << endl;
    attend11 = ai[sem1].up_attend11[subch1 - 1][1];
    unx = countts[sem1][1];
    for (i11 = 0; i11 < unx; i11++)
    {
        for (j11 = 0; j11 < attend11; j11++)
        {
            if (j11 == 0)
            {
                cout << "  " << ai[sem1].roll_no[i11] << ".\t\t" << ai[sem1].name[i11] << "\t\t: ";

                if (ai[sem1].un_att[subch1 - 1].attend1[i11][j11] == 'P' || ai[sem1].un_att[subch1 - 1].attend1[i11][j11] == 'A')
                {
                    cout << "    " << ai[sem1].un_att[subch1 - 1].attend1[i11][j11];
                }
                // else
                // {
                //     cout << "    "
                //          << "-";
                // }
            }
            else
            {
                if (ai[sem1].un_att[subch1 - 1].attend1[i11][j11] == 'P' || ai[sem1].un_att[subch1 - 1].attend1[i11][j11] == 'A')
                {
                    cout << "         " << ai[sem1].un_att[subch1 - 1].attend1[i11][j11];
                }
                // else
                // {
                //     cout << "         "
                //          << "-";
                // }
            }
            if (ai[sem1].un_att[subch1 - 1].attend1[i11][j11] == 'P')
            {
                present11++;
            }
            else if (ai[sem1].un_att[subch1 - 1].attend1[i11][j11] == 'A')
            {
                absent11++;
            }
        }
        cout << "      : P = " << present11 << " / A = " << absent11;
        cout << endl;
        present11 = 0;
        absent11 = 0;
    }
    cout << endl;
    cout << "\t\t\t\t:   ";
    for (i11 = 0; i11 < attend11; i11++)
    {
        for (j11 = 0; j11 < unx; j11++)
        {
            if (ai[sem1].un_att[subch1 - 1].attend1[j11][i11] == 'P')
            {
                present11++;
            }
        }
        cout << "P = " << present11 << "     ";
        present11 = 0;
    }
    cout << endl;
    cout << "\t\t\t\t:   ";
    for (i11 = 0; i11 < attend11; i11++)
    {
        for (j11 = 0; j11 < unx; j11++)
        {
            if (ai[sem1].un_att[subch1 - 1].attend1[j11][i11] == 'A')
            {
                absent11++;
            }
        }
        cout << "A = " << absent11 << "     ";
        absent11 = 0;
    }
    forcheck = 0;
}
int search_ai_att()
{
    unx = countts[sem1][1];
    if (unx == 0)
    {
        cout << "\n\nNo student record found......\n";
        getch();
        return 0;
    }
    tsub = unstsub[sem1][1];
    if (tsub == 0)
    {
        cout << "\n\nNo subject record found......\n";
        getch();
        return 0;
    }
unbacai2:
    system("cls");
    cout << "Semester : " << sem1;
    cout << "\n\n";
    for (i = 0; i < tsub; i++)
    {
        cout << "Sub " << i + 1 << " : " << ai[sem1].subject[i] << endl;
    }
    cout << "\n Choose subject : ";
    cin >> subch1;
    if (subch1 > 0 && subch1 <= tsub)
    {
        goto uncontai2;
    }
    else
    {
        cout << "\n\nSomthing wrong....\n";
        cout << "Please re-enter....\n";
        goto unbacai2;
    }
uncontai2:
    system("cls");
    cout << "Semester : " << sem1 << "\n";
    cout << "Subject  : " << ai[sem1].subject[subch1 - 1] << "\n\n";
    cout << "Date  : ";
    cin >> date;
    cout << "Month : ";
    cin >> month;
    cout << "Year  : ";
    cin >> year;
    loc11 = -1;
    date11 = ai[sem1].date_i11[subch1 - 1][1];
    for (i11 = 0; i11 <= date11; i11++)
    {
        if (date == ai[sem1].un_att[subch1 - 1].store_date1[i11][0] && month == ai[sem1].un_att[subch1 - 1].store_date1[i11][1] && year == ai[sem1].un_att[subch1 - 1].store_date1[i11][2])
        {
            loc11 = i11;
        }
    }
    if (loc11 == -1)
    {
        cout << "\n\nNo record found..........";
        getch();
        return 0;
    }
    unx = countts[sem1][1];
    cout << "Roll no.\tName\t\tAttend" << endl;
    for (i11 = 0; i11 < unx; i11++)
    {
        cout << "  " << ai[sem1].roll_no[i11] << ".\t\t" << ai[sem1].name[i11] << "\t\t: ";
        cout << ai[sem1].un_att[subch1 - 1].attend1[i11][loc11] << " ";
        cout << endl;
    }
    loc11 = -1;
}
int modify_ai_att()
{
    system("cls");
    cout << "1. Change a particular date records " << endl;
    cout << "2. Change a particular student records" << endl;
    cout << "3. Back" << endl
         << endl;
    cout << "Enter your choice : ";
    cin >> ch11;
    system("cls");
    if (ch11 == 1)
    {
        forcheck = -1;
        display_ai_attend();
        if (forcheck == -1)
        {
            return 0;
        }

        cout << "\n\n";
        cout << "Date  : ";
        cin >> date;
        cout << "Month : ";
        cin >> month;
        cout << "Year  : ";
        cin >> year;
        loc11 = -1;
        date11 = ai[sem1].date_i11[subch1 - 1][1];
        for (i11 = 0; i11 <= date11; i11++)
        {
            if (date == ai[sem1].un_att[subch1 - 1].store_date1[i11][0] && month == ai[sem1].un_att[subch1 - 1].store_date1[i11][1] && year == ai[sem1].un_att[subch1 - 1].store_date1[i11][2])
            {
                loc11 = i11;
            }
        }
        if (loc11 == -1)
        {
            cout << "\n\nNo record found..........";
            getch();
            return 0;
        }
        system("cls");
        cout << "Semester : " << sem1 << "\n";
        cout << "Subject  : " << ai[sem1].subject[subch1 - 1] << "\n";
        cout << "Date : " << date << endl;
        cout << "Month : " << month << endl;
        cout << "Year : " << year << endl
             << endl;
        unx = countts[sem1][1];
        cout << "Roll no.\tName\t\tAttend" << endl;
        for (i11 = 0; i11 < unx; i11++)
        {
            cout << "  " << ai[sem1].roll_no[i11] << ".\t\t" << ai[sem1].name[i11] << "\t\t: ";
            cout << ai[sem1].un_att[subch1 - 1].attend1[i11][loc11] << " ";
            cout << endl;
        }
        cout << "\n\n";
        for (i11 = 0; i11 < unx; i11++)
        {
            cout << "  " << ai[sem1].roll_no[i11] << ".\t\t" << ai[sem1].name[i11] << "\t\t: ";
        reenter1101:
            cin >> cha11;
            if (cha11 == 'P' || cha11 == 'p')
            {
                ai[sem1].un_att[subch1 - 1].attend1[i11][loc11] = 'P';
            }
            else if (cha11 == 'A' || cha11 == 'a')
            {
                ai[sem1].un_att[subch1 - 1].attend1[i11][loc11] = 'A';
            }
            else
            {
                cout << "Enter only absent for (A) or present for (P)";
                getch();
                goto reenter1101;
            }
        }
        cout << "\n\nRecord will be updated............";

        loc11 = -1;
    }
    else if (ch11 == 2)
    {
        forcheck = -1;
        display_ai_attend();
        if (forcheck == -1)
        {
            return 0;
        }
        cout << "\n\n";
        cout << "\n\nEnter roll no. : ";
        cin >> roll11;
        unx = countts[sem1][1];
        for (i11 = 0; i11 < unx; i11++)
        {
            if (roll11 == ai[sem1].roll_no[i11])
            {
                loc11 = i11;
            }
        }
        if (loc11 == -1)
        {
            cout << "\n\nNo record found..........";
            getch();
            return 0;
        }
        system("cls");

        cout << "Semester : " << sem1 << "\n";
        cout << "Subject  : " << ai[sem1].subject[subch1 - 1] << "\n\n";
        cout << "Roll no.\tName" << endl;
        cout << "  " << ai[sem1].roll_no[loc11] << ".\t\t" << ai[sem1].name[loc11] << endl
             << endl;
        date11 = ai[sem1].date_i11[subch1 - 1][1];
        for (i11 = 0; i11 < date11; i11++)
        {
            date = ai[sem1].un_att[subch1 - 1].store_date1[i11][0];
            month = ai[sem1].un_att[subch1 - 1].store_date1[i11][1];
            year = ai[sem1].un_att[subch1 - 1].store_date1[i11][2];
            cout << "\t" << date << "/" << month << "/" << year << "  :  ";
            cout << ai[sem1].un_att[subch1 - 1].attend1[loc11][i11];
            cout << endl;
        }
        cout << endl
             << endl;
        for (i11 = 0; i11 < date11; i11++)
        {
            date = ai[sem1].un_att[subch1 - 1].store_date1[i11][0];
            month = ai[sem1].un_att[subch1 - 1].store_date1[i11][1];
            year = ai[sem1].un_att[subch1 - 1].store_date1[i11][2];
            cout << "\t" << date << "/" << month << "/" << year << "  :  ";

        reenter1121:
            cin >> cha11;
            if (cha11 == 'P' || cha11 == 'p')
            {
                ai[sem1].un_att[subch1 - 1].attend1[loc11][i11] = 'P';
            }
            else if (cha11 == 'A' || cha11 == 'a')
            {
                ai[sem1].un_att[subch1 - 1].attend1[loc11][i11] = 'A';
            }
            else
            {
                cout << "Enter only absent for (A) or present for (P)";
                getch();
                goto reenter1121;
            }
        }
        cout << "\n\nRecord will be updated............";

        loc11 = -1;
    }
    else if (ch11 == 3)
    {
        return 0;
    }
}
int delete_ai_att()
{
    forcheck = -1;
    display_ai_attend();
    if (forcheck == -1)
    {
        return 0;
    }

    cout << "\n\n";
    cout << "Date  : ";
    cin >> date;
    cout << "Month : ";
    cin >> month;
    cout << "Year  : ";
    cin >> year;
    loc11 = -1;
    date11 = ai[sem1].date_i11[subch1 - 1][1];
    for (i11 = 0; i11 <= date11; i11++)
    {
        if (date == ai[sem1].un_att[subch1 - 1].store_date1[i11][0] && month == ai[sem1].un_att[subch1 - 1].store_date1[i11][1] && year == ai[sem1].un_att[subch1 - 1].store_date1[i11][2])
        {
            loc11 = i11;
        }
    }
    if (loc11 == -1)
    {
        cout << "\n\nNo record found..........";
        getch();
        return 0;
    }
unagain_11:
    system("cls");
    cout << "Semester : " << sem1 << "\n";
    cout << "Subject  : " << ai[sem1].subject[subch1 - 1] << "\n";
    cout << "Date : " << date << endl;
    cout << "Month : " << month << endl;
    cout << "Year : " << year << endl
         << endl;
    unx = countts[sem1][1];
    cout << "Roll no.\tName\t\tAttend" << endl;
    for (i11 = 0; i11 < unx; i11++)
    {
        cout << "  " << ai[sem1].roll_no[i11] << ".\t\t" << ai[sem1].name[i11] << "\t\t: ";
        cout << ai[sem1].un_att[subch1 - 1].attend1[i11][loc11] << " ";
        cout << endl;
    }

    cout << "\n\nAre you sure you want to delete this record (Y/N) : ";
    cin >> cha11;
    date11 = ai[sem1].date_i11[subch1 - 1][1];
    unx = countts[sem1][1];
    attend11 = ai[sem1].up_attend11[subch1 - 1][1];
    if (cha11 == 'Y' || cha11 == 'y')
    {
        for (i11 = loc11; i11 < date11; i11++)
        {
            ai[sem1].un_att[subch1 - 1].store_date1[i11][0] = ai[sem1].un_att[subch1 - 1].store_date1[i11 + 1][0];
            ai[sem1].un_att[subch1 - 1].store_date1[i11][1] = ai[sem1].un_att[subch1 - 1].store_date1[i11 + 1][1];
            ai[sem1].un_att[subch1 - 1].store_date1[i11][2] = ai[sem1].un_att[subch1 - 1].store_date1[i11 + 1][2];
        }
        for (i11 = 0; i11 < unx; i11++)
        {
            for (j11 = loc11; j11 < attend11; j11++)
            {
                ai[sem1].un_att[subch1 - 1].attend1[i11][j11] = ai[sem1].un_att[subch1 - 1].attend1[i11][j11 + 1];
            }
        }
        ai[sem1].up_attend11[subch1 - 1][1] = attend11 - 1;
        ai[sem1].date_i11[subch1 - 1][1] = date11 - 1;
        cout << "\n\nRecord will be deleted.......";
    }
    else if (cha11 == 'N' || cha11 == 'n')
    {
        cout << "\n\n Ok......";
        getch();
        return 0;
    }
    else
    {
        cout << "\nWrong choice\n";
        cout << "Please choose correct option";

        goto unagain_11;
    }

    loc11 = -1;
}

int forexam()
{
unentry_marks1:
    system("cls");
    cout << "1. Entry Marks" << endl;
    cout << "2. Display " << endl;
    cout << "3. Modify " << endl;
    cout << "4. Delete " << endl;
    cout << "5. Back" << endl
         << endl;
    cout << "Please enter your choice : ";
    cin >> ch1;
    switch (ch1)
    {
    case 1:
    {
        unx = countts[sem1][1];
        if (unx == 0)
        {
            cout << "\n\nNo student record found......\n";
            getch();
            goto unentry_marks1;
        }
        tsub = unstsub[sem1][1];
        if (tsub == 0)
        {
            cout << "\n\nNo subject record found......\n";
            getch();
            goto unentry_marks1;
        }
        else
        {
        unbac11:
            system("cls");
            cout << "Semester : " << sem1;
            cout << "\n\n";
            for (i = 0; i < tsub; i++)
            {
                cout << "Sub " << i + 1 << " : " << ai[sem1].subject[i] << endl;
            }
            cout << "\n Choose subject : ";
            cin >> ch1;
            if (ch1 > 0 && ch1 <= tsub)
            {
                goto uncont11;
            }
            else
            {
                cout << "\n\nSomthing wrong....\n";
                cout << "Please re-enter....\n";
                goto unbac11;
            }
        uncont11:
            cout << "Date  : ";
            cin >> date;
            cout << "Month : ";
            cin >> month;
            cout << "Year  : ";
            cin >> year;

            marksj1 = ai[sem1].up_marksj2[ch1 - 1][1];

            ai[sem1].unmarks1[ch1 - 1].store_exam_date[marksj1][0] = date;
            ai[sem1].unmarks1[ch1 - 1].store_exam_date[marksj1][1] = month;
            ai[sem1].unmarks1[ch1 - 1].store_exam_date[marksj1][2] = year;

            system("cls");
            cout << "Semester   : " << sem1 << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl;
            cout << "Date    : " << date << "/" << month << "/" << year << endl
                 << endl;
            cout << "Enter full marks : ";
            cin >> ai[sem1].unmarks1[ch1 - 1].stnom2[marksj1];
            unx = countts[sem1][1];
            marksj1 = ai[sem1].up_marksj2[ch1 - 1][1];
            cout << endl;
            unx = countts[sem1][1];
            for (i = 0; i < unx; i++)
            {
            unentermarks11:
                cout << ai[sem1].roll_no[i] << ". " << ai[sem1].name[i] << "\t\t:  ";
                cin >> enterno1;
                if (enterno1 <= ai[sem1].unmarks1[ch1 - 1].stnom2[marksj1])
                {
                    ai[sem1].unmarks1[ch1 - 1].store_marks2[i][marksj1] = enterno1;
                }
                else
                {
                    cout << "\nEnter no. is wrong because this no. is greater then full marks,"
                         << "\nso, please re-enter the marks.\n\n";
                    goto unentermarks11;
                }
            }
            ai[sem1].up_marksj2[ch1 - 1][1] = marksj1 + 1;
            cout << "\n\nRecord will be saved........\n";
            getch();
            goto unentry_marks1;
        }
    }
    case 2:
    {
    unbac21:
        system("cls");
        cout << "Semester : " << sem1;
        tsub = unstsub[sem1][1];
        if (tsub == 0)
        {
            cout << "\n\nNo record found......\n";
            getch();
            goto unentry_marks1;
        }
        else
        {
            cout << "\n\n";
            for (i = 0; i < tsub; i++)
            {
                cout << "Sub " << i + 1 << " : " << ai[sem1].subject[i] << endl;
            }
            cout << "\n Choose subject : ";
            cin >> ch1;
            if (ch1 > 0 && ch1 <= tsub)
            {
                goto uncont21;
            }
            else
            {
                cout << "\n\nSomthing wrong....\n";
                cout << "Please re-enter....\n";
                goto unbac21;
            }
        uncont21:
            marksj1 = ai[sem1].up_marksj2[ch1 - 1][1];
            if (marksj1 == 0)
            {
                cout << "\n\nNo record found......\n";
                getch();
                goto unentry_marks1;
            }
            system("cls");
            cout << "Semester: " << sem1 << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl
                 << endl;
            cout << "Roll no.\tName\t\t   ";
            for (i = 0; i < marksj1; i++)
            {
                date = ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][0];
                month = ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][1];
                year = ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][2];
                cout << date << "/" << month << "/" << year << "  ";
            }
            cout << endl;
            for (i = 0; i < marksj1; i++)
            {
                if (i == 0)
                {
                    cout << "               \t    \t\t  F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom2[i];
                }
                else
                {
                    cout << "  F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom2[i];
                }
            }
            cout << endl;

            unx = countts[sem1][1];

            for (i = 0; i < unx; i++)
            {
                cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
                for (j = 0; j < marksj1; j++)
                {
                    cout << "    " << ai[sem1].unmarks1[ch1 - 1].store_marks2[i][j] << "     ";
                }
                cout << endl;
            }
        }
        getch();
        goto unentry_marks1;
    }
    case 3:
    {
    unbac31:
        system("cls");
        cout << "Semester : " << sem1;
        tsub = unstsub[sem1][1];
        if (tsub == 0)
        {
            cout << "\n\nNo record found......\n";
            getch();
            goto unentry_marks1;
        }
        else
        {
            cout << "\n\n";
            for (i = 0; i < tsub; i++)
            {
                cout << "Sub " << i + 1 << " : " << ai[sem1].subject[i] << endl;
            }
            cout << "\n Choose subject : ";
            cin >> ch1;
            if (ch1 > 0 && ch1 <= tsub)
            {
                goto uncont31;
            }
            else
            {
                cout << "\n\nSomthing wrong....\n";
                cout << "Please re-enter....\n";
                goto unbac31;
            }
        uncont31:
            marksj1 = ai[sem1].up_marksj2[ch1 - 1][1];
            if (marksj1 == 0)
            {
                cout << "\n\nNo record found......\n";
                getch();
                goto unentry_marks1;
            }
        unback011:
            system("cls");
            cout << "Class   : " << create_class << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl
                 << endl;
            cout << "Roll no.\tName\t\t   ";
            for (i = 0; i < marksj1; i++)
            {
                date = ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][0];
                month = ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][1];
                year = ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][2];
                cout << date << "/" << month << "/" << year << "  ";
            }
            cout << endl;
            for (i = 0; i < marksj1; i++)
            {
                if (i == 0)
                {
                    cout << "               \t    \t\t   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom2[i];
                }
                else
                {
                    cout << "  F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom2[i];
                }
            }
            cout << endl;
            unx = countts[sem1][1];

            for (i = 0; i < unx; i++)
            {
                cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
                for (j = 0; j < marksj1; j++)
                {
                    cout << "    " << ai[sem1].unmarks1[ch1 - 1].store_marks2[i][j] << "     ";
                }
                cout << endl;
            }
            cout << endl;
            cout << "Enter date : ";
            cin >> date;
            cout << "     month : ";
            cin >> month;
            cout << "      year : ";
            cin >> year;
            inc = 0;
            for (i = 0; i < marksj1; i++)
            {
                if (date == ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][0] && month == ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][1] && year == ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][2])
                {
                    location1[inc] = i;
                    inc++;
                }
            }
            if (inc == 0)
            {
                cout << "\n\nSomthing wrong.........\n";
                cout << "Please try again...........\n";
                getch();
                goto unback011;
            }
            if (inc == 1)
            {
                j = location1[0];
                goto unmiddle11;
            }
        unback021:
            system("cls");
            cout << "Class   : " << create_class << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl
                 << endl;
            cout << "Roll no.\tName\t\t   ";
            for (i = 0; i < inc; i++)
            {
                j = location1[i];
                date = ai[sem1].unmarks1[ch1 - 1].store_exam_date[j][0];
                month = ai[sem1].unmarks1[ch1 - 1].store_exam_date[j][1];
                year = ai[sem1].unmarks1[ch1 - 1].store_exam_date[j][2];
                cout << date << "/" << month << "/" << year << "  ";
            }
            cout << endl;
            for (i = 0; i < inc; i++)
            {
                j = location1[i];
                if (i == 0)
                {
                    cout << "               \t    \t\t   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom2[j];
                }
                else
                {
                    cout << "   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom2[j];
                }
            }
            cout << endl;
            unx = countts[sem1][1];

            for (i = 0; i < unx; i++)
            {
                cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
                for (j = 0; j < inc; j++)
                {
                    q1 = location1[j];
                    cout << "    " << ai[sem1].unmarks1[ch1 - 1].store_marks2[i][q1] << "     ";
                }
                cout << endl;
            }
            cout << endl;
            cout << "Choose any one : ";
            cin >> q1;
            if (q1 <= 0)
            {
                cout << "\n\nSomthing wrong.........\n";
                cout << "Please try again...........\n";
                getch();
                goto unback021;
            }
            if (q1 > inc)
            {
                cout << "\n\nSomthing wrong.........\n";
                cout << "Please try again...........\n";
                getch();
                goto unback021;
            }
            j = location1[q1 - 1];
        unmiddle11:
            system("cls");
            cout << "Class   : " << create_class << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl
                 << endl;
            cout << "Roll no.\tName\t\t   ";

            date = ai[sem1].unmarks1[ch1 - 1].store_exam_date[j][0];
            month = ai[sem1].unmarks1[ch1 - 1].store_exam_date[j][1];
            year = ai[sem1].unmarks1[ch1 - 1].store_exam_date[j][2];
            cout << date << "/" << month << "/" << year << "  " << endl;
            cout << "               \t    \t\t   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom2[j];
            cout << endl;
            unx = countts[sem1][1];

            for (i = 0; i < unx; i++)
            {
                cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
                cout << "    " << ai[sem1].unmarks1[ch1 - 1].store_marks2[i][j] << "     ";
                cout << endl;
            }
        }
        cout << endl;
        cout << "Re-enter marks :-" << endl
             << endl;
        cout << "Enter full marks : ";
        cin >> ai[sem1].unmarks1[ch1 - 1].stnom2[j];
        cout << endl;
        for (i = 0; i < unx; i++)
        {
        unentermarks21:
            cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
            cin >> enterno1;
            if (enterno1 <= ai[sem1].unmarks1[ch1 - 1].stnom2[j])
            {
                ai[sem1].unmarks1[ch1 - 1].store_marks2[i][j] = enterno1;
            }
            else
            {
                cout << "\nEnter no. is wrong because this no. is greater then full marks,"
                     << "\nso, please re-enter the marks.\n\n";
                goto unentermarks21;
            }
        }
        cout << "\n\nRecord will be updated............";
        getch();
        goto unentry_marks1;
    }
    case 4:
    {
        system("cls");
    unbac41:
        cout << "Semester : " << sem1;
        tsub = unstsub[sem1][1];
        if (tsub == 0)
        {
            cout << "\n\nNo record found......\n";
            getch();
            goto unentry_marks1;
        }
        else
        {
            cout << "\n\n";
            for (i = 0; i < tsub; i++)
            {
                cout << "Sub " << i + 1 << " : " << ai[sem1].subject[i] << endl;
            }
            cout << "\n Choose subject : ";
            cin >> ch1;
            if (ch1 > 0 && ch1 <= tsub)
            {
                goto uncont41;
            }
            else
            {
                cout << "\n\nSomthing wrong....\n";
                cout << "Please re-enter....\n";
                goto unbac41;
            }
        uncont41:
            marksj1 = ai[sem1].up_marksj2[ch1 - 1][1];
            if (marksj1 == 0)
            {
                cout << "\n\nNo record found......\n";
                getch();
                goto unentry_marks1;
            }
        unback051:
            system("cls");
            cout << "Class   : " << create_class << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl
                 << endl;
            cout << "Roll no.\tName\t\t   ";
            for (i = 0; i < marksj1; i++)
            {
                date = ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][0];
                month = ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][1];
                year = ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][2];
                cout << date << "/" << month << "/" << year << "  ";
            }
            cout << endl;
            for (i = 0; i < marksj1; i++)
            {
                if (i == 0)
                {
                    cout << "               \t    \t\t   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom2[i];
                }
                else
                {
                    cout << "  F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom2[i];
                }
            }
            cout << endl;
            unx = countts[sem1][1];

            for (i = 0; i < unx; i++)
            {
                cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
                for (j = 0; j < marksj1; j++)
                {
                    cout << "    " << ai[sem1].unmarks1[ch1 - 1].store_marks2[i][j] << "     ";
                }
                cout << endl;
            }
            cout << endl;
            cout << "Enter date : ";
            cin >> date;
            cout << "     month : ";
            cin >> month;
            cout << "      year : ";
            cin >> year;
            inc = 0;
            for (i = 0; i < marksj1; i++)
            {
                if (date == ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][0] && month == ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][1] && year == ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][2])
                {
                    location1[inc] = i;
                    inc++;
                }
            }
            if (inc == 0)
            {
                cout << "\n\nSomthing wrong.........\n";
                cout << "Please try again...........\n";
                getch();
                goto unback051;
            }

            if (inc == 1)
            {
                j = location1[0];
                goto unmiddle21;
            }
        unback031:
            system("cls");
            cout << "Semester   : " << sem1 << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl
                 << endl;
            cout << "Roll no.\tName\t\t   ";
            for (i = 0; i < inc; i++)
            {
                j = location1[i];
                date = ai[sem1].unmarks1[ch1 - 1].store_exam_date[j][0];
                month = ai[sem1].unmarks1[ch1 - 1].store_exam_date[j][1];
                year = ai[sem1].unmarks1[ch1 - 1].store_exam_date[j][2];
                cout << date << "/" << month << "/" << year << "  ";
            }
            cout << endl;
            for (i = 0; i < inc; i++)
            {
                j = location1[i];
                if (i == 0)
                {
                    cout << "               \t    \t\t   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom2[j];
                }
                else
                {
                    cout << "   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom2[j];
                }
            }
            cout << endl;
            unx = countts[sem1][1];

            for (i = 0; i < unx; i++)
            {
                cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
                for (j = 0; j < inc; j++)
                {
                    q1 = location1[j];
                    cout << "    " << ai[sem1].unmarks1[ch1 - 1].store_marks2[i][q1] << "     ";
                }
                cout << endl;
            }
            cout << endl;
            cout << "Choose any one : ";
            cin >> q1;
            if (q1 <= 0)
            {
                cout << "\n\nSomthing wrong.........\n";
                cout << "Please try again...........\n";
                getch();
                goto unback031;
            }
            if (q1 > inc)
            {
                cout << "\n\nSomthing wrong.........\n";
                cout << "Please try again...........\n";
                getch();
                goto unback031;
            }
            j = location1[q1 - 1];
        unmiddle21:
            system("cls");
            cout << "Class   : " << create_class << endl;
            cout << "Subject : " << ai[sem1].subject[ch1 - 1] << endl
                 << endl;
            cout << "Roll no.\tName\t\t   ";

            date = ai[sem1].unmarks1[ch1 - 1].store_exam_date[j][0];
            month = ai[sem1].unmarks1[ch1 - 1].store_exam_date[j][1];
            year = ai[sem1].unmarks1[ch1 - 1].store_exam_date[j][2];
            cout << date << "/" << month << "/" << year << "  " << endl;
            cout << "               \t    \t\t   F.M = " << ai[sem1].unmarks1[ch1 - 1].stnom2[j];
            cout << endl;
            unx = countts[sem1][1];
            for (i = 0; i < unx; i++)
            {
                cout << "  " << ai[sem1].roll_no[i] << ".\t\t" << ai[sem1].name[i] << "\t\t: ";
                cout << "    " << ai[sem1].unmarks1[ch1 - 1].store_marks2[i][j] << "     ";
                cout << endl;
            }
        }
        cout << endl;
        marksj1 = ai[sem1].up_marksj1[ch1 - 1][1];
    unrein011:
        cout << "Are you sure you want to delete this records (Y/N) : ";
        cin >> cha1;
        if (cha1 == 'Y' || cha1 == 'y')
        {
            for (i = j; i < marksj1; i++)
            {
                ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][0] = ai[sem1].unmarks1[ch1 - 1].store_exam_date[i + 1][0];
                ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][1] = ai[sem1].unmarks1[ch1 - 1].store_exam_date[i + 1][1];
                ai[sem1].unmarks1[ch1 - 1].store_exam_date[i][2] = ai[sem1].unmarks1[ch1 - 1].store_exam_date[i + 1][2];
                ai[sem1].unmarks1[ch1 - 1].stnom2[i] = ai[sem1].unmarks1[ch1 - 1].stnom2[i + 1];
            }
            for (i = 0; i < unx; i++)
            {
                for (j1 = j; j1 < marksj1; j1++)
                {
                    ai[sem1].unmarks1[ch1 - 1].store_marks2[i][j1] = ai[sem1].unmarks1[ch1 - 1].store_marks2[i][j1 + 1];
                }
            }
            ai[sem1].up_marksj2[ch1 - 1][1] = marksj1 - 1;
            cout << "\nRecord will be deleted............\n";
        }
        else if (cha1 == 'N' || cha1 == 'n')
        {
            cout << "\nOk.........\n";
        }
        else
        {
            cout << "\nPlease enter correct option ......... ";
            goto unrein011;
        }

        getch();
        goto unentry_marks1;
    }
    case 5:
    {
        return 0;
        break;
    }
    }
}

void aicstre()
{
    system("cls");
    cout << "*******Create Student Record*******\n";
    cout << "Semester : " << sem1 << endl
         << endl;
    cout << "Enter number of student : ";
    cin >> unno1;
    unx = countts[sem1][1];
    unk = unx + unno1;
    cout << "\n\n";
    for (i = unx; i < unk; i++)
    {

    unroll:
        cout << "Enter roll no.          : ";
        cin >> ai[sem1].roll_no[i];
        y = countts[sem1][1];
        for (j = 0; j < y; j++)
        {
            if (ai[sem1].roll_no[i] == ai[sem1].roll_no[j])
            {
                cout << "\nthis roll no. is already exist in record \n"
                     << "if you change the record please go to modify \n"
                     << "student record\n"
                     << endl;
                getch();
                goto unroll;
            }
        }

        gets(null);
        cout << "Enter student name      : ";
        gets(ai[sem1].name[i]);

        cout << "Enter student phone no. : ";
        gets(ai[sem1].phone_no[i]);

        cout << "Enter student address   : ";
        gets(ai[sem1].address[i]);
        cout << "\n\n";

        countts[sem1][1] = i + 1;
    }
    cout << "Record will be save............";
}

//*****************************************************************************************************************************************************************************
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main()
{
    // system("color 0a");
    system("cls");
    cout << "\n\n\t\tPROJECT MOON VERSION.1\n\n";
    cout << "\t   MADE BY : ARVIND KUMAR GUPTA";
    cout << "\n In this project you can create many classes and \n"
         << " save the student records. you can also display all students\n"
         << " records, search particular student record, modify student\n"
         << " records and delete student reords and many so on....";

    cout << "\n\n Press enter for continue.....";
    getch();
    system("cls");
    int choice1;
    do
    {
        system("cls");
        cout << "1. School" << endl;
        cout << "2. Collage" << endl;
        cout << "3. University" << endl;
        cout << "4. Exit" << endl
             << endl;
        cout << "Enter your choice : ";
        cin >> choice1;
        switch (choice1)
        {
        case 1:
        {
            school();
            break;
        }
        case 2:
        {

            collage();
            break;
        }
        case 3:
        {
            university();
            break;
        }
        case 4:
        {
            break;
        }

        default:
        {
            cout << "Wrong choice.......\n";
            cout << "Please try again...";
            getch();
        }
        }
    } while (choice1 != 4);

    return 0;
}
