#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
    system("cls");
    char ch,ch1;
    double area, b, h, a, s, l, diag, pm;
    do
    {
        system("cls");
        cout << "***** Menu *****" << endl;
        cout << endl;
        cout << " 1. Triangle" << endl;
        cout << " 2. Rectangle" << endl;
        cout << " 3. Square" << endl;
        cout << " 4. Circle" << endl;
        cout << " 5. Cube" << endl;
        cout << " 6. Sphere" << endl;
        cout << " 7. Rhombus" << endl;
        cout << " 8. Cylinder" << endl;
        cout << " 9. Cone" << endl<< endl;

        cout << "Press '0' to Exit" << endl;
        cout << endl;
        cout << "Enter your choice" << endl;
        cin >> ch;
        switch (ch)
        {
            //    ******************************************************************************

        case '1':
        {
            system("cls");
            do
            {
                cout << "***** Triangle Menu *****" << endl;
                cout << endl;
                cout << "1.Area" << endl;
                cout << "2.Perimeter" << endl;
                cout << "3.Semi-Perimeter" << endl;
                cout << "4.Using Heron's Formula" << endl;
                cout << "5.Back" << endl;
                cout << endl;
                cout << "Enter your choice" << endl;
                cin >> ch1;

                switch (ch1)
                {
                case '1':
                    system("cls");
                    cout << "enter base = ";
                    cin >> b;
                    cout << "enter height = ";
                    cin >> h;
                    system("cls");
                    cout << "Given, " << endl;
                    cout << "\tbase = " << b << endl;
                    cout << "\theight = " << h << endl;
                    cout << "sol:," << endl;
                    cout << "area of triangle = 1/2*b*h" << endl;
                    cout << "\t         = 1/2*" << b << "*" << h << endl
                         << endl;
                    area = 0.5 * b * h;
                    cout << "\t    area = " << area << endl;
                    cout << endl
                         << endl;

                    break;

                case '2':
                    system("cls");

                    cout << "enter side 'a' = ";
                    cin >> a;
                    cout << "enter side 'b' = ";
                    cin >> b;
                    cout << "enter side 'c' = ";
                    cin >> h;
                    system("cls");
                    pm = a + b + h;
                    cout << " Given," << endl;
                    cout << "\t side 'a' = " << a << endl;
                    cout << "\t side 'b' = " << b << endl;
                    cout << "\t side 'c' = " << h << endl;
                    cout << " Soln, " << endl;
                    cout << " Perimeter of triangle = a+b+c " << endl;
                    cout << "                       = " << a << "+" << b << "+" << h << endl;

                    cout << "\t     perimeter = " << pm << endl;

                    cout << endl
                         << endl;

                    break;

                case '3':
                    system("cls");

                    cout << "enter side 'a' = ";
                    cin >> a;
                    cout << "enter side 'b' = ";
                    cin >> b;
                    cout << "enter side 'c' = ";
                    cin >> h;
                    system("cls");
                    pm = (a + b + h) / 2;
                    cout << " Given," << endl;
                    cout << "\t side 'a' = " << a << endl;
                    cout << "\t side 'b' = " << b << endl;
                    cout << "\t side 'c' = " << h << endl;
                    cout << " Soln, " << endl;
                    cout << " semi-perimeter of triangle = (a+b+c)/2 " << endl;
                    cout << "                            = ( " << a << "+" << b << "+" << h << ")/2" << endl;

                    cout << "\t     semi-perimeter = " << pm << endl;

                    cout << endl
                         << endl;

                    break;

                case '4':
                    system("cls");

                    cout << "enter value of 's' = ";
                    cin >> s;

                    cout << "enter side 'a' = ";
                    cin >> a;
                    cout << "enter side 'b' = ";
                    cin >> b;
                    cout << "enter side 'c' = ";
                    cin >> h;
                    system("cls");
                    pm = sqrt(s * (s - a) * (s - b) * (s - h));
                    cout << " Given," << endl;
                    cout << "\t side 'a' = " << a << endl;
                    cout << "\t side 'b' = " << b << endl;
                    cout << "\t side 'c' = " << h << endl;
                    cout << " Soln, " << endl;
                    cout << " Heron's Formula = under root(s*(s-a)*(s-b)*(s-c)) " << endl;
                    cout << "                 = under root(" << s << "*(" << s << "-" << a << ")*(" << s << "-" << b << ")*(" << s << "-" << h << "))" << endl;

                    cout << "\t    area = " << pm << "  feet sqr" << endl;

                    cout << endl
                         << endl;

                    break;

                case '5':
                    break;
                default:
                    cout << "wrong choice" << endl;
                    break;
                }

            } while (ch1 >= '1' && ch1 <= '4');
        }
        break;

            //  *******************************************************************************

        case '2':
        {
            system("cls");
            do
            {
                cout << "***** Rectangle menu *****" << endl;
                cout << endl;
                cout << "1.Area" << endl;
                cout << "2.Perimeter" << endl;
                cout << "3.Diagonal" << endl;
                cout << "4.Area of 4 sides of wall" << endl;
                cout << "5.Back" << endl;
                cout << endl;
                cout << "enter your choice" << endl;
                cin >> ch1;

                switch (ch1)
                {
                case '1':
                    system("cls");
                    cout << "enter length = ";
                    cin >> l;
                    cout << "enter breadth = ";
                    cin >> b;
                    system("cls");

                    area = l * b;
                    cout << "area = " << area << endl;

                    cout << endl
                         << endl;

                    break;
                case '2':
                    system("cls");
                    cout << "enter length = ";
                    cin >> l;
                    cout << "enter breadth = ";
                    cin >> b;
                    system("cls");
                    // cout<<"length = "<<l<<endl;
                    // cout<<"breadth = "<<b<<endl;
                    pm = 2 * (l + b);
                    cout << "perimeter = " << pm << endl;
                    cout << endl
                         << endl;

                    break;
                case '3':
                    system("cls");
                    cout << "enter length = ";
                    cin >> l;
                    cout << "enter breadth = ";
                    cin >> b;
                    system("cls");
                    // cout<<"length = "<<l<<endl;
                    // cout<<"breadth = "<<b<<endl;
                    diag = sqrt(l * l + b * b);
                    cout << "diagonal = " << diag << endl;
                    cout << endl
                         << endl;

                    break;

                case '4':
                    system("cls");
                    cout << "enter length = ";
                    cin >> l;
                    cout << "enter breadth = ";
                    cin >> b;
                    cout << "enter height = ";
                    cin >> h;
                    system("cls");

                    area = 2 * (l + b) * h;
                    cout << "area = " << area << endl;

                    cout << endl
                         << endl;

                    break;

                case '5':
                    break;

                default:
                    cout << "wrong choice" << endl;
                    break;
                }

            } while (ch1 >= '1' && ch1 <= '4');
            break;
        }

            //    ***********************************************************************************

        case '3':
        {
            system("cls");
            do
            {
                cout << "***** Square menu *****" << endl;
                cout << endl;
                cout << "1.Area of square" << endl;
                cout << "2.Perimeter of square" << endl;
                cout << "3.Diagonal of square" << endl;
                cout << "4.Back" << endl;
                cout << endl;
                cout << "enter your choice" << endl;
                cin >> ch1;

                switch (ch1)
                {
                case '1':
                    system("cls");
                    cout << "enter value of side = ";
                    cin >> a;
                    system("cls");

                    area = a * a;
                    cout << "area = " << area << endl;

                    cout << endl
                         << endl;

                    break;
                case '2':
                    system("cls");
                    cout << "enter value of side = ";
                    cin >> a;
                    system("cls");
                    // cout<<"length = "<<l<<endl;
                    // cout<<"breadth = "<<b<<endl;
                    pm = 4 * a;
                    cout << "perimeter = " << pm << endl;
                    cout << endl
                         << endl;

                    break;
                case '3':
                    system("cls");
                    cout << "enter value of side = ";
                    cin >> a;
                    system("cls");
                    // cout<<"length = "<<l<<endl;
                    // cout<<"breadth = "<<b<<endl;
                    diag = sqrt(2) * a;
                    cout << "diagonal = " << diag << endl;
                    cout << endl
                         << endl;

                    break;
                case '4':
                    break;

                default:
                    cout << "wrong choice" << endl;
                    break;
                }

            } while (ch1 >= '1' && ch1 <= '3');
            break;
        }

        break;
        case '4':
        {
            system("cls");
            do
            {
                cout << "***** Circle menu *****" << endl;
                cout << endl;
                cout << "1.Area " << endl;
                cout << "2.Area of semi-cicle" << endl;
                cout << "3.Area of quadrant " << endl;
                cout << "4.Diameter" << endl;
                cout << "5.Circumference " << endl;
                cout << "6.Back" << endl;
                cout << endl;
                cout << "enter your choice" << endl;
                cin >> ch1;

                switch (ch1)
                {
                case '1':
                    system("cls");
                    cout << "enter value of radius = ";
                    cin >> a;
                    system("cls");

                    area = 3.14 * a * a;
                    cout << "area = " << area << endl;

                    cout << endl
                         << endl;

                    break;

                case '2':
                    system("cls");
                    cout << "enter value of radius = ";
                    cin >> a;
                    system("cls");

                    area = 0.5 * 3.14 * a * a;
                    cout << "area of semi-circle = " << area << endl;

                    cout << endl
                         << endl;

                    break;

                case '3':
                    system("cls");
                    cout << "enter value of radius = ";
                    cin >> a;
                    system("cls");

                    area = 0.25 * 3.14 * a * a;
                    cout << "area of quadrant = " << area << endl;

                    cout << endl
                         << endl;

                    break;
                case '4':
                    system("cls");
                    cout << "enter value of radius = ";
                    cin >> a;
                    system("cls");
                    // cout<<"length = "<<l<<endl;
                    // cout<<"breadth = "<<b<<endl;
                    pm = 2 * a;
                    cout << "diameter = " << pm << endl;
                    cout << endl
                         << endl;

                    break;
                case '5':
                    system("cls");
                    cout << "enter value of radius = ";
                    cin >> a;
                    system("cls");
                    // cout<<"length = "<<l<<endl;
                    // cout<<"breadth = "<<b<<endl;
                    diag = 2 * 3.14 * a;
                    cout << "circumference = " << diag << endl;
                    cout << endl
                         << endl;

                    break;
                case '6':
                    break;

                default:
                    cout << "wrong choice" << endl;
                    break;
                }

            } while (ch1 >= '1' && ch1 <= '5');
            break;
        }

        case '5':
            cout << "***** Cube Menu *****" << endl;
            break;
        case '6':
            cout << "***** Sphere  Menu *****" << endl;
            break;
        case '7':
            cout << "***** Rhombus  Menu *****" << endl;
            break;
        case '8':
            cout << "***** Cylinder  Menu *****" << endl;
            break;
        case '9':
            cout << "***** Cone  Menu *****" << endl;
            cout << "a. Cuboid" << endl;
        cout << "b. Parallelogram" << endl;
        cout << "12. Trapezium" << endl;
        cout << "13. Pyramid" << endl;
        cout << "14. More options" << endl;
            break;
        // case 'a':
        //     cout << "***** Cuboid  Menu *****" << endl;
        //     break;
        // case 'b':
        //     cout << "***** Parallelogram  Menu *****" << endl;
        //     break;
        // case 'c':
        //     cout << "***** Trapezium  Menu *****" << endl;
        //     break;
        // case 'd':
        //     cout << "***** Pyramid  Menu *****" << endl;
        //     break;
        // case 'e':
        // {
        //  system("cls");
        //     do
        //     {
        //         cout << "***** Square menu *****" << endl;
        //         cout << endl;
        //         cout << "1.Area of square" << endl;
        //         cout << "2.Perimeter of square" << endl;
        //         cout << "3.Diagonal of square" << endl;
        //         cout << "4.Back" << endl;
        //         cout << endl;
        //         cout << "enter your choice" << endl;
        //         cin >> ch1;

        //         switch (ch1)
        //         {
        //         case '1':
        //             system("cls");
        //             cout << "enter value of side = ";
        //             cin >> a;
        //             system("cls");

        //             area = a * a;
        //             cout << "area = " << area << endl;

        //             cout << endl
        //                  << endl;

        //             break;
        //         case '2':
        //             system("cls");
        //             cout << "enter value of side = ";
        //             cin >> a;
        //             system("cls");
        //             // cout<<"length = "<<l<<endl;
        //             // cout<<"breadth = "<<b<<endl;
        //             pm = 4 * a;
        //             cout << "perimeter = " << pm << endl;
        //             cout << endl
        //                  << endl;

        //             break;
        //         case '3':
        //             system("cls");
        //             cout << "enter value of side = ";
        //             cin >> a;
        //             system("cls");
        //             // cout<<"length = "<<l<<endl;
        //             // cout<<"breadth = "<<b<<endl;
        //             diag = sqrt(2) * a;
        //             cout << "diagonal = " << diag << endl;
        //             cout << endl
        //                  << endl;

        //             break;
        //         case '4':
        //             break;

        //         default:
        //             cout << "wrong choice" << endl;
        //             break;
        //         }

        //     } while (ch1 >= '1' && ch1 <= '3');
        //     break;
        // }

        // break;
        //     cout << "***** More Options *****" << endl;
        //     break;

        case '0':
            break;

        default:
            cout << "wrong choice" << endl;
            break;
        }
    } while (ch >= '1' && ch <= '9');

    return 0;
}

