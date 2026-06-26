#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <unistd.h>
#include <string.h>
using namespace std;

char ch, ans, opt1[5], opt2[5];

int i, a2 = 0, b2 = 0;
double a1, b1;

void after() // f1
{
    cout << "Enter your number : ";
    cin >> a1;
    cout << endl
         << endl;
    cout << "Number that come after " << a1 << " is : " << a1 + 1 << endl
         << endl;
}
void ex_of_after() // f2
{
    cout << "Example:-" << endl
         << endl;

    cout << "a.   79 -   80 " << endl;
    cout << "          ------" << endl
         << endl;
    cout << "b.   36 -   37 " << endl;
    cout << "          ------" << endl
         << endl;
    cout << "c.   76 -   78 " << endl;
    cout << "          ------" << endl
         << endl;
    cout << "d.  142 -  143 " << endl;
    cout << "          ------" << endl
         << endl;
    cout << "e.  394 -  395 " << endl;
    cout << "          ------" << endl
         << endl;
    cout << "f.  682 -  683 " << endl;
    cout << "          ------" << endl
         << endl;
    cout << "g.  746 -  747 " << endl;
    cout << "          ------" << endl
         << endl;
    cout << "h.  993 -  994 " << endl;
    cout << "          ------" << endl
         << endl;
}
void ques_of_after() // f3
{
    cout << "Revision:-" << endl
         << endl;
    cout << "1.    49    ______" << endl;
    cout << "2.   723    ______" << endl;
    cout << "3.    65    ______" << endl;
    cout << "4.   893    ______" << endl;
    cout << "5.    13    ______" << endl;
    cout << "6.    45    ______" << endl;
    cout << "7.    98    ______" << endl;
    cout << "8.   768    ______" << endl;
    cout << "9.    89    ______ " << endl;
    cout << "10.   90    ______ " << endl;
    cout << "11.   946   ______" << endl;
    cout << "12.   532   ______" << endl;
    cout << "13.   490   ______" << endl;
    cout << "14.   875   ______" << endl;
    cout << "15.   873   ______" << endl;
    cout << "16.   576   ______" << endl;
    cout << "17.    75   ______  " << endl;
    cout << "18.    46   ______  " << endl;
    cout << "19.   105   ______  " << endl;
    cout << "20.   809   ______  " << endl;
}
void before() // f4
{
    cout << "Enter your no. : ";
    cin >> a1;
    cout << endl
         << endl;
    cout << "Number that come before " << a1 << " is : " << a1 - 1 << endl
         << endl;
}
void ex_of_before() // f5
{
    cout << "Example:-" << endl
         << endl;

    cout << "a.    79     - 80 " << endl;
    cout << "   -------" << endl
         << endl;
    cout << "b.    36     - 37 " << endl;
    cout << "   -------" << endl
         << endl;
    cout << "c.    76     - 78 " << endl;
    cout << "   -------" << endl
         << endl;
    cout << "d.   142     - 143 " << endl;
    cout << "   -------" << endl
         << endl;
    cout << "e.   394     - 395 " << endl;
    cout << "   -------" << endl
         << endl;
    cout << "f.   682     - 683 " << endl;
    cout << "   -------" << endl
         << endl;
    cout << "g.   746     - 747 " << endl;
    cout << "   -------" << endl
         << endl;
    cout << "h.   993     - 994 " << endl;
    cout << "   -------" << endl
         << endl;
}
void ques_of_before() // f6
{
    cout << "Revision:-" << endl
         << endl;
    cout << "1.     ______    49" << endl;
    cout << "2.     ______    723" << endl;
    cout << "3.     ______    65" << endl;
    cout << "4.     ______    893" << endl;
    cout << "5.     ______    13" << endl;
    cout << "6.     ______    45" << endl;
    cout << "7.     ______    98" << endl;
    cout << "8.     ______    768" << endl;
    cout << "9.     ______    89" << endl;
    cout << "10.    ______    90" << endl;
    cout << "11.    ______    946" << endl;
    cout << "12.    ______    532" << endl;
    cout << "13.    ______    490" << endl;
    cout << "14.    ______    875" << endl;
    cout << "15.    ______    873" << endl;
    cout << "16.    ______    576" << endl;
    cout << "17.    ______    75" << endl;
    cout << "18.    ______    46" << endl;
    cout << "19.    ______    105" << endl;
    cout << "20.    ______    809" << endl
         << endl;
}
void between() // f7
{
    cout << "Enter first no. : ";
    cin >> a1;
    cout << "Enter last no. ";
    cin >> b1;
    cout << endl
         << endl;
    cout << "Number that come between " << a1 << " and " << b1 << " is : ";
    for (i = a1 + 1; i < b1; i++)
    {
        cout << i << " , ";
    }
    cout << endl
         << endl;
}
void ex_of_between() // f8
{

    cout << "Example:-" << endl
         << endl;
    cout << "a.   79 -   80    - 81" << endl;
    cout << "          ------" << endl
         << endl;
    cout << "b.   36 -   37    - 38" << endl;
    cout << "          ------" << endl
         << endl;
    cout << "c.   76 -   78    - 79" << endl;
    cout << "          ------" << endl
         << endl;
    cout << "d.  142 -  143    - 144" << endl;
    cout << "          ------" << endl
         << endl;
    cout << "e.  394 -  395    - 396" << endl;
    cout << "          ------" << endl
         << endl;
    cout << "f.  682 -  683    - 684" << endl;
    cout << "          ------" << endl
         << endl;
    cout << "g.  746 -  747    - 748" << endl;
    cout << "          ------" << endl
         << endl;
    cout << "h.  993 -  994    - 995" << endl;
    cout << "          ------" << endl
         << endl;
}
void ques_of_between() // f9
{
    cout << "Revision:-" << endl
         << endl;
    cout << "1.    49    ______   51" << endl;
    cout << "2.   723    ______   725" << endl;
    cout << "3.    65    ______   67" << endl;
    cout << "4.   893    ______   895" << endl;
    cout << "5.    13    ______   15" << endl;
    cout << "6.    45    ______   47" << endl;
    cout << "7.    98    ______   100" << endl;
    cout << "8.   768    ______   770" << endl;
    cout << "9.    89    ______   91" << endl;
    cout << "10.   90    ______   92" << endl;
    cout << "11.   946   ______   948" << endl;
    cout << "12.   532   ______   534" << endl;
    cout << "13.   490   ______   492" << endl;
    cout << "14.   875   ______   877" << endl;
    cout << "15.   873   ______   875" << endl;
    cout << "16.   576   ______   578" << endl;
    cout << "17.    75   ______   77" << endl;
    cout << "18.    46   ______   48" << endl;
    cout << "19.   105   ______   107" << endl;
    cout << "20.   809   ______   811" << endl
         << endl;
}
void smallest_no() // f10
{
    cout << "Enter your total no. :";
    cin >> a1;
    a2 = a1;
    int arr[a2];
    cout << "Enter your " << a1 << " no. :- " << endl;
    for (i = 0; i < a1; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "your no is :  ";
    for (i = 0; i < a1; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl
         << endl;
    int min;
    min = arr[0];
    for (i = 0; i < a1; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Smallest no. is :  " << min;
    cout << endl
         << endl;
}
void ex_of_smallest_no() // f11
{
    cout << "Example :-" << endl
         << endl;
    cout << "1.   34    43    65    32    14  ,   Smallest no. is : 14" << endl;
    cout << "2.   58    24    56    39    37  ,   Smallest no. is : 24" << endl;
    cout << "3.  121   254   236   652   354  ,   Smallest no. is : 121" << endl;
    cout << "4.  478   547   654   458   578  ,   Smallest no. is : 458" << endl;
    cout << "5.  854   856   658   455   546  ,   Smallest no. is : 455" << endl
         << endl;
}
void ques_of_smallest_no() // f12
{
    cout << "Revision :-" << endl
         << endl;
    cout << "1.    23    54    21    36    54  ,   Smallest no. is : " << endl;
    cout << "2.    65    25    45    65    85  ,   Smallest no. is : " << endl;
    cout << "3.    75    95    35    15    45  ,   Smallest no. is : " << endl;
    cout << "4.    25    45    86    34    54  ,   Smallest no. is : " << endl;
    cout << "5.    46    61    34    86    75  ,   Smallest no. is : " << endl;
    cout << "6.    44    55    66    33    22  ,   Smallest no. is : " << endl;
    cout << "7.    82    83    38    28    45  ,   Smallest no. is : " << endl;
    cout << "8.    25    14    36    52    54  ,   Smallest no. is : " << endl;
    cout << "9.   145   154   125   135   156  ,   Smallest no. is : " << endl;
    cout << "10.  356   365   354   358   398  ,   Smallest no. is : " << endl;
    cout << "11.  258   244   269   257   268  ,   Smallest no. is : " << endl;
    cout << "12.  785   854   759   856   756  ,   Smallest no. is : " << endl;
    cout << "13.  586   548   562   541   523  ,   Smallest no. is : " << endl;
    cout << "14.  425   532   658   521   475  ,   Smallest no. is : " << endl;
    cout << "15.  953   965   935   985   952  ,   Smallest no. is : " << endl;
    cout << "16.  625   658   698   632   623  ,   Smallest no. is : " << endl;
    cout << "17.  352   253   523   652   256  ,   Smallest no. is : " << endl;
    cout << "18.  154   123   321   213   354  ,   Smallest no. is : " << endl;
    cout << "19.  652   452   745   965   456  ,   Smallest no. is : " << endl;
    cout << "20.  987   897   879   789   798  ,   Smallest no. is : " << endl
         << endl;
}
void largest_no() // f13
{
    cout << "Enter your total no. :";
    cin >> a1;
    a2 = a1;
    ;
    int arr[a2];
    cout << "Enter your " << a1 << " no. :- " << endl;
    for (i = 0; i < a1; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "your no is :  ";
    for (i = 0; i < a1; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl
         << endl;
    int max;
    max = arr[0];
    for (i = 0; i < a1; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Largest no. is :  " << max;
    cout << endl
         << endl;
}
void ex_of_largest_no() // f14
{
    cout << "Example :-" << endl
         << endl;
    cout << "1.   34    43    65    32    14  ,    Largest no. is : 65" << endl;
    cout << "2.   58    24    56    39    37  ,    Largest no. is : 58" << endl;
    cout << "3.  121   254   236   652   354  ,    Largest no. is : 652" << endl;
    cout << "4.  478   547   654   458   578  ,    Largest no. is : 654" << endl;
    cout << "5.  854   856   658   455   546  ,    Largest no. is : 856" << endl
         << endl;
}
void ques_of_largest_no() // f15
{
    cout << endl;
    cout << "Revision :-" << endl
         << endl;
    cout << "1.    23    54    21    36    54  ,   Largest no. is : " << endl;
    cout << "2.    65    25    45    65    85  ,   Largest no. is : " << endl;
    cout << "3.    75    95    35    15    45  ,   Largest no. is : " << endl;
    cout << "4.    25    45    86    34    54  ,   Largest no. is : " << endl;
    cout << "5.    46    61    34    86    75  ,   Largest no. is : " << endl;
    cout << "6.    44    55    66    33    22  ,   Largest no. is : " << endl;
    cout << "7.    82    83    38    28    45  ,   Largest no. is : " << endl;
    cout << "8.    25    14    36    52    54  ,   Largest no. is : " << endl;
    cout << "9.   145   154   125   135   156  ,   Largest no. is : " << endl;
    cout << "10.  356   365   354   358   398  ,   Largest no. is : " << endl;
    cout << "11.  258   244   269   257   268  ,   Largest no. is : " << endl;
    cout << "12.  785   854   759   856   756  ,   Largest no. is : " << endl;
    cout << "13.  586   548   562   541   523  ,   Largest no. is : " << endl;
    cout << "14.  425   532   658   521   475  ,   Largest no. is : " << endl;
    cout << "15.  953   965   935   985   952  ,   Largest no. is : " << endl;
    cout << "16.  625   658   698   632   623  ,   Largest no. is : " << endl;
    cout << "17.  352   253   523   652   256  ,   Largest no. is : " << endl;
    cout << "18.  154   123   321   213   354  ,   Largest no. is : " << endl;
    cout << "19.  652   452   745   965   456  ,   Largest no. is : " << endl;
    cout << "20.  987   897   879   789   798  ,   Largest no. is : " << endl
         << endl;
}
void both_small_large() // f16
{
    cout << "Enter your total no. :";
    cin >> a1;
    a2 = a1;
    int arr[a2];
    cout << "Enter your " << a1 << " no. :- " << endl;
    for (i = 0; i < a1; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "your no is :  ";
    for (i = 0; i < a1; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl
         << endl;
    int max, min;
    max = arr[0];
    min = arr[0];
    for (i = 0; i < a1; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Largest no. is : " << max << endl;
    cout << "Smallest no. is : " << min << endl;
    cout << endl;
}
void ex_of_small_large() // f17
{
    cout << "Example :-" << endl
         << endl;
    cout << "1.   34    43    65    32    14  ,   Largest no. is : 65" << endl;
    cout << "                                    Smallest no. is : 14" << endl
         << endl;
    cout << "2.   58    24    56    39    37  ,   Largest no. is : 58" << endl;
    cout << "                                    Smallest no. is : 24" << endl
         << endl;
    cout << "3.  121   254   236   652   354  ,   Largest no. is : 652" << endl;
    cout << "                                    Smallest no. is : 121" << endl
         << endl;
    cout << "4.  478   547   654   458   578  ,   Largest no. is : 654" << endl;
    cout << "                                    Smallest no. is : 458" << endl
         << endl;
    cout << "5.  854   856   658   455   546  ,   Largest no. is : 856" << endl;
    cout << "                                    Smallest no. is : 455" << endl
         << endl;
}
void ques_of_small_large() // f18
{
    cout << "Revision :-" << endl
         << endl;
    cout << "1.    23    54    21    36    54  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "2.    65    25    45    65    85  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "3.    75    95    35    15    45  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "4.    25    45    86    34    54  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "5.    46    61    34    86    75  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "6.    44    55    66    33    22  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "7.    82    83    38    28    45  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "8.    25    14    36    52    54  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "9.   145   154   125   135   156  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "10.  356   365   354   358   398  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "11.  258   244   269   257   268  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "12.  785   854   759   856   756  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "13.  586   548   562   541   523  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "14.  425   532   658   521   475  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "15.  953   965   935   985   952  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "16.  625   658   698   632   623  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "17.  352   253   523   652   256  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "18.  154   123   321   213   354  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "19.  652   452   745   965   456  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
    cout << "20.  987   897   879   789   798  ,   Largest no. is : " << endl;
    cout << "                                     Smallest no. is : " << endl
         << endl;
}
void assending() // f19
{
    int temp, x;
    cout << "Enter your total no. :";
    cin >> a1;
    a2 = a1;
    int arr[a2];
    cout << "Enter your " << a1 << " no. :- " << endl;
    for (i = 0; i < a1; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "your no is :  ";
    for (i = 0; i < a1; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl
         << endl;
    for (i = 0; i < a1; i++)
    {
        for (x = i + 1; x < a1; x++)
        {
            if (arr[i] > arr[x])
            {
                temp = arr[i];
                arr[i] = arr[x];
                arr[x] = temp;
            }
        }
    }

    cout << "Assending no. is :  ";
    for (i = 0; i < a1; i++)
    {
        cout << arr[i] << "   ";
    }

    cout << endl
         << endl;
}
void ex_of_assending() // f20
{
    cout << "Example :-" << endl
         << endl;
    cout << "1.    34    43    65    32    14 " << endl;
    cout << "ans = 14    32    34    43    65 " << endl
         << endl;
    cout << "2.    58    24    56    39    37 " << endl;
    cout << "ans = 24    37    39    56    58 " << endl
         << endl;
    cout << "3.    121   254   236   652   354  " << endl;
    cout << "ans = 121   236   254   354   652  " << endl
         << endl;
    cout << "4.    478   547   654   458   578  " << endl;
    cout << "ans = 458   478   547   578   654  " << endl
         << endl;
    cout << "5.    854   856   658   455   546  " << endl;
    cout << "ans = 455   546   658   854   856 " << endl
         << endl;
}
void ques_of_assending() // f21
{
    cout << "Revision :-" << endl
         << endl;
    cout << "1.     23    54    21    36    54   : " << endl;
    cout << "ans =                              : " << endl
         << endl;
    cout << "2.     65    25    45    65    85   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "3.     75    95    35    15    45   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "4.     25    45    86    34    54   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "5.     46    61    34    86    75   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "6.     44    55    66    33    22   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "7.     82    83    38    28    45   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "8.     25    14    36    52    54   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "9.    145   154   125   135   156   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "10.   356   365   354   358   398   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "11.   258   244   269   257   268   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "12.   785   854   759   856   756   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "13.   586   548   562   541   523   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "14.   425   532   658   521   475   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "15.   953   965   935   985   952   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "16.   625   658   698   632   623   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "17.   352   253   523   652   256   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "18.   154   123   321   213   354   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "19.   652   452   745   965   456   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "20.   987   897   879   789   798   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
}
void desending() // f22
{
    int temp, x;
    cout << "Enter your total no. :";
    cin >> a1;
    a2 = a1;
    int arr[a2];
    cout << "Enter your " << a1 << " no. :- " << endl;
    for (i = 0; i < a1; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "your no is :  ";
    for (i = 0; i < a1; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl
         << endl;
    // j=i+1;
    // int arr[j];
    for (i = 0; i < a1; i++)
    {
        for (x = i + 1; x < a1; x++)
        {
            if (arr[i] < arr[x])
            {
                temp = arr[i];
                arr[i] = arr[x];
                arr[x] = temp;
            }
        }
    }

    cout << "Desending no. is :  ";
    for (i = 0; i < a1; i++)
    {
        cout << arr[i] << "   ";
    }

    cout << endl
         << endl;
}
void ex_of_desending() // f23
{
    cout << "Example :-" << endl
         << endl;
    cout << "1.    34    43    65    32    14 " << endl;
    cout << "ans = 65    43    34    32    14 " << endl
         << endl;
    cout << "2.    58    24    56    39    37 " << endl;
    cout << "ans = 58    56    39    37    24 " << endl
         << endl;
    cout << "3.    121   254   236   652   354  " << endl;
    cout << "ans = 652   354   254   236   121  " << endl
         << endl;
    cout << "4.    478   547   654   458   578  " << endl;
    cout << "ans = 654   578   547   478   458  " << endl
         << endl;
    cout << "5.    854   856   658   455   546  " << endl;
    cout << "ans = 856   854   658   546   455 " << endl;
}
void ques_of_desending() // f24
{
    cout << "Revision :-" << endl
         << endl;
    cout << "1.     23    54    21    36    54   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "2.     65    25    45    65    85   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "3.     75    95    35    15    45   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "4.     25    45    86    34    54   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "5.     46    61    34    86    75   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "6.     44    55    66    33    22   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "7.     82    83    38    28    45   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "8.     25    14    36    52    54   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "9.    145   154   125   135   156   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "10.   356   365   354   358   398   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "11.   258   244   269   257   268   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "12.   785   854   759   856   756   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "13.   586   548   562   541   523   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "14.   425   532   658   521   475   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "15.   953   965   935   985   952   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "16.   625   658   698   632   623   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "17.   352   253   523   652   256   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "18.   154   123   321   213   354   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "19.   652   452   745   965   456   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "20.   987   897   879   789   798   : " << endl;
    cout << "ans =                               : " << endl
         << endl;
}
void both_ass_dese() // f25
{
    int temp, x;
    cout << "Enter your total no. :";
    cin >> a1;
    a2 = a1;
    int arr[a2];
    cout << "Enter your " << a1 << " no. :- " << endl;
    for (i = 0; i < a1; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "your no is :  ";
    for (i = 0; i < a1; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl
         << endl;
    for (i = 0; i < a1; i++)
    {
        for (x = i + 1; x < a1; x++)
        {
            if (arr[i] > arr[x])
            {
                temp = arr[i];
                arr[i] = arr[x];
                arr[x] = temp;
            }
        }
    }

    cout << "Assending no. is :  ";
    for (i = 0; i < a1; i++)
    {
        cout << arr[i] << "   ";
    }

    for (i = 0; i < a1; i++)
    {
        for (x = i + 1; x < a1; x++)
        {
            if (arr[i] < arr[x])
            {
                temp = arr[i];
                arr[i] = arr[x];
                arr[x] = temp;
            }
        }
    }
    cout << endl;
    cout << "Desending no. is :  ";
    for (i = 0; i < a1; i++)
    {

        cout << arr[i] << "   ";
    }

    cout << endl
         << endl;
}
void ex_of_ass_dese() // f26
{
    cout << "Example :-" << endl
         << endl;
    cout << "1.    34    43    65    32    14 " << endl;
    cout << "ans = 65    43    34    32    14 " << endl;
    cout << "ans = 14    32    34    43    65 " << endl
         << endl;
    cout << "2.    58    24    56    39    37 " << endl;
    cout << "ans = 58    56    39    37    24 " << endl;
    cout << "ans = 24    37    39    56    58 " << endl
         << endl;
    cout << "3.    121   254   236   652   354  " << endl;
    cout << "ans = 652   354   254   236   121  " << endl;
    cout << "ans = 121   236   254   354   652  " << endl
         << endl;
    cout << "4.    478   547   654   458   578  " << endl;
    cout << "ans = 654   578   547   478   458  " << endl;
    cout << "ans = 458   478   547   578   654  " << endl
         << endl;
    cout << "5.    854   856   658   455   546  " << endl;
    cout << "ans = 856   854   658   546   455 " << endl;
    cout << "ans = 455   546   658   854   856 " << endl;
}
void ques_of_ass_dese() // f27
{
    cout << endl;
    cout << "Revision :-" << endl
         << endl;
    cout << "1.     23    54    21    36    54   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "2.     65    25    45    65    85   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "3.     75    95    35    15    45   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "4.     25    45    86    34    54   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "5.     46    61    34    86    75   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "6.     44    55    66    33    22   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "7.     82    83    38    28    45   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "8.     25    14    36    52    54   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "9.    145   154   125   135   156   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "10.   356   365   354   358   398   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "11.   258   244   269   257   268   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "12.   785   854   759   856   756   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "13.   586   548   562   541   523   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "14.   425   532   658   521   475   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "15.   953   965   935   985   952   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "16.   625   658   698   632   623   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "17.   352   253   523   652   256   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "18.   154   123   321   213   354   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "19.   652   452   745   965   456   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
    cout << "20.   987   897   879   789   798   : " << endl;
    cout << "ans =                               : " << endl;
    cout << "ans =                               : " << endl
         << endl;
}
void ordinal() // f28
{
    cout << "Ordinal No. (First to Tenth)" << endl
         << endl;
    cout << "Number               Ordinal                Short Form" << endl;
    cout << "1                    First                  1 st" << endl;
    cout << "2                    Second                 2 nd" << endl;
    cout << "3                    Third                  3 rd" << endl;
    cout << "4                    Fourth                 4 th" << endl;
    cout << "5                    Fifth                  5 th" << endl;
    cout << "6                    Sixth                  6 th" << endl;
    cout << "7                    Seventh                7 th" << endl;
    cout << "8                    Eight                  8 th" << endl;
    cout << "9                    Ninth                  9 th" << endl;
    cout << "10                   Tenth                 10 th" << endl
         << endl;
    cout << " As you see from above, the first three ordinals have the number and the " << endl
         << " last two letters of their names: 1st - First   2nd - Second   3rd - Third" << endl
         << endl;
    cout << " The others have the number and 'th' : fourth (4th), fifth (5th), sixth (6th),"
         << " and so on." << endl
         << endl;
    cout << " NOTE : Look at the spellings - Fith not fiveth;  eighth not eightth; "
         << " ninth not nineth.";
}
void ques_of_ordinal() // f29
{
    cout << "Revison :-" << endl;
    cout << "Write ordinal No. (First to Tenth)" << endl
         << endl;
    cout << "Number               Ordinal                Short Form" << endl;
    cout << "1                    " << endl;
    cout << "2                    " << endl;
    cout << "3                    " << endl;
    cout << "4                    " << endl;
    cout << "5                    " << endl;
    cout << "6                    " << endl;
    cout << "7                    " << endl;
    cout << "8                    " << endl;
    cout << "9                    " << endl;
    cout << "10                   " << endl
         << endl;
}
void comparision() // f30
{
    cout << "Enter your first no. : ";
    cin >> a1;
    cout << "Eter your second no. : ";
    cin >> b1;
    cout << endl
         << endl;
    if (a1 > b1)
        cout << "ans = " << a1 << " > " << b1;
    else if (a1 < b1)
        cout << "ans = " << a1 << " < " << b1;
    else if (a1 == b1)
        cout << "ans = " << a1 << " = " << b1;

    cout << endl
         << endl;
}
void ex_of_comparision() // f31
{
    cout << "Example:-" << endl
         << endl;

    cout << "a.   79      <       92" << endl;
    cout << "          ------" << endl
         << endl;
    cout << "b.   36      <       58" << endl;
    cout << "          ------" << endl
         << endl;
    cout << "c.   76      >       32" << endl;
    cout << "          ------" << endl
         << endl;
    cout << "d.  142      =       142" << endl;
    cout << "          ------" << endl
         << endl;
    cout << "e.  394      <       568" << endl;
    cout << "          ------" << endl
         << endl;
    cout << "f.  682      >       546" << endl;
    cout << "          ------" << endl
         << endl;
    cout << "g.  746      =       746" << endl;
    cout << "          ------" << endl
         << endl;
    cout << "h.  993      <       1000" << endl;
    cout << "          ------" << endl
         << endl;
}
void ques_of_comparision() // f32
{
    cout << "Revision:-" << endl
         << endl;
    cout << "1.    49    ______   85" << endl;
    cout << "2.   723    ______   548" << endl;
    cout << "3.    65    ______   54" << endl;
    cout << "4.   893    ______   965" << endl;
    cout << "5.    13    ______   54" << endl;
    cout << "6.    45    ______   24" << endl;
    cout << "7.    98    ______   99" << endl;
    cout << "8.   768    ______   768" << endl;
    cout << "9.    89    ______   65" << endl;
    cout << "10.   90    ______   90" << endl;
    cout << "11.   946   ______   865" << endl;
    cout << "12.   532   ______   587" << endl;
    cout << "13.   490   ______   472" << endl;
    cout << "14.   875   ______   857" << endl;
    cout << "15.   873   ______   900" << endl;
    cout << "16.   576   ______   754" << endl;
    cout << "17.    75   ______   75" << endl;
    cout << "18.    46   ______   46" << endl;
    cout << "19.   105   ______   109" << endl;
    cout << "20.   809   ______   809" << endl;
}
void odd_even() // f33
{
    int x;
    cout << "Enter your no. : ";
    cin >> x;
    cout << endl
         << endl;

    if (x % 2 == 0)
        cout << "Given no. is even";
    else
        cout << " Given no. is odd";
}
void class2_practise_ques() // f34
{
    cout << endl;
    cout << " Practise Question:-" << endl
         << endl;
    cout << "1. Fill in the blanks:" << endl
         << endl;
    cout << "a. 100 + 60 + 3 = .........." << endl;
    cout << "b. 15 + 3 = .........." << endl;
    cout << "c. 2 x 8 = .........." << endl;
    cout << "d. 2 hundred + 4 tens + 5 ones = .........." << endl;
    cout << "e. 8 - ...... = 7" << endl;
    cout << "f. 12 - 10 = .........." << endl
         << endl;
    cout << "2. Match:" << endl
         << endl;
    cout << "a. 6 + 10                          3 x 2" << endl;
    cout << "b. 8 x 3                              13" << endl;
    cout << "c. 15 / 5                             18" << endl;
    cout << "d. Eighteen                           94" << endl;
    cout << "e. 23 + 4 + 67                       715" << endl;
    cout << "f. 56 - 43                            24" << endl;
    cout << "g. Sixty                              16" << endl;
    cout << "h. * * *   * * *                       3" << endl;
    cout << "i. Seven hundred fifteen              60" << endl
         << endl;

    cout << "3. Give the number that comes after.:" << endl
         << endl;
    cout << "a. 172 ......." << endl;
    cout << "b. 169 ......." << endl
         << endl;
    cout << "c. 187 ......." << endl
         << endl;
    cout << "d. 192 ......." << endl
         << endl;
    cout << "e. 158 ......." << endl
         << endl;

    cout << "4. Write the number name" << endl;
    cout << "a. 54 - ...................." << endl;
    cout << "b. 63 - ...................." << endl;
    cout << "c. 93 - ...................." << endl;
    cout << "d. 25 - ...................." << endl;
    cout << "e. 72 - ...................." << endl
         << endl;

    cout << "5. Write the numeral" << endl
         << endl;
    cout << "a. Six hundred seventy         ........................" << endl;
    cout << "b. One thousand                ........................" << endl;
    cout << "c. Two hundread ten            ........................" << endl;
    cout << "d. Nine hundred fourteen       ........................" << endl;
    cout << "e. Eight hundred ninety two    ........................" << endl
         << endl;

    cout << "6. Fill in the blanks:-" << endl;

    cout << "a. 879  ____  ____  882  ____ ____" << endl;
    cout << "b. 436  ____  ____  439  ____ ____" << endl;
    cout << "c.  76  ____  ____   79  ____ ____" << endl;
    cout << "d.  42  ____  ____   45  ____ ____" << endl;
    cout << "e. 994  ____  ____  997  ____ ____" << endl;
    cout << "f.  82  ____  ____   79  ____ ____" << endl;
    cout << "g.  46  ____  ____   43  ____ ____" << endl;
    cout << "h.  93  ____  ____   90  ____ ____" << endl
         << endl;

    cout << "7. What come before:-" << endl
         << endl;
    cout << "a.   ____  82" << endl;
    cout << "b.   ____  39" << endl;
    cout << "c.   ____  79" << endl;
    cout << "d.   ____  45" << endl;
    cout << "e.   ____  97" << endl;
    cout << "f.   ____  79" << endl;
    cout << "g.   ____  43" << endl;
    cout << "h.   ____  90" << endl
         << endl;

    cout << "8. What come After:-" << endl
         << endl;
    cout << "a.   79  ____ " << endl;
    cout << "b.   36  ____ " << endl;
    cout << "c.   76  ____ " << endl;
    cout << "d.   42  ____ " << endl;
    cout << "e.   94  ____ " << endl;
    cout << "f.   82  ____ " << endl;
    cout << "g.   46  ____ " << endl;
    cout << "h.   93  ____ " << endl
         << endl;

    cout << "9. What comes in between:-" << endl
         << endl;
    cout << "a.   39  ____  41" << endl;
    cout << "b.   90  ____  92" << endl;
    cout << "c.   12  ____  14" << endl;
    cout << "d.   49  ____  51" << endl;
    cout << "e.   35  ____  37" << endl;
    cout << "f.   67  ____  69" << endl;
    cout << "g.   83  ____  85" << endl;
    cout << "h.   58  ____  60" << endl
         << endl;

    cout << "10. Write the place value of :-" << endl
         << endl;
    cout << "a.   5 in 75      ____  " << endl;
    cout << "b.   4 in 46      ____  " << endl;
    cout << "c.   1 in 105     ____  " << endl;
    cout << "d.   0 in 809     ____  " << endl;
    cout << "e.   7 in 927     ____  " << endl;
    cout << "f.   2 in 620     ____  " << endl;
    cout << "g.   8 in 826     ____  " << endl;
    cout << "h.   6 in 567     ____  " << endl
         << endl;

    cout << "11. Fill in the blanks :-" << endl
         << endl;
    cout << "a.  5 tens + 3 ones =     _______  " << endl;
    cout << "b.  5 hundreds + 0 tens + 3 ones =     _______  " << endl;
    cout << "c.  9 hundreds + 5 tens + 2 ones =     _______  " << endl;
    cout << "d.  200 + 30 + 2 =     _______  " << endl;
    cout << "e.  600 + 40 + 5 =     _______  " << endl;
    cout << "f.  300 + 30 =     _______  " << endl;
    cout << "g.  100 + 50 =     _______  " << endl;
    cout << "h.  20 + 9 =      _______  " << endl
         << endl;

    cout << "12. Encircle the greatest number:-" << endl
         << endl;
    cout << "a.   65     94     29" << endl;
    cout << "b.   49     41     45" << endl;
    cout << "c.   723    903    693" << endl;
    cout << "d.   893    938    983" << endl;
    cout << "e.   13     131    113" << endl;
    cout << "f.   45     87     67" << endl;
    cout << "g.   98     45     34" << endl;
    cout << "h.   768    869    764" << endl
         << endl;

    cout << "13. Encircle the smallest number:-" << endl
         << endl;
    cout << "a.   83     30     89" << endl;
    cout << "b.   91     19     90" << endl;
    cout << "c.   723    864    946" << endl;
    cout << "d.   825    523    532" << endl;
    cout << "e.   620    565    490" << endl;
    cout << "f.   765    834    875" << endl;
    cout << "g.   873    768    873" << endl;
    cout << "h.   657    756    576" << endl
         << endl;
}
void roman() // f35
{
    cout << "\t  Roman Numerals" << endl;
    cout << "\t------------------" << endl
         << endl;
    cout << "Romans use different numerals. These numerals are called Roman Numerals.\n"
         << "These are 7 symbols- I,V,X,L,C,D and M.\n"
         << "These symbols stand for following numerals :\n"
         << endl;
    cout << " __________________________________________________________" << endl;
    cout << "| Roman Symbols |  I  |  V  |  X  |  L  |  C  |  D  |  M   | " << endl;
    cout << "|__________________________________________________________|" << endl;
    cout << "| Hindu-Arabic  |  1  |  5  | 10  | 50  | 100 | 500 | 1000 |" << endl;
    cout << "| Numerals      |     |     |     |     |     |     |      |" << endl;
    cout << "|__________________________________________________________|" << endl;
    cout << endl;
    getch();
    cout << "Romans have no symbol for 0.\n"
         << "\nLets us now learn to write Roman numerals by using the following rules:\n"
         << "\nRule 1:\n"
         << "If symbol is repeated in succession, the value of the numeral is obtainedd \n"
         << "by adding the value of the symbol by the number of times, it is repeated.\n\n"
         << "Examples: (a) II  = 1+1   = 2     (b) III   = 1+1+1    = 3 \n"
         << "          (c) XX  = 10+10 = 20    (d) XXX   = 10+10+10 = 30\n\n"
         << "Note: (i) In roman numeration system, no symbol is repeated more than three\n"
         << "          times.\n"
         << "     (ii) Symbol V is never repeated." << endl;
    getch();
    cout << "\nRule 2:\n"
         << "If a symbol is written on the right of a symbol of greater value, we add its\n"
         << "value to the value of the symbol on the left.\n\n "
         << "Examples: (a) VI = 5+1  = 6      (b) XII  = 10+2   = 12\n"
         << "          (c) XV = 10+5 = 15     (d) XVII = 10+5+2 = 17\n";
    getch();
    cout << "\nRule 3:\n"
         << "If symbol is written on the left of a synbol of greater value, we subtract its\n"
         << "value from the vale of the ssymbol on its right.\n\n"
         << "Example: (a) IV  = 5-1     = 4    (b) IX   = 10-1       = 9 \n"
         << "         (c) XIX = 10+10-9 = 19   (d) XXIX = 10+10+10-1 = 29\n"
         << "\nNote: Symbol V is never subtracted.";
    getch();
    system("cls");
    cout << "With the help of the rules given above, we can write Roman numerals \n"
         << "corresponding to Hindi-Arabic numerals from 1 to 100 as given in the following table :";
    cout << endl
         << endl;
    cout << "1. I             "
         << "11. XI        "
         << "21. XXI       "
         << "31. XXXI      "
         << "41. XLI    " << endl;
    cout << "2. II            "
         << "12. XII       "
         << "22. XXII      "
         << "32. XXXII     "
         << "42. XLII   " << endl;
    cout << "3. III           "
         << "13. XIII      "
         << "23. XXIII     "
         << "33. XXXIII    "
         << "43. XLIII  " << endl;
    cout << "4. IV            "
         << "14. XIV       "
         << "24. XXIV      "
         << "34. XXXIV     "
         << "44. XLIV   " << endl;
    cout << "5. V             "
         << "15. XV        "
         << "25. XXV       "
         << "35. XXXV      "
         << "45. XLV    " << endl;
    cout << "6. VI            "
         << "16. XVI       "
         << "26. XXVI      "
         << "36. XXXVI     "
         << "46. XLVI   " << endl;
    cout << "7. VII           "
         << "17. XVII      "
         << "27. XXVII     "
         << "37. XXXVII    "
         << "47. XLVII  " << endl;
    cout << "8. VIII          "
         << "18. XVIII     "
         << "28. XXVIII    "
         << "38. XXXVIII   "
         << "48. XLVIII " << endl;
    cout << "9. IX            "
         << "19. XIX       "
         << "29. XXIX      "
         << "39. XXXIX     "
         << "49. XLIX   " << endl;
    cout << "10. X            "
         << "20. XX        "
         << "30. XXX       "
         << "40. XL        "
         << "50. L      " << endl;

    cout << "\n\n\n";

    cout << "51. LI           "
         << "61. LXI       "
         << "71. LXXI      "
         << "81. LXXXI     "
         << "91. XCI    " << endl;
    cout << "52. LII          "
         << "62. LXIII     "
         << "72. LXXII     "
         << "82. LXXXII    "
         << "92. XCII   " << endl;
    cout << "53. LIII         "
         << "63. LXII      "
         << "73. LXXII     "
         << "83. LXXXIII   "
         << "93. XCIII  " << endl;
    cout << "54. LIV          "
         << "64. LXIV      "
         << "74. LXXIV     "
         << "84. LXXXIV    "
         << "94. XCIV   " << endl;
    cout << "55. LV           "
         << "65. LXV       "
         << "75. LXXV      "
         << "85. LXXXV     "
         << "95. XCV    " << endl;
    cout << "56. LVI          "
         << "66. LXVI      "
         << "76. LXXVI     "
         << "86. LXXXVI    "
         << "96. XCVI   " << endl;
    cout << "57. LVII         "
         << "67. LXVII     "
         << "77. LXXVII    "
         << "87. LXXXVII   "
         << "97. XCVII  " << endl;
    cout << "58. LVIII        "
         << "68. LXVIII    "
         << "78. LXXVIII   "
         << "88. LXXXVIII  "
         << "98. XCVIII " << endl;
    cout << "59. LIX          "
         << "69. LXIX      "
         << "79. LXXIX     "
         << "89. LXXXIX    "
         << "99. XCIX   " << endl;
    cout << "60. LX           "
         << "70. LXX       "
         << "80. LXXX      "
         << "90. XC        "
         << "100. C     " << endl;
}
void roman_no_1to100() // f36
{
    cout << "1. I             "
         << "11. XI        "
         << "21. XXI       "
         << "31. XXXI      "
         << "41. XLI    " << endl;
    cout << "2. II            "
         << "12. XII       "
         << "22. XXII      "
         << "32. XXXII     "
         << "42. XLII   " << endl;
    cout << "3. III           "
         << "13. XIII      "
         << "23. XXIII     "
         << "33. XXXIII    "
         << "43. XLIII  " << endl;
    cout << "4. IV            "
         << "14. XIV       "
         << "24. XXIV      "
         << "34. XXXIV     "
         << "44. XLIV   " << endl;
    cout << "5. V             "
         << "15. XV        "
         << "25. XXV       "
         << "35. XXXV      "
         << "45. XLV    " << endl;
    cout << "6. VI            "
         << "16. XVI       "
         << "26. XXVI      "
         << "36. XXXVI     "
         << "46. XLVI   " << endl;
    cout << "7. VII           "
         << "17. XVII      "
         << "27. XXVII     "
         << "37. XXXVII    "
         << "47. XLVII  " << endl;
    cout << "8. VIII          "
         << "18. XVIII     "
         << "28. XXVIII    "
         << "38. XXXVIII   "
         << "48. XLVIII " << endl;
    cout << "9. IX            "
         << "19. XIX       "
         << "29. XXIX      "
         << "39. XXXIX     "
         << "49. XLIX   " << endl;
    cout << "10. X            "
         << "20. XX        "
         << "30. XXX       "
         << "40. XL        "
         << "50. L      " << endl;

    cout << "\n\n\n";

    cout << "51. LI           "
         << "61. LXI       "
         << "71. LXXI      "
         << "81. LXXXI     "
         << "91. XCI    " << endl;
    cout << "52. LII          "
         << "62. LXIII     "
         << "72. LXXII     "
         << "82. LXXXII    "
         << "92. XCII   " << endl;
    cout << "53. LIII         "
         << "63. LXII      "
         << "73. LXXII     "
         << "83. LXXXIII   "
         << "93. XCIII  " << endl;
    cout << "54. LIV          "
         << "64. LXIV      "
         << "74. LXXIV     "
         << "84. LXXXIV    "
         << "94. XCIV   " << endl;
    cout << "55. LV           "
         << "65. LXV       "
         << "75. LXXV      "
         << "85. LXXXV     "
         << "95. XCV    " << endl;
    cout << "56. LVI          "
         << "66. LXVI      "
         << "76. LXXVI     "
         << "86. LXXXVI    "
         << "96. XCVI   " << endl;
    cout << "57. LVII         "
         << "67. LXVII     "
         << "77. LXXVII    "
         << "87. LXXXVII   "
         << "97. XCVII  " << endl;
    cout << "58. LVIII        "
         << "68. LXVIII    "
         << "78. LXXVIII   "
         << "88. LXXXVIII  "
         << "98. XCVIII " << endl;
    cout << "59. LIX          "
         << "69. LXIX      "
         << "79. LXXIX     "
         << "89. LXXXIX    "
         << "99. XCIX   " << endl;
    cout << "60. LX           "
         << "70. LXX       "
         << "80. LXXX      "
         << "90. XC        "
         << "100. C     " << endl;
}
void ques_roman() // f37
{
    cout << "Revision:-" << endl
         << endl;
    cout << " Write the Roman numerals:" << endl
         << endl;
    cout << "1.    49    ______" << endl;
    cout << "2.    23    ______" << endl;
    cout << "3.    65    ______" << endl;
    cout << "4.    93    ______" << endl;
    cout << "5.    13    ______" << endl;
    cout << "6.    45    ______" << endl;
    cout << "7.    98    ______" << endl;
    cout << "8.    68    ______" << endl;
    cout << "9.    89    ______ " << endl;
    cout << "10.   90    ______ " << endl;
    cout << "11.   46    ______" << endl;
    cout << "12.   32    ______" << endl;
    cout << "13.   41    ______" << endl;
    cout << "14.   87    ______" << endl;
    cout << "15.   73    ______" << endl;
    cout << "16.   56    ______" << endl;
    cout << "17.   75    ______  " << endl;
    cout << "18.   66    ______  " << endl;
    cout << "19.   10    ______  " << endl;
    cout << "20.   80    ______  " << endl
         << endl;
    getch();
    cout << "Write the Hindu-Arqbic numerals :" << endl
         << endl;
    cout << "1.    II     ______" << endl;
    cout << "2.    VII    ______" << endl;
    cout << "3.    XX     ______" << endl;
    cout << "4.    XXII   ______" << endl;
    cout << "5.    IV     ______" << endl;
    cout << "6.    IX     ______" << endl;
    cout << "7.    XVII   ______" << endl;
    cout << "8.    XXXIV  ______" << endl;
    cout << "9.    XII    ______ " << endl;
    cout << "10.   XL     ______ " << endl;
}
void common_multiplies() // f38
{
    int x, z, y;
    cout << "Enter first no : ";
    cin >> x;
    cout << "Enter second no : ";
    cin >> y;
    cout << "Enter n th no : ";
    cin >> z;
    cout << endl
         << endl;
    cout << "Common multiplies are ";
    for (int i = 1; i <= z; i++)
    {
        if (i % x == 0 && i % y == 0)
            cout << i << "   ";
    }
}
void factors() // f39
{
    int x;
    cout << "Enter any no : ";
    cin >> x;
    cout << endl
         << endl;
    cout << "Factors of " << x << " are  ";
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
            cout << i << "   ";
    }
}
void detail_about_factors() // f40
{
    cout << "\t Factors" << endl;
    cout << "\t---------- " << endl
         << endl;
    cout << "When two or more numbers are multiplied, the result\n"
         << "is called product. The numbers that were multiplied are called\n"
         << "the factors." << endl
         << endl;
    cout << "Exaple:" << endl;
    cout << "3 x 6 = 18" << endl
         << "Here, 3 and 6 are multiplied, so 3 and 6 are the factors of 18." << endl
         << endl;
    cout << "Again,  2 x 3 x 5 = 30 \n"
         << "Here, 2, 3 and 5 are called the factors of 30.\n"
         << "So, it can also be said that in  product, each number that is \n"
         << "multiplied is a factor.\n\n\n";
    cout << "PROPERTIES OF FACTORS\n"
         << "1. 1 is factor of every number.\n"
         << "    1 x 2 = 2, 1 x 4 = 4, 1 x 12 = 12, etc.\n\n"
         << "2. Every number is a factor of itself.\n"
         << "    3 x 1 = 3, 5 x 1 = 5, 6 x 1 = 6, etc.\n\n"
         << "3. Every number is a factor of 0.\n"
         << "    1 x 0 = 0, 5 x 0 = 0, 10 x 0 = 0, etc.";
}
void divisibility_rules() // f41
{
    cout << "\t\t Divisibility Rules " << endl;
    cout << "\t\t---------------------\n\n";
    cout << " ____________________________________________________________\n"
         << "| A number is  | if the followig conditions are met          |\n"
         << "| divisible by |                                             | \n"
         << "|------------------------------------------------------------|\n"
         << "|      2       | The last digit is even                      |\n"
         << "|------------------------------------------------------------|\n"
         << "|      3       | The sum of its digits is divisible by 3     |\n"
         << "|------------------------------------------------------------|\n"
         << "|      4       | The number represented by its last two      |\n"
         << "|              | Digits is divisible by 4                    |\n"
         << "|------------------------------------------------------------|\n"
         << "|      5       | The last digit is 0 or 5                    |\n"
         << "|------------------------------------------------------------|\n"
         << "|      6       | The number is divisible by 2 and 3          |\n"
         << "|------------------------------------------------------------|\n"
         << "|              | Remove the last digit, double it, subtract  |\n"
         << "|      7       | it from the leftover number. The result is  |\n"
         << "|              | divisible by 7                              |\n"
         << "|------------------------------------------------------------|\n"
         << "|      8       | The number represented by its last three    |\n"
         << "|              | digits is divisible by 8                    |\n"
         << "|------------------------------------------------------------|\n"
         << "|      9       | The sum of its digits is divisible by 9     |\n"
         << "|------------------------------------------------------------|\n"
         << "|      10      | The last digit is 0                         |\n"
         << "|____________________________________________________________|\n";
    int x,ch5,y,z,k,m;
    cout << "\n\n";
    cout << "Enter any number : ";
    cin >> x;
    cout << "Divisible by : ";
    cin >> ch5;
    int p = x;

    if (ch5 == 2)
    {
        y = x % 10;
        if (y % 2 == 0)
        {
            cout << "\n\n=> The following conditions are met,\n"
                 << "   the last digit " << y << " is even, \n"
                 << "   " << x << " is divisible by 2";
        }
        else
        {
            cout << "\n\n=> The following conditions are not met,\n"
                 << "   the last digit " << y << " is not even,\n"
                 << "   So, " << x << " is not divisible by 2";
        }
    }
    else if (ch5 == 3)
    {
        int q = 0;
        int arr1[10];
        z = 0;
        while (x > 0)
        {
            y = x % 10;
            arr1[q] = y;
            z = z + y;
            x = x / 10;
            y = 0;
            q++;
        }
        cout << "\n\n";
        cout << "=> The sum of its digits is ";
        for (int i = q - 1; i >= 0; i--)
        {
            cout << arr1[i];
            if (i >= 1)
                cout << " + ";
        }

        cout << " = " << z;
        cout << "\n\n";
        if (z % 3 == 0)
        {
            cout << "   The following conditions are meet, \n"
                 << "   the sum of its digits is divisible by 3, \n"
                 << "   so, " << p << " is divisible by 3";
        }
        else
        {
            cout << "   The following conditions are not meet, \n"
                 << "   the sum of its digits is not divisible by 3, \n"
                 << "   so, " << p << " is not divisible by 3";
        }
    }
    else if (ch5 == 4)
    {
        y = x % 100;
        if (y % 4 == 0)
        {
            cout << "\n\n=> The following conditions are met,\n"
                 << "   the last two digits " << y << " is divisible by 4, \n"
                 << "   so, " << x << " is divisible by 4";
        }
        else
        {
            cout << "\n\n=> The following conditions are not met,\n"
                 << "   the last two digits " << y << " is not divisible by 4, \n"
                 << "   so, " << x << " is not divisible by 4";
        }
    }
    else if (ch5 == 5)
    {
        y = x % 10;
        if (y == 0 || y == 5)
        {
            cout << "\n\n=> The following conditions are met,\n"
                 << "   the last digits is " << y << " ,\n"
                 << "   so, " << x << " is divisible by 5";
        }
        else
        {
            cout << "\n\n=> The following conditions are not met,\n"
                 << "   the last digits is " << y << " , \n"
                 << "   so, " << x << " is not divisible by 5";
        }
    }
    else if (ch5 == 6)
    {
        k = x % 10;
        if (k % 2 == 0)
        {
            cout << "\n\n=> The last digit " << k << " is even, \n"
                 << "   " << x << " is divisible by 2";
        }
        else
        {
            cout << "\n\n=> The last digit " << k << " is not even,\n"
                 << "   So, " << x << " is not divisible by 2";
        }
        int q = 0;
        int arr1[10];
        z = 0;
        while (x > 0)
        {
            y = x % 10;
            arr1[q] = y;
            z = z + y;
            x = x / 10;
            y = 0;
            q++;
        }
        cout << "\n\n";
        cout << "=> The sum of its digits is ";
        for (int i = q - 1; i >= 0; i--)
        {
            cout << arr1[i];
            if (i >= 1)
                cout << " + ";
        }

        cout << " = " << z;
        cout << "\n\n";
        if (z % 3 == 0)
        {
            cout << "   The sum of its digits is divisible by 3, \n"
                 << "   So, " << p << " is divisible by 3";
        }
        else
        {
            cout << "   The sum of its digits is not divisible by 3, \n"
                 << "   So, " << p << " is not divisible by 3";
        }

        if (k % 2 == 0 && z % 3 == 0)
        {
            cout << "\n\n=>  The following conditions are meet,\n"
                 << "   the number is divisible by 2 and 3,\n"
                 << "   So, " << p << " is divisible by 6";
        }
        else if (k % 2 != 0 && z % 3 == 0)
        {
            cout << "\n\n=> The following conditions are not meet,\n"
                 << "   the number is divisible by 3 but not divisible by 2,\n"
                 << "   So, " << p << " is not divisible by 6";
        }
        else if (k % 2 == 0 && z % 3 != 0)
        {
            cout << "\n\n=> The following conditions are not meet,\n"
                 << "   the number is divisible by 2 but not divisible by 3,\n"
                 << "   So, " << p << " is not divisible by 6";
        }
        else if (k % 2 != 0 && z % 3 != 0)
        {
            cout << "\n\n=> The following conditions are not meet,\n"
                 << "   the number is not divisible by 2 and 3 both,\n"
                 << "   So, " << p << " is not divisible by 6";
        }
    }
    else if (ch5 == 7)
    {
        cout << "\n\n Is " << x << " divisivle by 7? \n\n";

        while (x > 100)
        {
            y = x % 10;
            m = y;
            z = y * 2;
            y = x / 10;
            k = y - z;
            x = k;
            cout << y << "(" << m << ") --> Multiply the last digit by 2\n";
            cout << "    " << z << " --> Subtract the product (" << z << ") from " << y << "\n\n";
            if (x > 100)
            {
                cout << x << " --> Is " << x << " a multiple of 7? We are unsure about it.\n"
                     << "         Let us repeat the process futher.\n\n";
            }
        }
        cout << x << " --> Is " << x << " a multiple of 7?\n";
        if (x % 7 == 0)
            cout << "        Yes it is multiple of 7 \n";
        else
            cout << "        No it is not a multiple of 7";
    }
    else if (ch5 == 8)
    {
        y = x % 1000;
        if (y % 8 == 0)
        {
            cout << "\n\n=> The following conditions are met,\n"
                 << "   the last three digits " << y << " is divisible by 8, \n"
                 << "   so, " << x << " is divisible by 8";
        }
        else
        {
            cout << "\n\n=> The following conditions are not met,\n"
                 << "   the last three digits " << y << " is not divisible by 8, \n"
                 << "   so, " << x << " is not divisible by 8";
        }
    }
    else if (ch5 == 9)
    {
        int q = 0;
        int arr1[10];
        z = 0;
        while (x > 0)
        {
            y = x % 10;
            arr1[q] = y;
            z = z + y;
            x = x / 10;
            y = 0;
            q++;
        }
        cout << "\n\n";
        cout << "=> The sum of its digits is ";
        for (int i = q - 1; i >= 0; i--)
        {
            cout << arr1[i];
            if (i >= 1)
                cout << " + ";
        }

        cout << " = " << z;
        cout << "\n\n";
        if (z % 9 == 0)
        {
            cout << "   The following conditions are meet, \n"
                 << "   the sum of its digits is divisible by 9, \n"
                 << "   so, " << p << " is divisible by 9";
        }
        else
        {
            cout << "   The following conditions are not meet, \n"
                 << "   the sum of its digits is not divisible by 9, \n"
                 << "   so, " << p << " is not divisible by 9";
        }
    }
    else if (ch5 == 10)
    {
        y = x % 10;
        if (y == 0)
        {
            cout << "\n\n=> The following conditions are met,\n"
                 << "   the last digits is " << y << " ,\n"
                 << "   so, " << x << " is divisible by 10";
        }
        else
        {
            cout << "\n\n=> The following conditions are not met,\n"
                 << "   the last digits is " << y << " , \n"
                 << "   so, " << x << " is not divisible by 10";
        }
    }
}

int main()
{
    system("cls");
    after();
    getch();
    ex_of_after();
    getch();
    ques_of_after();
    getch();
    return 0;
}