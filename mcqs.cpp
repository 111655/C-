#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <unistd.h>
using namespace std;

int main()
{
     system("cls");
     char ch, ans;
     int ch2, ch4, ch5, ch6;
     // int a,b,s;
     double area, b, h, a, s, l, diag, pm;

     do
     {
          system("cls");
          cout << "***** welcome *****" << endl;
          cout << endl;
          cout << " 1. Class '1' " << endl;
          cout << " 2. Class '2' " << endl;
          cout << " 3. Class '3' " << endl;
          cout << " 4. Class '4' " << endl;
          cout << " 5. Class '5' " << endl;
          cout << " 6. Class '6' " << endl;
          cout << " 7. Calculation " << endl;
          cout << " 8. Quiz " << endl;

          cout << endl
               << endl;

          cout << "Press '0' to Exit" << endl;
          // cout<< endl;
          cout << "Enter your choice" << endl;
          cin >> ch;

          switch (ch)
          {
          // ********************************** Class '1' *************************************
          case '1':
          {
               system("cls");
               do
               {
                    cout << "***** Menu *****" << endl;
                    cout << endl;
                    cout << "1. Numbers from 1 to 100 " << endl;
                    cout << "2. Addition " << endl;
                    cout << "3. Subtraction " << endl;
                    cout << "4. Multiplication " << endl;
                    cout << "5. Division " << endl;
                    cout << "6. Table " << endl;
                    cout << endl;
                    cout << "for back press 0 " << endl;
                    cout << "Enter your choice" << endl;
                    cin >> ch2;

                    if (ch2 == 1)
                    {

                         // ------------------------------ Numbers from 1 to 100 -------------------------------

                         system("cls");
                         cout << "Number from 1 to 100 " << endl
                              << endl;
                         cout << "1. ONE             "
                              << "11. ELEVEN         "
                              << "21. TWENTY-ONE       "
                              << "31. THIRTY-ONE      "
                              << "41. FORTY-ONE    " << endl;
                         cout << "2. TWO             "
                              << "12. TWELVE         "
                              << "22. TWENTY-TWO       "
                              << "32. THIRTY-TWO      "
                              << "42. FORTY-TWO    " << endl;
                         cout << "3. THREE           "
                              << "13. THIRTEEN       "
                              << "23. TWENTY-THREE     "
                              << "33. THIRTY-THREE    "
                              << "43. FORTY-THREE  " << endl;
                         cout << "4. FOUR            "
                              << "14. FOURTEEN       "
                              << "24. TWENTY-FOUR      "
                              << "34. THIRTY-FOUR     "
                              << "44. FORTY-FOUR   " << endl;
                         cout << "5. FIVE            "
                              << "15. FIFTEEN        "
                              << "25. TWENTY-FIVE      "
                              << "35. THIRTY-FIVE     "
                              << "45. FORTY-FIVE   " << endl;
                         cout << "6. SIX             "
                              << "16. SIXTEEN        "
                              << "26. TWENTY-SIX       "
                              << "36. THIRTY-SIX      "
                              << "46. FORTY-SIX    " << endl;
                         cout << "7. SEVEN           "
                              << "17. SEVENTEEN      "
                              << "27. TWENTY-SEVEN     "
                              << "37. THIRTY-SEVEN    "
                              << "47. FORTY-SEVEN  " << endl;
                         cout << "8. EIGHT           "
                              << "18. EIGHTEEN       "
                              << "28. TWENTY-EIGHT     "
                              << "38. THIRTY-EIGHT    "
                              << "48. FORTY-EIGHT  " << endl;
                         cout << "9. NINE            "
                              << "19. NINETEEN       "
                              << "29. TWENTY-NINE      "
                              << "39. THIRTY-NINE     "
                              << "49. FORTY-NINE   " << endl;
                         cout << "10. TEN            "
                              << "20. TWENTY         "
                              << "30. THIRTY           "
                              << "40. FOURTY          "
                              << "50. FIFTY        " << endl;

                         cout << "\n\n\n";

                         cout << "51. FIFTY-ONE      "
                              << "61. SIXTY-ONE      "
                              << "71. SEVENTY-ONE      "
                              << "81. EIGHTY-ONE      "
                              << "91. NINETY-ONE    " << endl;
                         cout << "52. FIFTY-TWO      "
                              << "62. SIXTY-TWO      "
                              << "72. SEVENTY-TWO      "
                              << "82. EIGHTY-TWO      "
                              << "92. NINETY-TWO    " << endl;
                         cout << "53. FIFTY-THREE    "
                              << "63. SIXTY-THREE    "
                              << "73. SEVENTY-THREE    "
                              << "83. EIGHTY-THREE    "
                              << "93. NINETY-THREE  " << endl;
                         cout << "54. FIFTY-FOUR     "
                              << "64. SIXTY-FOUR     "
                              << "74. SEVENTY-FOUR     "
                              << "84. EIGHTY-FOUR     "
                              << "94. NINETY-FOUR   " << endl;
                         cout << "55. FIFTY-FIVE     "
                              << "65. SIXTY-FIVE     "
                              << "75. SEVENTY-FIVE     "
                              << "85. EIGHTY-FIVE     "
                              << "95. NINETY-FIVE   " << endl;
                         cout << "56. FIFTY-SIX      "
                              << "66. SIXTY-SIX      "
                              << "76. SEVENTY-SIX      "
                              << "86. EIGHTY-SIX      "
                              << "96. NINETY-SIX    " << endl;
                         cout << "57. FIFTY-SEVEN    "
                              << "67. SIXTY-SEVEN    "
                              << "77. SEVENTY-SEVEN    "
                              << "87. EIGHTY-SEVEN    "
                              << "97. NINETY-SEVEN  " << endl;
                         cout << "58. FIFTY-EIGHT    "
                              << "68. SIXTY-EIGHT    "
                              << "78. SEVENTY-EIGHT    "
                              << "88. EIGHTY-EIGHT    "
                              << "98. NINETY-EIGHT  " << endl;
                         cout << "59. FIFTY-NINE     "
                              << "69. SIXTY-NINE     "
                              << "79. SEVENTY-NINE     "
                              << "89. EIGHTY-NINE     "
                              << "99. NINETY-NINE   " << endl;
                         cout << "60. SIXTY          "
                              << "70. SEVENTY        "
                              << "80. EIGHTY           "
                              << "90. NINTY           "
                              << "100. HUNDRED      " << endl;

                         getch();
                         system("cls");
                    }

                    else if (ch2 == 2)
                    {
                         // ------------------------------------ Addition ----------------------------------------

                         system("cls");

                         cout << "Enter First No : ";
                         cin >> a;
                         cout << "Enter Second No : ";
                         cin >> b;
                         s = a + b;

                         cout << a << " + " << b << " = " << s << endl
                              << endl;
                         getch();
                         cout << "Examples:" << endl;
                         cout << "\t        " << a + 6 << "\t        " << a + 4 << "\t         " << a + 7 << "\t         " << a + 5 << "\t        " << a + 10 << endl;
                         cout << "\t      + " << b + 3 << "\t      + " << b + 1 << "\t       + " << b + 9 << "\t       + " << b + 8 << "\t      + " << b + 9 << endl;
                         cout << "            --------       --------         --------        --------       --------" << endl;
                         cout << "\t        " << a + 6 + b + 3 << "\t        " << a + 4 + b + 1 << "\t         " << a + 7 + b + 9 << "\t         " << a + 5 + b + 8 << "\t        " << a + 10 + b + 9 << endl;
                         cout << "            --------       --------         --------        --------       --------" << endl;
                         cout << endl
                              << endl;
                         getch();
                         cout << "Revision:" << endl;

                         cout << "\t        " << a + 5 << "\t        " << a + 2 << "\t         " << a + 1 << "\t         " << a + 7 << "\t        " << a + 6 << endl;
                         cout << "\t      + " << b + 3 << "\t      + " << b + 4 << "\t       + " << b + 3 << "\t       + " << b + 3 << "\t      + " << b + 1 << endl;
                         cout << "            --------       --------         --------        --------       --------" << endl;

                         cout << "            --------       --------         --------        --------       --------" << endl;
                         cout << endl
                              << endl;
                         cout << "\t        " << a + 15 << "\t        " << a + 12 << "\t         " << a + 11 << "\t         " << a + 17 << "\t        " << a + 16 << endl;
                         cout << "\t      + " << b + 13 << "\t      + " << b + 14 << "\t       + " << b + 13 << "\t       + " << b + 13 << "\t      + " << b + 11 << endl;
                         cout << "              --------       --------         --------        --------       --------" << endl;
                         cout << "              --------       --------         --------        --------       --------" << endl;
                         cout << endl
                              << endl;
                         cout << "\t     a) " << a + 2 << " + " << b + 1 << " = "
                              << "\t      b)  " << a + 4 << " + " << b + 2 << " = "
                              << "\t        c) " << a + 3 << " + " << b + 5 << " = "
                              << "\t      d) " << a + 4 << " + " << b + 1 << " = " << endl;
                         cout << endl
                              << endl;
                         cout << "\t     e) " << a + 10 << " + " << b + 12 << " = "
                              << "\t      f)  " << a + 14 << " + " << b + 12 << " = "
                              << "\t        g) " << a + 13 << " + " << b + 15 << " = "
                              << "\t      h) " << a + 14 << " + " << b + 11 << " = " << endl;
                         cout << endl
                              << endl;
                         cout << "\t     i) " << a + 21 << " + " << b + 31 << " = "
                              << "\t      j)  " << a + 14 << " + " << b + 22 << " = "
                              << "\t        k) " << a + 31 << " + " << b + 25 << " = "
                              << "\t      l) " << a + 24 << " + " << b + 21 << " = " << endl;

                         getch();
                         system("cls");
                    }

                    else if (ch2 == 3)
                    {
                         // --------------------------------------- Substraction --------------------------------------
                         system("cls");
                         cout << "Enter First No : ";
                         cin >> a;
                         cout << "Enter Second No : ";
                         cin >> b;
                         s = a - b;

                         cout << a << " - " << b << " = " << s << endl
                              << endl;
                         getch();
                         cout << "Example:" << endl;
                         cout << "\t        " << a + 3 << "\t        " << a + 7 << "\t         " << a + 9 << "\t         " << a << "\t        " << a + 2 << endl;
                         cout << "\t      - " << b + 8 << "\t      - " << b + 3 << "\t       - " << b + 5 << "\t       - " << b + 4 << "\t      - " << b + 7 << endl;
                         cout << "            --------       --------         --------        --------       --------" << endl;
                         cout << "\t        " << (a + 3) - (b + 8) << "\t        " << (a + 7) - (b + 3) << "\t         " << (a + 9) - (b + 5) << "\t         " << a - (b + 4) << "\t        " << (a + 2) - (b + 7) << endl;
                         cout << "            --------       --------         --------        --------       --------" << endl;

                         getch();
                         cout << "Revision:" << endl;

                         cout << "\t        " << a + 5 << "\t        " << a + 2 << "\t         " << a + 1 << "\t         " << a + 7 << "\t        " << a + 6 << endl;
                         cout << "\t      - " << b + 3 << "\t      - " << b + 4 << "\t       - " << b + 3 << "\t       - " << b + 3 << "\t      - " << b + 1 << endl;
                         cout << "            --------       --------         --------        --------       --------" << endl;
                         cout << "            --------       --------         --------        --------       --------" << endl;
                         cout << endl
                              << endl;
                         cout << "\t        " << a + 15 << "\t        " << a + 12 << "\t         " << a + 11 << "\t         " << a + 17 << "\t        " << a + 16 << endl;
                         cout << "\t      - " << b + 13 << "\t      - " << b + 14 << "\t       - " << b + 13 << "\t       - " << b + 13 << "\t      - " << b + 11 << endl;
                         cout << "              --------       --------         --------        --------       --------" << endl;
                         cout << "              --------       --------         --------        --------       --------" << endl;
                         cout << endl
                              << endl;
                         cout << "\t     a) " << a + 2 << " - " << b + 1 << " = "
                              << "\t      b)  " << a + 4 << " - " << b + 2 << " = "
                              << "\t        c) " << a + 3 << " - " << b + 5 << " = "
                              << "\t      d) " << a + 4 << " - " << b + 1 << " = " << endl;
                         cout << endl
                              << endl;
                         cout << "\t     e) " << a + 10 << " - " << b + 12 << " = "
                              << "\t      f)  " << a + 14 << " - " << b + 12 << " = "
                              << "\t        g) " << a + 13 << " - " << b + 15 << " = "
                              << "\t      h) " << a + 14 << " - " << b + 11 << " = " << endl;
                         cout << endl
                              << endl;
                         cout << "\t     i) " << a + 21 << " - " << b + 31 << " = "
                              << "\t      j)  " << a + 14 << " - " << b + 22 << " = "
                              << "\t        k) " << a + 31 << " - " << b + 25 << " = "
                              << "\t      l) " << a + 24 << " - " << b + 21 << " = " << endl;

                         getch();
                         system("cls");
                    }

                    else if (ch2 == 4)
                    {
                         // --------------------------------------- Multiplication --------------------------------------
                         system("cls");
                         cout << "Enter First No : ";
                         cin >> a;
                         cout << "Enter Second No : ";
                         cin >> b;
                         s = a * b;

                         cout << a << " x " << b << " = " << s << endl
                              << endl;
                         getch();
                         cout << "Revision:" << endl;

                         cout << "\t        " << a + 5 << "\t        " << a + 2 << "\t         " << a + 1 << "\t         " << a + 7 << "\t        " << a + 6 << endl;
                         cout << "\t      x " << b + 3 << "\t      x " << b + 4 << "\t       x " << b + 3 << "\t       x " << b + 3 << "\t      x " << b + 1 << endl;
                         cout << "            --------       --------         --------        --------       --------" << endl;
                         cout << "            --------       --------         --------        --------       --------" << endl;
                         cout << endl
                              << endl;
                         cout << "\t        " << a + 15 << "\t        " << a + 12 << "\t         " << a + 11 << "\t         " << a + 17 << "\t        " << a + 16 << endl;
                         cout << "\t      x " << b + 13 << "\t      x " << b + 14 << "\t       x " << b + 13 << "\t       x " << b + 13 << "\t      x " << b + 11 << endl;
                         cout << "              --------       --------         --------        --------       --------" << endl;
                         cout << "              --------       --------         --------        --------       --------" << endl;
                         cout << endl
                              << endl;
                         cout << "\t     a) " << a + 2 << " x " << b + 1 << " = "
                              << "\t      b)  " << a + 4 << " x " << b + 2 << " = "
                              << "\t        c) " << a + 3 << " x " << b + 5 << " = "
                              << "\t      d) " << a + 4 << " x " << b + 1 << " = " << endl;
                         cout << endl
                              << endl;
                         cout << "\t     e) " << a + 10 << " x " << b + 12 << " = "
                              << "\t      f)  " << a + 14 << " x " << b + 12 << " = "
                              << "\t        g) " << a + 13 << " x " << b + 15 << " = "
                              << "\t      h) " << a + 14 << " x " << b + 11 << " = " << endl;
                         cout << endl
                              << endl;
                         cout << "\t     i) " << a + 21 << " x " << b + 31 << " = "
                              << "\t      j)  " << a + 14 << " x " << b + 22 << " = "
                              << "\t        k) " << a + 31 << " x " << b + 25 << " = "
                              << "\t      l) " << a + 24 << " x " << b + 21 << " = " << endl;

                         getch();
                         system("cls");
                    }

                    else if (ch2 == 5)
                    {
                         // ------------------------------------- Division -----------------------------------------
                         system("cls");
                         cout << "Enter First No : ";
                         cin >> a;
                         cout << "Enter Second No : ";
                         cin >> b;
                         s = b / a;

                         cout << b << " / " << a << " = " << s << endl
                              << endl;
                         getch();
                         cout << "Exaples:-" << endl;
                         cout << "\t    " << a << " ) " << b + 8 << " ( " << (b + 8) / a << "\t   " << a + 1 << " ) " << b + 5 << " ( " << (b + 5) / (a + 1) << "\t    " << a + 2 << " ) " << b + 22 << " ( " << (b + 22) / (a + 2) << "\t    " << a + 3 << " ) " << b + 35 << " ( " << (b + 35) / (a + 3) << "\t   " << a + 4 << " ) " << b + 32 << " ( " << (b + 32) / (a + 4) << endl;

                         cout << "\t        " << b + 8 << "\t       " << b + 5 << "\t        " << b + 22 << "\t        " << b + 35 << "\t       " << b + 32 << "   " << endl;

                         cout << "            --------       --------         --------        --------       --------" << endl;
                         cout << "\t        "
                              << "xx"
                              << "\t       "
                              << "xx"
                              << "\t        "
                              << "xx"
                              << "\t        "
                              << "xx"
                              << "\t       "
                              << "xx"
                              << "   " << endl;
                         cout << "            --------       --------         --------        --------       --------" << endl;
                         cout << endl
                              << endl;
                         getch();

                         cout << "Revision:" << endl;

                         int temp;
                         temp = a;
                         a = b;
                         b = temp;

                         cout << "\t    " << a - 4 << " ) " << b + 16 << " ( "
                              << "\t   " << a - 2 << " ) " << b + 62 << " ( "
                              << "\t    " << a << " ) " << b + 88 << " ( "
                              << "\t    " << a + 1 << " ) " << b + 42 << " ( "
                              << "\t   " << a + 2 << " ) " << b + 22 << " ( " << endl;
                         cout << endl
                              << endl;
                         cout << "            --------       --------         --------        --------       --------" << endl;
                         cout << "            --------       --------         --------        --------       --------" << endl;
                         cout << endl
                              << endl;
                         cout << "\t    " << a - 2 << " ) " << b + 38 << " ( "
                              << "\t   " << a + 5 << " ) " << b + 72 << " ( "
                              << "\t    " << a - 6 << " ) " << b + 34 << " ( "
                              << "\t    " << a + 2 << " ) " << b + 46 << " ( "
                              << "\t   " << a + 1 << " ) " << b + 75 << " ( " << endl;
                         cout << endl
                              << endl;
                         cout << "            --------       --------         --------        --------       --------" << endl;
                         cout << "            --------       --------         --------        --------       --------" << endl;
                         cout << endl
                              << endl;
                         cout << "\t     a) " << a + 26 << " / " << b + 2 << " = "
                              << "\t      b)  " << a + 2 << " / " << b + 4 << " = "
                              << "\t        c) " << a + 5 << " / " << b + 3 << " = "
                              << "\t      d) " << a + 54 << " / " << b + 6 << " = " << endl;
                         cout << endl
                              << endl;
                         cout << "\t     e) " << a + 39 << " / " << b + 5 << " = "
                              << "\t      f)  " << a + 14 << " / " << b + 2 << " = "
                              << "\t        g) " << a + 15 << " / " << b + 3 << " = "
                              << "\t      h) " << a + 11 << " / " << b + 5 << " = " << endl;
                         cout << endl
                              << endl;
                         cout << "\t     i) " << a + 70 << " / " << b + 6 << " = "
                              << "\t      j)  " << a + 22 << " / " << b + 4 << " = "
                              << "\t        k) " << a + 17 << " / " << b + 1 << " = "
                              << "\t      l) " << a + 35 << " / " << b + 7 << " = " << endl;

                         cout << endl;

                         getch();
                         system("cls");
                    }

                    else if (ch2 == 6)
                    {
                         // ------------------------------------- Table  -----------------------------------------
                         system("cls");
                         float n;
                         int ch3;
                         do
                         {
                              system("cls");
                              cout << "1. For learning" << endl;
                              cout << "2. For revision" << endl
                                   << endl;
                              cout << "For back press '0'" << endl;

                              cout << "Enter your choise" << endl;
                              cin >> ch3;

                              if (ch3 == 1)
                              {
                                   system("cls");
                                   cout << "Table of ";
                                   cin >> n;
                                   for (int i = 1; i <= 10; i++)
                                   {
                                        cout << n << " * " << i << " = " << n * i << endl;
                                   }
                                   getch();
                              }

                              else if (ch3 == 2)
                              {
                                   system("cls");
                                   cout << "Table of ";
                                   cin >> n;
                                   for (int i = 1; i <= 10; i++)
                                   {
                                        cout << n << " * " << i << " = " << n * i << endl;
                                        sleep(2);
                                   }
                                   getch();
                              }

                              else if (ch3 == 0)
                                   break;
                         } while (ch3 >= 1 && ch3 <= 2);

                         getch();
                         system("cls");
                    }

               } while (ch2 >= 1 && ch2 <= 6);
               break;
          }

          //********************************* Class '2' ***************************************
          case '2':
          {
               system("cls");
               cout << "Chapter 1: What is long, What is round" << endl;
               cout << "Chapter 2: Counting in groups" << endl;
               cout << "Chapter 3: How much can you carry" << endl;
               cout << "Chapter 4: Counting in tens" << endl;
               cout << "Chapter 5: Patterns" << endl;
               cout << "Chapter 6: Footprints" << endl;
               cout << "Chapter 7: Jugs and mugs" << endl;
               cout << "Chapter 8: My funday" << endl;

               getch();
               system("cls");
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

               getch();
               break;
          }

          //******************************** Class '3' ****************************************
          case '3':
          {
               system("cls");
               cout << "good morning";

               break;
          }

          //******************************* Class '4' ****************************************
          case '4':
          {
               system("cls");
               cout << "good afternoom";

               break;
          }

          //******************************** Class '5' ****************************************
          case '5':
          {
               system("cls");
               cout << "good evening";

               break;
          }

          //******************************** Class '6' *****************************************
          case '6':
          {
               system("cls");

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

                    cout << " 9. More options" << endl
                         << endl;

                    cout << "For back press '0'" << endl;
                    cout << endl;
                    cout << "Enter your choice" << endl;
                    cin >> ch4;

                    if (ch4 == 1)
                    {
                         system("cls");
                         do
                         {
                              system("cls");
                              cout << "***** Triangle Menu *****" << endl;
                              cout << endl;
                              cout << "1.Area" << endl;
                              cout << "2.Perimeter" << endl;
                              cout << "3.Semi-Perimeter" << endl;
                              cout << "4.Using Heron's Formula" << endl;
                              cout << "5.Back" << endl;
                              cout << endl;
                              cout << "enter your choice" << endl;
                              cin >> ch5;

                              if (ch5 == 1)
                              {
                                   // ******************** area of triangle ***********************
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
                                   getch();
                              }

                              else if (ch5 == 2)
                              {
                                   // *********************** perimeter of triangle ******************
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

                                   getch();
                              }

                              else if (ch5 == 3)
                              {
                                   // *************************** semi perimeter of triangle **********************
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
                                   cout << "                            = (" << a << "+" << b << "+" << h << ")/2" << endl;

                                   cout << "\t     semi-perimeter = " << pm << endl;

                                   cout << endl
                                        << endl;

                                   getch();
                              }

                              else if (ch5 == 4)
                              {
                                   // ****************** using heron's formula *******************
                                   system("cls");
                                   cout << "enter semi-perimeter 's' = ";
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
                                   cout << "   Semi-perimeter (s) = " << s << endl;
                                   cout << "           side 'a' = " << a << endl;
                                   cout << "           side 'b' = " << b << endl;
                                   cout << "           side 'c' = " << h << endl;
                                   cout << " Soln, " << endl;
                                   cout << " Heron's Formula = under root(s*(s-a)*(s-b)*(s-c)) " << endl;
                                   cout << "                 = under root(" << s << "*(" << s << "-" << a << ")*(" << s << "-" << b << ")*(" << s << "-" << h << "))" << endl;

                                   cout << "\t    area = " << pm << "  feet sqr" << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 5)
                                   break;

                         } while (ch5 >= 1 && ch5 <= 5);
                    }

                    else if (ch4 == 2)
                    {
                         system("cls");
                         do
                         {
                              // ------------------ rectangle menu -----------------------
                              system("cls");
                              cout << "***** Rectangle menu *****" << endl;
                              cout << endl;
                              cout << "1.Area" << endl;
                              cout << "2.Perimeter" << endl;
                              cout << "3.Diagonal" << endl;
                              cout << "4.Area of 4 sides of wall" << endl;
                              cout << "5.Back" << endl;
                              cout << endl;
                              cout << "enter your choice" << endl;
                              cin >> ch5;

                              if (ch5 == 1)
                              {
                                   // ********************** area of rectangle ******************
                                   system("cls");
                                   cout << "enter length = ";
                                   cin >> l;
                                   cout << "enter breadth = ";
                                   cin >> b;
                                   system("cls");
                                   cout << "Given," << endl;
                                   cout << "\t length = " << l << endl;
                                   cout << "\t breadth = " << b << endl;
                                   cout << "soln," << endl;
                                   cout << "Area of rectangle = l * b" << endl;
                                   cout << "                  = " << l << " * " << b << endl;

                                   area = l * b;
                                   cout << "             area = " << area << endl;

                                   cout << endl
                                        << endl;

                                   getch();
                              }

                              else if (ch5 == 2)
                              {
                                   // ******************************* perimeter of rectangle ******************
                                   system("cls");
                                   cout << "enter length = ";
                                   cin >> l;
                                   cout << "enter breadth = ";
                                   cin >> b;
                                   system("cls");
                                   cout << "Given," << endl;
                                   cout << "\t length = " << l << endl;
                                   cout << "\t breadth = " << b << endl;
                                   cout << "soln," << endl;
                                   cout << "Perimeter of rectangle = 2*(l+b)" << endl;
                                   cout << "                       = 2*(" << l << "+" << b << ")" << endl;

                                   pm = 2 * (l + b);
                                   cout << "             perimeter = " << pm << endl;
                                   cout << endl
                                        << endl;

                                   getch();
                              }

                              else if (ch5 == 3)
                              {
                                   // ******************** diagonal of rectangle ***********************
                                   system("cls");
                                   cout << "enter length = ";
                                   cin >> l;
                                   cout << "enter breadth = ";
                                   cin >> b;
                                   system("cls");
                                   cout << "Given," << endl;
                                   cout << "\t length = " << l << endl;
                                   cout << "\t breadth = " << b << endl;
                                   cout << "soln," << endl;
                                   cout << "Diagonal of rectangle = under root(l * l + b * b)" << endl;
                                   cout << "                      = under root(" << l << "*" << l << "+" << b << "*" << b << ")" << endl;
                                   diag = sqrt(l * l + b * b);
                                   cout << "             diagonal = " << diag << endl;
                                   cout << endl
                                        << endl;

                                   getch();
                              }

                              else if (ch5 == 4)
                              {
                                   // ****************************** area of 4 side wall *********************
                                   system("cls");
                                   cout << "enter length = ";
                                   cin >> l;
                                   cout << "enter breadth = ";
                                   cin >> b;
                                   cout << "enter height = ";
                                   cin >> h;
                                   system("cls");
                                   cout << "Given," << endl;
                                   cout << "\t length = " << l << endl;
                                   cout << "\t breadth = " << b << endl;
                                   cout << "\t height = " << h << endl;
                                   cout << "soln," << endl;
                                   cout << "Area of 4 sides of wall = 2 *(l + b) * h" << endl;
                                   cout << "                        = 2 *(" << l << "+" << b << ") *" << h << endl;

                                   area = 2 * (l + b) * h;
                                   cout << "                   area = " << area << endl;

                                   cout << endl
                                        << endl;

                                   getch();
                              }
                              else if (ch5 == 5)
                                   break;

                         } while (ch5 >= 1 && ch5 <= 5);
                    }

                    else if (ch4 == 3)
                    {
                         system("cls");
                         do
                         {
                              // ************************* square menu ********************************
                              system("cls");
                              cout << "***** Square menu *****" << endl;
                              cout << endl;
                              cout << "1.Area of square" << endl;
                              cout << "2.Perimeter of square" << endl;
                              cout << "3.Diagonal of square" << endl;
                              cout << "4.Back" << endl;
                              cout << endl;
                              cout << "enter your choice" << endl;
                              cin >> ch5;

                              if (ch5 == 1)
                              {
                                   // ********************** area of square ***********************
                                   system("cls");
                                   cout << "enter value of side = ";
                                   cin >> a;
                                   system("cls");
                                   cout << " Given," << endl;
                                   cout << "\t side = " << a << endl;
                                   cout << "soln," << endl;
                                   cout << "Area of square = side * side" << endl;
                                   cout << "\t       = " << a << " * " << a << endl;

                                   area = a * a;
                                   cout << "\t  area = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 2)
                              {
                                   // ********************* perimeter of square ****************
                                   system("cls");
                                   cout << "enter value of side = ";
                                   cin >> a;
                                   system("cls");
                                   cout << "Given," << endl;
                                   cout << "\t side = " << a << endl;

                                   cout << "soln," << endl;
                                   cout << "Perimeter of square = 4 * side" << endl;
                                   cout << "                    = 4 * " << a << endl;
                                   pm = 4 * a;
                                   cout << "\t  perimeter = " << pm << endl;
                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 3)
                              {
                                   // **********************diagonal of square *********************
                                   system("cls");
                                   cout << "enter value of side = ";
                                   cin >> a;
                                   system("cls");
                                   cout << "Given," << endl;
                                   cout << "\t side = " << a << endl;
                                   cout << "soln," << endl;
                                   cout << "diagonal = under root (2) * side" << endl;
                                   cout << "         = under root (2) * " << a << endl;
                                   diag = sqrt(2) * a;
                                   cout << "diagonal = " << diag << endl;
                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 4)
                                   break;

                         } while (ch5 >= 1 && ch5 <= 4);
                    }

                    else if (ch4 == 4)
                    {
                         system("cls");
                         do
                         {
                              // ************************** circle menu **************************************
                              system("cls");
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
                              cin >> ch5;

                              if (ch5 == 1)
                              {
                                   // ***************************** area of circle ****************************************
                                   system("cls");
                                   cout << "enter value of radius = ";
                                   cin >> a;
                                   system("cls");

                                   area = 3.14 * a * a;
                                   cout << "Given," << endl;
                                   cout << "\t radius = " << a << endl;
                                   cout << "soln," << endl
                                        << endl;
                                   cout << "area of circle = 3.14 * radius * radius" << endl;
                                   cout << "               = " << 3.14 << " * " << a << " * " << a << endl;
                                   cout << "          area = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 2)
                              {
                                   // ***************************** area of semi-circle ****************************************
                                   system("cls");
                                   cout << "enter value of radius = ";
                                   cin >> a;
                                   system("cls");

                                   area = (3.14 * a * a) / 0.5;
                                   cout << "Given," << endl;
                                   cout << "\t radius = " << a << endl;
                                   cout << "soln," << endl
                                        << endl;
                                   cout << "area of semi-circle = (3.14 * radius * radius)1/2" << endl;
                                   cout << "                    = (" << 3.14 << " * " << a << " * " << a << ")1/2" << endl;
                                   cout << "               area = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 3)
                              {
                                   // ***************************** area of quadrants ****************************************
                                   system("cls");
                                   cout << "enter value of radius = ";
                                   cin >> a;
                                   system("cls");

                                   area = (3.14 * a * a) / 4;
                                   cout << "Given," << endl;
                                   cout << "\t radius = " << a << endl;
                                   cout << "soln," << endl
                                        << endl;
                                   cout << "area of quadrant = (3.14 * radius * radius)/4" << endl;
                                   cout << "                 = (" << 3.14 << " * " << a << " * " << a << ")/4" << endl;
                                   cout << "            area = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 4)
                              {
                                   // ***************************** diameter of circle ****************************************
                                   system("cls");
                                   cout << "enter value of radius = ";
                                   cin >> a;
                                   system("cls");

                                   area = 2 * a;
                                   cout << "Given," << endl;
                                   cout << "\t radius = " << a << endl;
                                   cout << "soln," << endl
                                        << endl;
                                   cout << "diameter of circle = 2 * radius" << endl;
                                   cout << "                   = " << 2 << " * " << a << endl;
                                   cout << "          diameter = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 5)
                              {
                                   // ***************************** circumference of circle ****************************************
                                   system("cls");
                                   cout << "enter value of radius = ";
                                   cin >> a;
                                   system("cls");

                                   area = 2 * 3.14 * a;
                                   cout << "Given," << endl;
                                   cout << "\t radius = " << a << endl;
                                   cout << "soln," << endl
                                        << endl;
                                   cout << "circumference of circle = 2 * 3.14 * radius" << endl;
                                   cout << "                        = " << 2 << " * " << 3.14 << " * " << a << endl;
                                   cout << "          circumference = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 6)
                                   break;

                         } while (ch5 >= 1 && ch5 <= 6);
                    }

                    else if (ch4 == 5)
                    {
                         system("cls");
                         do
                         {
                              // **************** cube menu ***************************
                              system("cls");
                              cout << "***** cube menu *****" << endl;
                              cout << endl;
                              cout << "1.Volume of Cube" << endl;
                              cout << "2.Total Surface Area Of Cube" << endl;
                              cout << "3.Lateral Surface Area Of Cube" << endl;
                              cout << "4.Diagonal Of Cube" << endl;
                              cout << "5.Back" << endl;
                              cout << endl;
                              cout << "enter your choice" << endl;
                              cin >> ch5;

                              if (ch5 == 1)
                              {
                                   // ********************* volume of cube ********************
                                   system("cls");
                                   cout << "enter value of edge (a) = ";
                                   cin >> a;
                                   system("cls");

                                   area = a * a * a;
                                   cout << "Given," << endl;
                                   cout << "\t edge (a) = " << a << endl;
                                   cout << "soln," << endl
                                        << endl;
                                   cout << "volume of cube = a * a * a" << endl;
                                   cout << "               = " << a << " * " << a << " * " << a << endl;
                                   cout << "        volume = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 2)
                              {
                                   // ****************************** total surface ***************************
                                   system("cls");
                                   cout << "enter value of edge (a) = ";
                                   cin >> a;
                                   system("cls");

                                   area = 6 * a * a;
                                   cout << "Given," << endl;
                                   cout << "\t edge (a) = " << a << endl;
                                   cout << "soln," << endl
                                        << endl;
                                   cout << "total surface area of cube = 6 * a * a" << endl;
                                   cout << "                           = " << 6 << " * " << a << " * " << a << endl;
                                   cout << "             total surface = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 3)
                              {
                                   // ***************************** lateral surface *****************************
                                   system("cls");
                                   cout << "enter value of edge (a) = ";
                                   cin >> a;
                                   system("cls");

                                   area = 4 * a * a;
                                   cout << "Given," << endl;
                                   cout << "\t edge (a) = " << a << endl;
                                   cout << "soln," << endl
                                        << endl;
                                   cout << "lateral surface area of cube = 4 * a * a" << endl;
                                   cout << "                             = " << 4 << " * " << a << " * " << a << endl;
                                   cout << "             lateral surface = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 4)
                              {
                                   // ******************************* diagonal *******************************
                                   system("cls");
                                   cout << "enter value of edge (a) = ";
                                   cin >> a;
                                   system("cls");

                                   area = a * sqrt(3);
                                   cout << "Given," << endl;
                                   cout << "\t edge (a) = " << a << endl;
                                   cout << "soln," << endl
                                        << endl;
                                   cout << "diagonal of cube = under root (3) * a " << endl;
                                   cout << "                 = under root (3)"
                                        << " * " << a << endl;
                                   cout << "        diagonal = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 5)
                                   break;

                         } while (ch5 >= 1 && ch5 <= 5);
                    }

                    else if (ch4 == 6)
                    {
                         system("cls");
                         do
                         {
                              // *********************************** sphere menu *****************************
                              system("cls");
                              cout << "***** Sphere menu *****" << endl;
                              cout << endl;
                              cout << "1.Diameter of a sphere " << endl;
                              cout << "2.Circumference of a sphere" << endl;
                              cout << "3.Surface area of a sphere" << endl;
                              cout << "4.Volume of a sphere" << endl;
                              cout << "5.radius of a sphere " << endl;
                              cout << "6.Back" << endl;
                              cout << endl;
                              cout << "enter your choice" << endl;
                              cin >> ch5;

                              if (ch5 == 1)
                              {
                                   // ************************************ diameter of sphere **************************
                                   system("cls");
                                   cout << "enter value of radius (r) = ";
                                   cin >> a;
                                   system("cls");

                                   area = 2 * a;
                                   cout << "Given," << endl;
                                   cout << "\t radius = " << a << endl;
                                   cout << "soln," << endl
                                        << endl;
                                   cout << "Diameter of a sphere = 2 * radius" << endl;
                                   cout << "                     = " << 2 << " * " << a << endl;
                                   cout << "            diameter = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 2)
                              {
                                   // ********************************** circumference of a sphere **************************
                                   system("cls");
                                   cout << "enter value of radius (r) = ";
                                   cin >> a;
                                   system("cls");

                                   area = 2 * 3.14 * a;
                                   cout << "Given," << endl;
                                   cout << "\t radius = " << a << endl;
                                   cout << "soln," << endl
                                        << endl;
                                   cout << "circumference of a sphere = 2 * 3.14 * radius" << endl;
                                   cout << "                          = " << 2 << " * 3.14 * " << a << endl;
                                   cout << "            circumference = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 3)
                              {
                                   // ********************************** surface area ***********************************
                                   system("cls");
                                   cout << "enter value of radius (r) = ";
                                   cin >> a;
                                   system("cls");

                                   area = 4 * 3.14 * a * a;
                                   cout << "Given," << endl;
                                   cout << "\t radius = " << a << endl;
                                   cout << "soln," << endl
                                        << endl;
                                   cout << "surface area of a sphere = 4 * 3.14 * r * r" << endl;
                                   cout << "                         = " << 4 << " * 3.14 * " << a << " * " << a << endl;
                                   cout << "            surface area = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 4)
                              {
                                   // ******************************** volume of sphere ******************************
                                   system("cls");
                                   cout << "enter value of radius (r) = ";
                                   cin >> a;
                                   system("cls");

                                   area = (1.33333 * 3.14 * a * a * a);
                                   cout << "Given," << endl;
                                   cout << "\t radius = " << a << endl;
                                   cout << "soln," << endl
                                        << endl;
                                   cout << "volume of a sphere = 4/3 * 3.14 * r * r * r" << endl;
                                   cout << "                   = (4 * 3.14 * " << a << " * " << a << " * " << a << ") / 3" << endl;
                                   cout << "            volume = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 5)
                              {
                                   // ****************************** radius of sphere ******************************
                                   system("cls");
                                   cout << "enter value of diameter (d) = ";
                                   cin >> a;
                                   system("cls");

                                   area = a / 2;
                                   cout << "Given," << endl;
                                   cout << "\t radius = " << a << endl;
                                   cout << "soln," << endl
                                        << endl;
                                   cout << "radius of a sphere = d/2" << endl;
                                   cout << "                   = " << a << " / 2 " << endl;
                                   cout << "            radius = " << area << endl;

                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 6)
                                   break;
                         } while (ch5 >= 1 && ch5 <= 5);
                    }

                    else if (ch4 == 7)
                    {
                         system("cls");
                         do
                         {
                              // ************************** rhombus menu **************************************
                              system("cls");
                              cout << "***** Rhombus menu *****" << endl;
                              cout << endl;
                              cout << "1.Area of rhombus " << endl;
                              cout << "2.Perimeter of rhombus" << endl;
                              cout << "3.Diagonal d1 " << endl;
                              cout << "4.Diagonal d2" << endl;
                              cout << "5.Area of rhombus using base and height " << endl;
                              cout << "6.Back" << endl;
                              cout << endl;
                              cout << "enter your choice" << endl;
                              cin >> ch5;

                              if (ch5 == 1)
                              {
                                   // ******************* area of rhombus **************************
                                   system("cls");

                                   cout << "Enter value of diagonal (d1) = ";
                                   cin >> b;
                                   cout << "Enter value of diagonal (d2) = ";
                                   cin >> h;
                                   system("cls");
                                   cout << "Given, " << endl;
                                   cout << "\tdiagonal (d1) = " << b << endl;
                                   cout << "\tdiagonal (d2) = " << h << endl;
                                   cout << "sol:," << endl;
                                   cout << "Area of rhombus = (d1 + d2) / 2 " << endl;
                                   cout << "                = (" << b << " + " << h << ") / 2 " << endl
                                        << endl;
                                   area = (b + h) / 2;
                                   cout << "           area = " << area << endl;
                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 2)
                              {
                                   // ******************* perimeter of rhombus **************************
                                   system("cls");

                                   cout << "Enter value of side (s) = ";
                                   cin >> b;
                                   //    cout << "Enter value of diagonal (d2) = ";
                                   //    cin >> h;
                                   system("cls");
                                   cout << "Given, " << endl;
                                   cout << "\tside (s) = " << b << endl;
                                   //    cout << "\tdiagonal (d2) = " << h << endl;
                                   cout << "sol:," << endl;
                                   cout << "Perimeter of rhombus = 4 * s " << endl;
                                   cout << "                     = " << 4 << " * " << b << endl
                                        << endl;
                                   area = 4 * b;
                                   cout << "           perimeter = " << area << endl;
                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 3)
                              {

                                   // ******************* diagonal d1 of rhombus **************************
                                   system("cls");

                                   cout << "Enter value of sides (s) = ";
                                   cin >> b;
                                   cout << "Enter value of diagonal (d2) = ";
                                   cin >> h;
                                   system("cls");
                                   cout << "Given, " << endl;
                                   cout << "\tside (s) = " << b << endl;
                                   cout << "\tdiagonal (d2) = " << h << endl;
                                   cout << "sol:," << endl;
                                   cout << "Diagonal (d1) = under root [(4*s*s)-(d2*d2)] " << endl;
                                   cout << "              = under root [(4*" << b << "*" << b << ") - (" << h << "*" << h << ")]" << endl
                                        << endl;
                                   area = sqrt((4 * b * b) - (h * h));
                                   cout << "Diagonal (d1) = " << area << endl;
                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 4)
                              {
                                   // ******************* diagonal d2 of rhombus **************************
                                   system("cls");

                                   cout << "Enter value of sides (s) = ";
                                   cin >> b;
                                   cout << "Enter value of diagonal (d1) = ";
                                   cin >> h;
                                   system("cls");
                                   cout << "Given, " << endl;
                                   cout << "\tside (s) = " << b << endl;
                                   cout << "\tdiagonal (d1) = " << h << endl;
                                   cout << "sol:," << endl;
                                   cout << "Diagonal (d2) = under root [(4*s*s)-(d1*d1)] " << endl;
                                   cout << "              = under root [(4*" << b << "*" << b << ") - (" << h << "*" << h << ")]" << endl
                                        << endl;
                                   area = sqrt((4 * b * b) - (h * h));
                                   cout << "Diagonal (d2) = " << area << endl;
                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 5)

                              {
                                   // ************************* Area of rhombus using base and height ******************
                                   system("cls");

                                   cout << "Enter value of base (b) = ";
                                   cin >> b;
                                   cout << "Enter value of height (h) = ";
                                   cin >> h;
                                   system("cls");
                                   cout << "Given, " << endl;
                                   cout << "\tbase (b) = " << b << endl;
                                   cout << "\theight (h) = " << h << endl;
                                   cout << "sol:," << endl;
                                   cout << "area of rhombus = b * h " << endl;
                                   cout << "                = " << b << " * " << h << endl
                                        << endl;
                                   area = b * h;
                                   cout << "area of rhombus = " << area << endl;
                                   cout << endl
                                        << endl;
                                   getch();
                              }

                              else if (ch5 == 6)
                                   break;

                         } while (ch5 >= 1 && ch5 <= 6);
                    }

                    else if (ch4 == 8)
                    {
                         // **************************** cylinder *************************
                         system("cls");
                         do
                         {
                              system("cls");

                              cout << "***** Cylinder menu *****" << endl;
                              cout << endl;
                              cout << "1.Volume of cylinder" << endl;
                              cout << "2.Surface area of cylinder" << endl;
                              cout << "3.Lateral area of cylinder " << endl;
                              cout << "4.Base area" << endl;
                              cout << "5.Height " << endl;
                              cout << "6.Radius" << endl;
                              cout << "7.back" << endl;
                              cout << endl;
                              cout << "enter your choice" << endl;
                              cin >> ch5;

                              if (ch5 == 1)
                              {
                                   // ********************** volume of cylinder *******************
                                   system("cls");
                                   cout << "enter radius (r) = ";
                                   cin >> l;
                                   cout << "enter height (h) = ";
                                   cin >> b;
                                   system("cls");
                                   cout << "Given," << endl;
                                   cout << "\t radius (r) = " << l << endl;
                                   cout << "\t height (h) = " << b << endl;
                                   cout << "soln," << endl;
                                   cout << "volume of cylinder = 3.14 * r * r * h" << endl;
                                   cout << "                   = " << 3.14 << " * " << l << " * " << l << " * " << b << endl;
                                   diag = 3.14 * l * l * b;
                                   cout << "            volume = " << diag << endl;
                                   cout << endl
                                        << endl;

                                   getch();
                              }

                              else if (ch5 == 2)
                              {
                                   // ********************** surface area of cylinder *******************
                                   system("cls");
                                   cout << "enter radius (r) = ";
                                   cin >> l;
                                   cout << "enter height (h) = ";
                                   cin >> b;
                                   system("cls");
                                   cout << "Given," << endl;
                                   cout << "\t radius (r) = " << l << endl;
                                   cout << "\t height (h) = " << b << endl;
                                   cout << "soln," << endl;
                                   cout << "surface area of cylinder =(2 * 3.14 * r * h) + (2 * 3.14 * r * r)" << endl;
                                   cout << "                         = (2 * 3.14 * " << l << " * " << b << ") + (2 * 3.14 * " << l << " * " << l << ")" << endl;
                                   diag = (2 * 3.14 * l * b) + (2 * 3.14 * l * l);
                                   cout << "            surface area = " << diag << endl;
                                   cout << endl
                                        << endl;

                                   getch();
                              }

                              else if (ch5 == 3)
                              {
                                   // ********************** lateral area of cylinder *******************
                                   system("cls");
                                   cout << "enter radius (r) = ";
                                   cin >> l;
                                   cout << "enter height (h) = ";
                                   cin >> b;
                                   system("cls");
                                   cout << "Given," << endl;
                                   cout << "\t radius (r) = " << l << endl;
                                   cout << "\t height (h) = " << b << endl;
                                   cout << "soln," << endl;
                                   cout << "lateral area of cylinder = 2 * 3.14 * r * h" << endl;
                                   cout << "                         = 2 * 3.14 * " << l << " * " << b << endl;
                                   diag = 2 * 3.14 * l * b;
                                   cout << "            lateral area = " << diag << endl;
                                   cout << endl
                                        << endl;

                                   getch();
                              }

                              else if (ch5 == 4)
                              {
                                   // ********************** base area of cylinder *******************
                                   system("cls");
                                   cout << "enter radius (r) = ";
                                   cin >> l;
                                   //   cout << "enter height (h) = ";
                                   //   cin >> b;
                                   system("cls");
                                   cout << "Given," << endl;
                                   cout << "\t radius (r) = " << l << endl;
                                   //   cout<<"\t height (h) = "<<b<<endl;
                                   cout << "soln," << endl;
                                   cout << "base area of cylinder = 3.14 * r * r" << endl;
                                   cout << "                      = 3.14 * " << l << " * " << l << endl;
                                   diag = 3.14 * l * l;
                                   cout << "            base area = " << diag << endl;
                                   cout << endl
                                        << endl;

                                   getch();
                              }

                              else if (ch5 == 5)
                              {

                                   // ********************** height of cylinder *******************
                                   system("cls");
                                   cout << "enter radius (r) = ";
                                   cin >> l;
                                   cout << "enter volume (v) = ";
                                   cin >> b;
                                   system("cls");
                                   cout << "Given," << endl;
                                   cout << "\t radius (r) = " << l << endl;
                                   cout << "\t volume (v) = " << b << endl;
                                   cout << "soln," << endl;
                                   cout << "height of cylinder = v/(3.14 * r * r)" << endl;
                                   cout << "                   = " << b << "/(3.14 * " << l << " * " << l << ")" << endl;
                                   diag = b / (3.14 * l * l);
                                   cout << "            height = " << diag << endl;
                                   cout << endl
                                        << endl;

                                   getch();
                              }

                              else if (ch5 == 6)
                              {

                                   // ********************** radius of cylinder *******************
                                   system("cls");
                                   cout << "enter height (h) = ";
                                   cin >> l;
                                   cout << "enter volume (v) = ";
                                   cin >> b;
                                   system("cls");
                                   cout << "Given," << endl;
                                   cout << "\t height (h) = " << l << endl;
                                   cout << "\t volume (v) = " << b << endl;
                                   cout << "soln," << endl;
                                   cout << "radius of cylinder = under root ( v / (3.14 * h) )" << endl;
                                   cout << "                   = under root ( " << b << " / (3.14 * " << l << endl;
                                   diag = sqrt(b / (3.14 * l));
                                   cout << "            radius = " << diag << endl;
                                   cout << endl
                                        << endl;

                                   getch();
                              }

                              else if (ch5 == 7)
                                   break;
                         } while (ch5 >= 1 && ch5 <= 7);
                    }

                    else if (ch4 == 9)
                    {
                         system("cls");
                         do
                         {
                              // ************************* more options ********************
                              system("cls");
                              cout << "********** More options *********" << endl
                                   << endl;
                              cout << " 1. Cone" << endl;
                              cout << " 2. Cuboid" << endl;
                              cout << " 3. Parallelogram" << endl;
                              cout << " 4. Trapezium" << endl;
                              cout << " 5. Pyramid" << endl;
                              cout << " 6. All formulla" << endl;
                              cout << " 7. Back" << endl
                                   << endl;

                              cout << "Enter your choice" << endl;
                              cin >> ch5;

                              if (ch5 == 1)
                              {
                                   system("cls");
                                   do
                                   {
                                        // ******************************** cone menu **********************
                                        system("cls");
                                        cout << "***** Cone menu *****" << endl;
                                        cout << endl;
                                        cout << "1.Volume of cone" << endl;
                                        cout << "2.Surface area of cone" << endl;
                                        cout << "3.Lateral area of cone " << endl;
                                        cout << "4.Base area" << endl;
                                        cout << "5.Height " << endl;
                                        cout << "6.Radius" << endl;
                                        cout << "7.Slant height" << endl; /*  */
                                        cout << "8.back" << endl;
                                        cout << endl;
                                        cout << "enter your choice" << endl;
                                        cin >> ch6;

                                        if (ch6 == 1)
                                        {
                                             // ********************** volume of cylinder *******************
                                             system("cls");
                                             cout << "enter radius (r) = ";
                                             cin >> l;
                                             cout << "enter height (h) = ";
                                             cin >> b;
                                             system("cls");
                                             cout << "Given," << endl;
                                             cout << "\t radius (r) = " << l << endl;
                                             cout << "\t height (h) = " << b << endl;
                                             cout << "soln," << endl;
                                             cout << "volume of cone = (3.14 * r * r * h) / 3" << endl;
                                             cout << "               = (" << 3.14 << " * " << l << " * " << l << " * " << b << ") / 3" << endl;
                                             diag = (3.14 * l * l * b) / 3;
                                             cout << "        volume = " << diag << endl;
                                             cout << endl
                                                  << endl;

                                             getch();
                                        }

                                        else if (ch6 == 2)
                                        {
                                             // ********************** surface area of cone *******************
                                             system("cls");
                                             cout << "enter radius (r) = ";
                                             cin >> l;
                                             cout << "enter height (h) = ";
                                             cin >> b;
                                             system("cls");
                                             cout << "Given," << endl;
                                             cout << "\t radius (r) = " << l << endl;
                                             cout << "\t height (h) = " << b << endl;
                                             cout << "soln," << endl;
                                             cout << "surface area of cone = 3.14*r(r+(under root (h*h + r*r)))" << endl;
                                             cout << "                     = 3.14*" << l << "(" << l << "+ (under root (" << b << "*" << b << " + " << l << "*" << l << ")))" << endl;
                                             diag = 3.14 * l * (l + (sqrt((b * b) + (l * l))));
                                             cout << "        surface area = " << diag << endl;
                                             cout << endl
                                                  << endl;

                                             getch();
                                        }

                                        else if (ch6 == 3)
                                        {
                                             // ********************** Lateral area of cone *******************
                                             system("cls");
                                             cout << "enter radius (r) = ";
                                             cin >> l;
                                             cout << "enter height (h) = ";
                                             cin >> b;
                                             system("cls");
                                             cout << "Given," << endl;
                                             cout << "\t radius (r) = " << l << endl;
                                             cout << "\t height (h) = " << b << endl;
                                             cout << "soln," << endl;
                                             cout << "Lateral area of cone = 3.14*r*(under root (h*h + r*r)))" << endl;
                                             cout << "                     = 3.14*" << l << "* (under root (" << b << "*" << b << " + " << l << "*" << l << ")))" << endl;
                                             diag = 3.14 * l * (sqrt((b * b) + (l * l)));
                                             cout << "        Lateral area = " << diag << endl;
                                             cout << endl
                                                  << endl;

                                             getch();
                                        }

                                        else if (ch6 == 4)
                                        {
                                             // ********************** base area of cone *******************
                                             system("cls");
                                             cout << "enter radius (r) = ";
                                             cin >> l;
                                             system("cls");
                                             cout << "Given," << endl;
                                             cout << "\t radius (r) = " << l << endl;

                                             cout << "soln," << endl;
                                             cout << "base area of cone = 3.14 * r * r" << endl;
                                             cout << "                  = 3.14 * " << l << " * " << l << endl;
                                             diag = 3.14 * l * l;
                                             cout << "        base area = " << diag << endl;
                                             cout << endl
                                                  << endl;

                                             getch();
                                        }

                                        else if (ch6 == 5)
                                        {

                                             // ********************** height of cone *******************
                                             system("cls");
                                             cout << "enter radius (r) = ";
                                             cin >> l;
                                             cout << "enter volume (v) = ";
                                             cin >> b;
                                             system("cls");
                                             cout << "Given," << endl;
                                             cout << "\t radius (r) = " << l << endl;
                                             cout << "\t volume (v) = " << b << endl;
                                             cout << "soln," << endl;
                                             cout << "height of cone = 3 * (v/(3.14 * r * r))" << endl;
                                             cout << "               = 3 * (" << b << "/(3.14 * " << l << " * " << l << " ))" << endl;
                                             diag = 3 * (b / (3.14 * l * l));
                                             cout << "        height = " << diag << endl;
                                             cout << endl
                                                  << endl;

                                             getch();
                                        }

                                        else if (ch6 == 6)
                                        {

                                             // ********************** radius of cone *******************
                                             system("cls");
                                             cout << "enter height (h) = ";
                                             cin >> l;
                                             cout << "enter volume (v) = ";
                                             cin >> b;
                                             system("cls");
                                             cout << "Given," << endl;
                                             cout << "\t height (h) = " << l << endl;
                                             cout << "\t volume (v) = " << b << endl;
                                             cout << "soln," << endl;
                                             cout << "radius of cone = under root (3 * (v / (3.14 * h)))" << endl;
                                             cout << "               = under root (3 * (" << b << " / (3.14 * " << l << ")))" << endl;
                                             diag = sqrt(3 * (b / (3.14 * l)));
                                             cout << "        radius = " << diag << endl;
                                             cout << endl
                                                  << endl;

                                             getch();
                                        }

                                        else if (ch6 == 7)
                                        {
                                             // ********************** slant height of cone *******************
                                             system("cls");
                                             cout << "enter radius (r) = ";
                                             cin >> l;
                                             cout << "enter height (h) = ";
                                             cin >> b;
                                             system("cls");
                                             cout << "Given," << endl;
                                             cout << "\t radius (r) = " << l << endl;
                                             cout << "\t height (h) = " << b << endl;
                                             cout << "soln," << endl;
                                             cout << "Slant height of cone = under root (r*r + h*h)" << endl;
                                             cout << "                     = under root (" << l << "*" << l << " + " << b << "*" << b << ")" << endl;
                                             diag = sqrt((l * l) + (b * b));
                                             cout << "        slant height = " << diag << endl;
                                             cout << endl
                                                  << endl;

                                             getch();
                                        }

                                        else if (ch6 == 8)
                                             break;

                                   } while (ch6 >= 1 && ch6 <= 8);
                              }

                              else if (ch5 == 2)
                              {
                                   // *************** Cuboid menu *******************
                                   system("cls");
                                   do
                                   {
                                        system("cls");
                                        cout << "***** cuboid menu *****" << endl;
                                        cout << endl;
                                        cout << "1.Volume of cuboid" << endl;
                                        cout << "2.Surface area of cuboid" << endl;
                                        cout << "3.Surface area of 4 walls" << endl;
                                        cout << "4.Surface area of cuboid, in which top face is open" << endl;
                                        cout << "5.Diagonal of cuboid" << endl;
                                        cout << "6.Height of cuboid" << endl;
                                        cout << "7.Area of base " << endl;
                                        cout << "8.back" << endl;
                                        cout << endl;
                                        cout << "enter your choice" << endl;
                                        cin >> ch6;

                                        if (ch6 == 1)
                                        {
                                             // ****************************** volume of cuboid *********************
                                             system("cls");
                                             cout << "enter length = ";
                                             cin >> l;
                                             cout << "enter breadth = ";
                                             cin >> b;
                                             cout << "enter height = ";
                                             cin >> h;
                                             system("cls");
                                             cout << "Given," << endl;
                                             cout << "\t length = " << l << endl;
                                             cout << "\t breadth = " << b << endl;
                                             cout << "\t height = " << h << endl;
                                             cout << "soln," << endl;
                                             cout << "volume of cuboid = l * b * h" << endl;
                                             cout << "                 = " << l << " * " << b << " * " << h << endl;

                                             area = l * b * h;
                                             cout << "          volume = " << area << endl;

                                             cout << endl
                                                  << endl;

                                             getch();
                                        }

                                        else if (ch6 == 2)
                                        {
                                             // ****************************** surface area of cuboid *********************
                                             system("cls");
                                             cout << "enter length = ";
                                             cin >> l;
                                             cout << "enter breadth = ";
                                             cin >> b;
                                             cout << "enter height = ";
                                             cin >> h;
                                             system("cls");
                                             cout << "Given," << endl;
                                             cout << "\t length = " << l << endl;
                                             cout << "\t breadth = " << b << endl;
                                             cout << "\t height = " << h << endl;
                                             cout << "soln," << endl;
                                             cout << "Surface area of cuboid = 2(lb + bh + hl)" << endl;
                                             cout << "                       = 2*(" << l << "*" << b << "  +  " << b << "*" << h << "  +  " << h << "*" << l << ")" << endl;

                                             area = 2 * ((l * b) + (b * h) + (h * l));
                                             cout << "          Surface area = " << area << endl;

                                             cout << endl
                                                  << endl;

                                             getch();
                                        }

                                        else if (ch6 == 3)
                                        {
                                             // ****************************** Surface area of 4 walls *********************
                                             system("cls");
                                             cout << "enter length = ";
                                             cin >> l;
                                             cout << "enter breadth = ";
                                             cin >> b;
                                             cout << "enter height = ";
                                             cin >> h;
                                             system("cls");
                                             cout << "Given," << endl;
                                             cout << "\t length = " << l << endl;
                                             cout << "\t breadth = " << b << endl;
                                             cout << "\t height = " << h << endl;
                                             cout << "soln," << endl;
                                             cout << "Surface area of 4 walls = 2(bh + hl)" << endl;
                                             cout << "                       = 2*(" << b << "*" << h << "  +  " << h << "*" << l << ")" << endl;

                                             area = 2 * ((b * h) + (h * l));
                                             cout << "          Surface area = " << area << endl;

                                             cout << endl
                                                  << endl;

                                             getch();
                                        }

                                        else if (ch6 == 4)
                                        {

                                             // ****************************** Surface area of cuboid, in which top face is open *********************
                                             system("cls");
                                             cout << "enter length = ";
                                             cin >> l;
                                             cout << "enter breadth = ";
                                             cin >> b;
                                             cout << "enter height = ";
                                             cin >> h;
                                             system("cls");
                                             cout << "Given," << endl;
                                             cout << "\t length = " << l << endl;
                                             cout << "\t breadth = " << b << endl;
                                             cout << "\t height = " << h << endl;
                                             cout << "soln," << endl;
                                             cout << "surface area of 4 walls, in which top face is open" << endl;

                                             cout << "                       = lb+ 2(bh + hl)" << endl;
                                             cout << "                       = " << l << "*" << b << " + 2*(" << b << "*" << h << "  +  " << h << "*" << l << ")" << endl;

                                             area = (l * b) + (2 * ((b * h) + (h * l)));
                                             cout << "          Surface area = " << area << endl;

                                             cout << endl
                                                  << endl;

                                             getch();
                                        }

                                        else if (ch6 == 5)
                                        {

                                             // ****************************** Diagonal of cuboid *********************
                                             system("cls");
                                             cout << "enter length = ";
                                             cin >> l;
                                             cout << "enter breadth = ";
                                             cin >> b;
                                             cout << "enter height = ";
                                             cin >> h;
                                             system("cls");
                                             cout << "Given," << endl;
                                             cout << "\t length = " << l << endl;
                                             cout << "\t breadth = " << b << endl;
                                             cout << "\t height = " << h << endl;
                                             cout << "soln," << endl;

                                             cout << "Diaginal of cuboid = under root (l*l + b*b + h*h)" << endl;
                                             cout << "                   = under root ( " << l << "*" << l << " + " << b << "*" << b << "  +  " << h << "*" << h << " )" << endl;

                                             area = sqrt((l * l) + (b * b) + (h * h));
                                             cout << "          Diagonal = " << area << endl;

                                             cout << endl
                                                  << endl;

                                             getch();
                                        }

                                        else if (ch6 == 6)
                                        {

                                             // ****************************** Height of cuboid *********************
                                             system("cls");
                                             cout << "enter volume = ";
                                             cin >> l;
                                             cout << "enter base area = ";
                                             cin >> b;

                                             system("cls");
                                             cout << "Given," << endl;
                                             cout << "\t volume = " << l << endl;
                                             cout << "\t base area = " << b << endl;

                                             cout << "soln," << endl;

                                             cout << "Height of cuboid = volume/base area" << endl;
                                             cout << "                 = " << l << "/" << b << endl;

                                             area = l / b;
                                             cout << "          Height = " << area << endl;

                                             cout << endl
                                                  << endl;

                                             getch();
                                        }

                                        else if (ch6 == 7)
                                        {

                                             // ****************************** Area of base *********************
                                             system("cls");
                                             cout << "enter volume = ";
                                             cin >> l;
                                             cout << "enter height = ";
                                             cin >> b;

                                             system("cls");
                                             cout << "Given," << endl;
                                             cout << "\t volume = " << l << endl;
                                             cout << "\t height = " << b << endl;

                                             cout << "soln," << endl;

                                             cout << "Area of base = volume/height" << endl;
                                             cout << "             = " << l << "/" << b << endl;

                                             area = l / b;
                                             cout << "        area = " << area << endl;

                                             cout << endl
                                                  << endl;

                                             getch();
                                        }

                                        else if (ch6 == 8)
                                             break;
                                   } while (ch6 >= 1 && ch6 <= 8);
                              }

                              else if (ch5 == 3)
                              {
                                   system("cls");
                                   do
                                   {
                                        // ****************** Paragollelogram menu ************************

                                   } while (ch6 >= 1 && ch6 <= 5);

                              } //

                         } while (ch5 >= 1 && ch5 <= 7);
                    }

               } while (ch4 >= 1 && ch4 <= 9);
          }

          //******************************** Calculation *************************************
          case '7':
          {
               system("cls");
               do
               {
                    system("cls");
                    cout<<"1. Addition"<<endl;
                    cout<<"2. Subtraction"<<endl;
                    cout<<"3. multiplication"<<endl;
                    cout<<"4. Division"<<endl;
                    cout<<"5. Small Calculator"<<endl;
                    cout<<"6. More Options"<<endl<<endl;
                    // cout<<"6. Square"<<endl;
                    // cout<<"6. Cube"<<endl;
                    // cout<<"7. Root"<<endl;
                    // cout<<"8. Table"<<endl<<endl;

                    cout<<"Press 0 for back"<<endl;
                    cout<<"enter your choice"<<endl;
                    cin>>ch2;

                    if(ch2==1)
                    {
                         system("cls");
                         cout<<"enter first no. : ";
                         cin>>a;
                         cout<<"enter second no. : ";
                         cin>>b;
                         system("cls");

                         l=a+b;
                         cout<<"first no. : "<<a<<endl;
                         cout<<"second no. : "<<b<<endl;
                         cout<<"sum = "<<l;
                         getch();
                    }
                    else if(ch2==2)
                    {
                        system("cls");
                         cout<<"enter first no. : ";
                         cin>>a;
                         cout<<"enter second no. : ";
                         cin>>b;
                         system("cls");

                         l=a-b;
                         cout<<"first no. : "<<a<<endl;
                         cout<<"second no. : "<<b<<endl;
                         cout<<"Ans = "<<l;
                         getch(); 
                    }
                    else if(ch2==3)
                    {
                       system("cls");
                         cout<<"enter first no. : ";
                         cin>>a;
                         cout<<"enter second no. : ";
                         cin>>b;
                         system("cls");

                         l=a*b;
                         cout<<"first no. : "<<a<<endl;
                         cout<<"second no. : "<<b<<endl;
                         cout<<"Ans = "<<l;
                         getch();  
                    }
                    else if(ch2==4)
                    {
                         system("cls");
                         cout<<"enter first no. : ";
                         cin>>a;
                         cout<<"enter second no. : ";
                         cin>>b;
                         system("cls");

                         l=a/b;
                         cout<<"first no. : "<<a<<endl;
                         cout<<"second no. : "<<b<<endl;
                         cout<<"Ans = "<<l;
                         getch();
                    }
                    else if(ch2==5)
                    {
                         system("cls");
                         cout<<"enter first no. : ";
                         cin>>a;
                         cout<<"enter second no. : ";
                         cin>>b;
                         cout<<"Enter the operator (+,-,*,/) : ";
                         cin>>ch;

                         if(ch=='+')
                         l=a+b;
                         else if(ch=='-')
                         l=a-b;
                         else if(ch=='*')
                         l=a*b;
                         else if(ch=='/')
                         l=a/b;
                         else
                         {
                              cout<<"wrong operator!"<<endl;
                              cout<<"Try again";
                              goto lb;
                         }
                         cout<<"The calculated result is : "<<l;
                         lb:
                         getch();


                    }

                    else if(ch2==0)
                    break;
                    
               } while (ch2>=1  && ch2<=5);
               

               break;
          }

          //*******************************  Qiuz *******************************************
          case '8':
          {
               system("cls");
               do
               {
                    system("cls");
                    cout << "************* Welcome to Quiz Competition ***************" << endl
                         << endl;
                    cout << "1. About Jahrkhand" << endl;
                    cout << "2. History" << endl;
                    cout << "3. Geography" << endl;
                    cout << "4. Current Affairs" << endl;
                    cout << "5. Back" << endl
                         << endl;
                    cout << "Enter your choice" << endl;
                    cin >> ch2;

                    // ***************************************************************** About Jharkhand ****************************************************************
                    if (ch2 == 1)
                    {
                         system("clss");
                         do
                         {
                              {
                                   system("cls");
                                   cout << "1. Total number of recognized tribes in Jharkhand" << endl; // Q1
                                   cout << "A. 18\n"
                                        << "B. 22\n"
                                        << "C. 32\n"
                                        << "D. 26\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "2. The Hundru Falls is created by the" << endl; // Q2
                                   cout << "A. Subharnarekha River\n"
                                        << "B. Baitarani River\n"
                                        << "C. Bansloi River\n"
                                        << "D. Damodar River\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "3. Which one is the know as the steel city of India" << endl; // Q3
                                   cout << "A. Ranchi\n"
                                        << "B. Jamshedpur\n"
                                        << "C. Hazaribagh\n"
                                        << "D. Dhanbad\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "4. In which year Jharkhand Was Formed as a Separate state" << endl; // Q4
                                   cout << "A. 1998\n"
                                        << "B. 2000\n"
                                        << "C. 2003\n"
                                        << "D. 2005\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "5. Total Number of Districts in Jharkhand" << endl; // Q5
                                   cout << "A. 24\n"
                                        << "B. 20\n"
                                        << "C. 23\n"
                                        << "D. 18\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A";
                                   }
                                   getch();
                              }

                              {
                                   system("cls");
                                   cout << "6. Where is the 'Indian Institute of Mines' situated?" << endl; // Q6
                                   cout << "A. Ranchi\n"
                                        << "B. Jamshedpur\n"
                                        << "C. Dhanbad\n"
                                        << "D. Sindri\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "7. Who started the famous TISCO factory in Jharkhand ?" << endl; // Q7
                                   cout << "A. Sachchidanand Sinha\n"
                                        << "B. Dhirubhai Ambani\n"
                                        << "C. Dr. Rajendra Prasad\n"
                                        << "D. Jamshedji Tata\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'd' || ans == 'D')
                                   {
                                        cout << "Answer is correct, option D";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option D";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "8. In which part of Jharkhand is maximum rainfall being recorded ?" << endl; // Q8
                                   cout << "A. Chatra\n"
                                        << "B. Neterhat plateau\n"
                                        << "C. Ranchi plateau\n"
                                        << "D. Bokaro\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "9. Which one is the state bird of jharkhand " << endl; // Q9
                                   cout << "A. Peacock\n"
                                        << "B. Pigeon\n"
                                        << "C. Koel\n"
                                        << "D. Eagle\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "10. Which one is the sub-capital of Jharkhand " << endl; // Q10
                                   cout << "A. Bokaro\n"
                                        << "B. Dumka\n"
                                        << "C. Ranchi\n"
                                        << "D. Dhanbad\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "11. What is the literacy rate of Jharkhand according to 2011 census " << endl; // Q11
                                   cout << "A. 62.38%\n"
                                        << "B. 73.56%\n"
                                        << "C. 67.63%\n"
                                        << "D. 72.11%\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "12. Sohrai is the biggest festival of which tribe " << endl; // Q12
                                   cout << "A. Birhor\n"
                                        << "B. Oraon\n"
                                        << "C. Munda\n"
                                        << "D. Santhal\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'd' || ans == 'D')
                                   {
                                        cout << "Answer is correct, option D";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option D";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "13. In which year, the santhal rebellion started" << endl; // Q13
                                   cout << "A. 1852\n"
                                        << "B. 1861\n"
                                        << "C. 1858\n"
                                        << "D. 1855\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'd' || ans == 'D')
                                   {
                                        cout << "Answer is correct, option D";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option D";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "14. What is the name of the festival of flowers of the \n"
                                        << "    Adivasis in Jharkhand" << endl; // Q14
                                   cout << "A. Tusu\n"
                                        << "B. Baha\n"
                                        << "C. Sarhul\n"
                                        << "D. Karma\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "15. Bihar is located on the ——— side of Jharkhand" << endl; // Q15
                                   cout << "A. North\n"
                                        << "B. West\n"
                                        << "C. South\n"
                                        << "D. East\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "16. What is the main basis of economy of Jharkhand ?" << endl; // Q16
                                   cout << "A. Agriculture\n"
                                        << "B. Industry\n"
                                        << "C. Mining\n"
                                        << "D. Transport\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "17. Where was the first Iron and Steel industry \n"
                                        << "    established in Jharkhand ?" << endl; // Q17
                                   cout << "A. Sakchi (Jamshedpur)\n"
                                        << "B. Bokaro\n"
                                        << "C. Lohardagga\n"
                                        << "D. Ghatshila\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "18. In which of the following district's mines is the\n"
                                        << "    maximum iron-ore produced?" << endl; // Q18
                                   cout << "A. Singhbhum\n"
                                        << "B. Hazaribagh\n"
                                        << "C. Palamu\n"
                                        << "D. Gumla\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "19. 'Asur' is also a tribe of Jharkhand. Tell of which\n"
                                        << "     district are they the residents?" << endl; // Q19
                                   cout << "A. Ranchi\n"
                                        << "B. Palamu\n"
                                        << "C. Singhbhum\n"
                                        << "D. Goddah\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "20. Which oil seed is produced in maximum quantity at Palamu ?" << endl; // Q20
                                   cout << "A. Mustard\n"
                                        << "B. Sesamum\n"
                                        << "C. Linseed\n"
                                        << "D. Caster seed\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B";
                                   }
                                   getch();
                              }
                         } while (true);
                    }

                    // ********************************************************************* Histry **************************************************************
                    else if (ch2 == 2)
                    {
                         system("cls");
                         do
                         {
                              {
                                   system("cls");
                                   cout << "1. During the First World War, which country signed the Peace Treaty (1917) with Germany" << endl;
                                   cout << "A. England\n"
                                        << "B. USA\n"
                                        << "C. Russia\n"
                                        << "D. Austria\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Explanation : In December 1917, Germany agreed to an armistice and peace talks with Russia,\n"
                                             << "and Lenin sent Leon Trotsky to Brest-Litovsk in Belarus to negotiate a treaty. The talks broke\n"
                                             << "off after Germany demanded independence for Russian holdings in Eastern Europe, and in February\n"
                                             << "1918 fighting resumed on the eastern front. They signed the Peace Treaty.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Explanation : In December 1917, Germany agreed to an armistice and peace talks with Russia,\n"
                                             << "and Lenin sent Leon Trotsky to Brest-Litovsk in Belarus to negotiate a treaty. The talks broke\n"
                                             << "off after Germany demanded independence for Russian holdings in Eastern Europe, and in February\n"
                                             << "1918 fighting resumed on the eastern front. They signed the Peace Treaty."
                                             << endl
                                             << endl;
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "2. When did United Kingdom declared war on Germany which lead to World War II?" << endl;
                                   cout << "A. 4th April 1939\n"
                                        << "B. 18th August 1939\n"
                                        << "C. 28th August 1939\n"
                                        << "D. 3rd September 1939\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'd' || ans == 'D')
                                   {
                                        cout << "Answer is correct, option D\n\n"
                                             << "Explanation : On 3rd September 1939, Prime Minister Chamberlain went to the \n"
                                             << "airwaves to announce to the British people that a state of war existed between \n"
                                             << "their country and Germany. World War II had begun.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option D\n\n"
                                             << "Explanation : On 3rd September 1939, Prime Minister Chamberlain went to the \n"
                                             << "airwaves to announce to the British people that a state of war existed between \n"
                                             << "their country and Germany. World War II had begun.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "3. Who was the first Governor General of India?" << endl;
                                   cout << "A. Warren Hastings\n"
                                        << "B. William Bentick\n"
                                        << "C. Lord Delhousie\n"
                                        << "D. Lord Canning\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Explanation : Warren Hastings (6 December 1732 - 22 August 1818), an English statesman,\n"
                                             << "was the first Governor of the Presidency of Fort William (Bengal), the head of the Supreme \n"
                                             << "Council of Bengal, and thereby the first de facto Governor-General of India from 1773 to 1785.\n"
                                             << "The first governor-general in India (of Bengal) was Warren Hastings, the first official \n"
                                             << "governor-general of British India was Lord William Bentinck, and the first governor-general of\n"
                                             << "the Dominion of India was Lord Mountbatten.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Explanation : Warren Hastings (6 December 1732 -  22 August 1818), an English statesman,\n"
                                             << "was the first Governor of the Presidency of Fort William (Bengal), the head of the Supreme \n"
                                             << "Council of Bengal, and thereby the first de facto Governor-General of India from 1773 to 1785.\n"
                                             << "The first governor-general in India (of Bengal) was Warren Hastings, the first official \n"
                                             << "governor-general of British India was Lord William Bentinck, and the first governor-general of\n"
                                             << "the Dominion of India was Lord Mountbatten.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "4. After the year 1853, a substantial amount of British capital had been invested in" << endl;
                                   cout << "A. Tea Plantations\n"
                                        << "B. The Railways\n"
                                        << "C. Coal Mining\n"
                                        << "D. Jute Mills\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B\n\n"
                                             << "Explanation : After the year 1853, a substantial amount of British capital had\n"
                                             << "been invested in the railways";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B\n\n"
                                             << "Explanation : After the year 1853, a substantial amount of British capital had\n"
                                             << "been invested in the railways";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "5. The Governor of the East India Company was" << endl;
                                   cout << "A. Appointed by the monarch of England\n"
                                        << "B. Appointed by the British Parliament\n"
                                        << "C. Elected by the members of the East India Company\n"
                                        << "D. Nominated by the Mughal Emperor\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Explanation : The Governor of the East India Company was Elected\n"
                                             << "by the members of the East India Company itself.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Explanation : The Governor of the East India Company was Elected\n"
                                             << "by the members of the East India Company itself.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "6. The first constitutional measure introduced by the British in India which\n"
                                        << "   worked till the framing of the Indian Constitution was" << endl;
                                   cout << "A. the Act of 1919\n"
                                        << "B. the Act of 1935\n"
                                        << "C. Indian Independence Bill\n"
                                        << "D. Cabinet Mission Plan\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B\n\n"
                                             << "Explanation : The first constitutional measure Introduced by the British in\n"
                                             << "India which worked till the framing of the Indian Constitution was the Act of 1935.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B\n\n"
                                             << "Explanation : The first constitutional measure Introduced by the British in\n"
                                             << "India which worked till the framing of the Indian Constitution was the Act of 1935.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "7. Which of the following Act, ensured the establishment of the supreme court in India?" << endl;
                                   cout << "A. Pitt’s India Act AD 1784\n"
                                        << "B. The Regulating Act AD 1773\n"
                                        << "C. Charter Act 1793 AD\n"
                                        << "D. Charter Act 1813 AD\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B\n\n"
                                             << "Explanation : Regulating Act of 1773 was the first landmark in the constitutional development of India.\n"
                                             << "Via this act, the British Parliament for the first time interfered into affairs of India.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B\n\n"
                                             << "Explanation : Regulating Act of 1773 was the first landmark in the constitutional development of India.\n"
                                             << "Via this act, the British Parliament for the first time interfered into affairs of India.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "8. When the East India Company was formed, the Mughal emperor in India was" << endl;
                                   cout << "A. Jahangir\n"
                                        << "B. Humayun\n"
                                        << "C. Aurangzeb\n"
                                        << "D. Akbar\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'd' || ans == 'D')
                                   {
                                        cout << "Answer is correct, option D\n\n"
                                             << "Explanation : The East India Company was incorporated by royal charter on December 31, 1600.\n"
                                             << "It was an English company formed for the exploitation of trade with East and Southeast Asia and India\n"
                                             << "during the reign of Mughal Emperor Akbar (1556-1605).";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option D\n\n"
                                             << "Explanation : The East India Company was incorporated by royal charter on December 31, 1600.\n"
                                             << "It was an English company formed for the exploitation of trade with East and Southeast Asia and India\n"
                                             << "during the reign of Mughal Emperor Akbar (1556-1605).";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "9. In which year, America joined the Second World War" << endl;
                                   cout << "A. 1939\n"
                                        << "B. 1940\n"
                                        << "C. 1941\n"
                                        << "D. 1942\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Explanation : The United States did not enter the war until \n"
                                             << "after the Japanese bombed the American fleet in Pearl Harbor, \n"
                                             << "Hawaii, on December 7, 1941.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else

                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Explanation : The United States did not enter the war until after\n"
                                             << "the Japanese bombed the American fleet in Pearl Harbor, Hawaii,\n"
                                             << "on December 7, 1941.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "10. Who were the Axis powers in World War-II?" << endl;
                                   cout << "A. Poland Japan Germany\n"
                                        << "B. Italy Japan Britain\n"
                                        << "C. Germany Italy France\n"
                                        << "D. Germany Italy Japan\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'd' || ans == 'D')
                                   {
                                        cout << "Answer is correct, option D\n\n"
                                             << "Explanation : The World War-II lasted from 1939 to 1945\n"
                                             << "fought between two opposite Military alliances the Allied \n"
                                             << "powers (France, Great Britain, The United States, The Soviet \n"
                                             << "Union) and the Axis powers (Germany, Italy, Japan).";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option D\n\n"
                                             << "Explanation : The World War-II lasted from 1939 to 1945 \n"
                                             << "fought between two opposite Military alliances the Allied \n"
                                             << "powers (France, Great Britain, The United States, The Soviet \n"
                                             << "Union) and the Axis powers (Germany, Italy, Japan).";
                                   }
                                   getch();
                              }
                              {

                                   system("cls");
                                   cout << "11. The Hundred Years’ War (from 1337 to 1453) was fought between" << endl;
                                   cout << "A. England and France\n"
                                        << "B. Germany and Russia\n"
                                        << "C. America and Argentina\n"
                                        << "D. England and Germany\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Explanation : The Hundred Years’ War was a long struggle between England\n"
                                             << "and France over succession to the French throne. It lasted from 1337 to 1453,\n"
                                             << "so it might more accurately be called the “116 Years’ War.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Explanation : The Hundred Years’ War was a long struggle between England\n"
                                             << "and France over succession to the French throne. It lasted from 1337 to 1453,\n"
                                             << "so it might more accurately be called the “116 Years’ War.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "12. Who was the US President during World War II" << endl;
                                   cout << "A. Winston Churchill\n"
                                        << "B. Joseph Stalin\n"
                                        << "C. Franklin D Roosevelt\n"
                                        << "D. Harry S Truman\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Explanation : President Franklin Delano Roosevelt and Vice President Henry A.\n"
                                             << "Wallace won the election of 1940, and were at the helm of the nation as it prepared \n"
                                             << "for and entered World War II.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Explanation : President Franklin Delano Roosevelt and Vice President Henry A.\n"
                                             << "Wallace won the election of 1940, and were at the helm of the nation as it prepared \n"
                                             << "for and entered World War II.";
                                   }
                                   getch();
                              }

                              {
                                   system("cls");
                                   cout << "13.In which year Napoleon I crowned himself as Emperor of France" << endl;
                                   cout << "A. 1799\n"
                                        << "B. 1804\n"
                                        << "C. 1807\n"
                                        << "D. 1812\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B\n\n"
                                             << "Explanation : On the 2nd of December 1804 Napoleon crowned himself Emperor Napoleon\n"
                                             << "I at Notre Dame de Paris. According to legend, during the coronation he snatched the\n"
                                             << "crown from the hands of Pope Pius VII and crowned himself, thus displaying his rejection\n"
                                             << "of the authority of the Pontiff.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B\n\n"
                                             << "Explanation : President Franklin Delano Roosevelt and Vice President Henry A.\n"
                                             << "Wallace won the election of 1940, and were at the helm of the nation as it prepared \n"
                                             << "for and entered World War II.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "14. Who was the king during the french revolution" << endl;
                                   cout << "A. Napoleon\n"
                                        << "B. Louis XV\n"
                                        << "C. Louis XVI\n"
                                        << "D. Charles IX\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Explanation : Louis XVI (23 August 1754 – 21 January 1793), born Louis-Auguste,\n"
                                             << "was the last King of France before the fall of the monarchy during the French Revolution.\n"
                                             << "He was referred to as Citizen Louis Capet during the four months before he was guillotined.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Explanation : Louis XVI (23 August 1754 – 21 January 1793), born Louis-Auguste,\n"
                                             << "was the last King of France before the fall of the monarchy during the French Revolution.\n"
                                             << "He was referred to as Citizen Louis Capet during the four months before he was guillotined.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "15. The world’s first drainage system was build by the people of" << endl;
                                   cout << "A. Egyptian civilization\n"
                                        << "B. Indus Valley civilization\n"
                                        << "C. Chinese civilization\n"
                                        << "D. Mesopotamian civilization\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B\n\n"
                                             << "Explanation : Indus Valley Civilisation System of underground drainage was the most\n"
                                             << "unique feature of town planning in the Indus Valley Civilization. It is regarded as \n"
                                             << "oldest drainage system having prominent features such as covering of Slab and Manhole.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B\n\n"
                                             << "Explanation : Indus Valley Civilisation System of underground drainage was the most\n"
                                             << "unique feature of town planning in the Indus Valley Civilization. It is regarded as \n"
                                             << "oldest drainage system having prominent features such as covering of Slab and Manhole.";
                                   }
                                   getch();
                              }
                              {

                                   system("cls");
                                   cout << "16. In which year, Alexander the Great become the king of Macedonia" << endl;
                                   cout << "A. 336 BC\n"
                                        << "B. 323 BC\n"
                                        << "C. 350 BC\n"
                                        << "D. 200 BC\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Explanation : Alexander the Great become the king of Macedonia in 336 BC.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Explanation : Alexander the Great become the king of Macedonia in 336 BC.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "17. The war criminals of the World War-II were put to trial in" << endl;
                                   cout << "A. Nuremburg \n"
                                        << "B. Peitersburg \n"
                                        << "C. Gettysburg \n"
                                        << "D. Peitsburg \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Explanation : Nuremberg trial were series of 13 trials carried out in Nurembeng,\n"
                                             << "Germany held by the Allied forces after World War-II. The International tribunal \n"
                                             << "sentenced 12 high ranking Nazis to death for war crimes on Oct 1, 1946.\n"
                                             << "It is refferred as “the Greatest trial in history”.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Explanation : Nuremberg trial were series of 13 trials carried out in Nurembeng,\n"
                                             << "Germany held by the Allied forces after World War-II. The International tribunal \n"
                                             << "sentenced 12 high ranking Nazis to death for war crimes on Oct 1, 1946.\n"
                                             << "It is refferred as “the Greatest trial in history”.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "18. Where was republic established in Germany after the First World War" << endl;
                                   cout << "A. Munich\n"
                                        << "B. Weimer\n"
                                        << "C. Berlin\n"
                                        << "D. Bavaria\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B\n\n"
                                             << "Explanation : The Weimar Republic was Germany’s government from 1919 to 1933,\n"
                                             << "the period after World War I until the rise of Nazi Germany.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B\n\n"
                                             << "Explanation : The Weimar Republic was Germany’s government from 1919 to 1933,\n"
                                             << "the period after World War I until the rise of Nazi Germany.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "19. From which language, has the term ‘democracy’ been derived?" << endl;
                                   cout << "A. Greek \n"
                                        << "B. Hebrew \n"
                                        << "C. English \n"
                                        << "D. Latin \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Explanation : The word democracy is derived from Greek\n"
                                             << "word “Demokratia” which means “Rule of People’.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Explanation : The word democracy is derived from Greek\n"
                                             << "word “Demokratia” which means 'Rule of People'";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "20. Genghis Khan died in the year" << endl;
                                   cout << "A. 1209 \n"
                                        << "B. 1219 \n"
                                        << "C. 1227 \n"
                                        << "D. 1232 \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Explanation : Genghis Khan died in August 1227, during the fall of Yinchuan,\n"
                                             << "which is the capital of Western Xia. The exact cause of his death remains a mystery,\n"
                                             << "and is variously attributed to being killed in action against the Western Xia, illness,\n"
                                             << "falling from his horse, or wounds sustained in hunting or battle.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Explanation : Genghis Khan died in August 1227, during the fall of Yinchuan,\n"
                                             << "which is the capital of Western Xia. The exact cause of his death remains a mystery,\n"
                                             << "and is variously attributed to being killed in action against the Western Xia, illness,\n"
                                             << "falling from his horse, or wounds sustained in hunting or battle.";
                                   }
                                   getch();
                              }

                         } while (true);
                    }
                    // ***************************************************** Geography ****************************************************************************************
                    else if (ch2 == 3)
                    {
                         system("cls");
                         do
                         {
                              {
                                   system("cls");
                                   cout << "1. The earth is at the largest distance from the sun (Apehelion) on ________" << endl;
                                   cout << "A. June 21st \n"
                                        << "B. January 3rd \n"
                                        << "C. July 4th\n"
                                        << "D. September 23rd \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Explanation : At about 11 a.m. EDT (1500 GMT) on the Fourth of July, the Earth will\n"
                                             << "reach that point in its orbit where it is farthest from the sun called aphelion, this\n"
                                             << "location in Earth’s orbit puts the planet about 94.5 million miles (152 million kilometers) \n"
                                             << "from the sun.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Explanation : At about 11 a.m. EDT (1500 GMT) on the Fourth of July, the Earth will\n"
                                             << "reach that point in its orbit where it is farthest from the sun called aphelion, this\n"
                                             << "location in Earth’s orbit puts the planet about 94.5 million miles (152 million kilometers) \n"
                                             << "from the sun.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "2. Geostationary orbit is at a height of ________" << endl;
                                   cout << "A. 6 km \n"
                                        << "B. 1000 km \n"
                                        << "C. 3600 km\n"
                                        << "D. 36000 km \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'd' || ans == 'D')
                                   {
                                        cout << "Answer is correct, option D\n\n"
                                             << "Explanation : The geostationary orbit of the earth is at a distance\n"
                                             << "of about 36000 km from the earth’s surface.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option D\n\n"
                                             << "Explanation : The geostationary orbit of the earth is at a distance\n"
                                             << "of about 36000 km from the earth’s surface.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "3. A radio broadcast from Delhi on Monday at 7.30 p.m. is heard at New York on ________" << endl;
                                   cout << "A. Tuesday at 8.35 p.m. \n"
                                        << "B. The same day at 7.30 p.m. \n"
                                        << "C. The same day at 7:30 a.m.\n"
                                        << "D. Sunday at 8.35 p.m. \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Explanation : A radio broadcast from Delhi on Monday at 7.30 p.m. is heard\n"
                                             << "at New York on the same day at 7:30 a.m..";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Explanation : A radio broadcast from Delhi on Monday at 7.30 p.m. is heard\n"
                                             << "at New York on the same day at 7:30 a.m..";
                                   }
                                   getch();
                              }
                              {

                                   system("cls");
                                   cout << "4. The position of the sun is annually twice overhead at Singapore because of the _____________" << endl;
                                   cout << "A. Rotation of the earth \n"
                                        << "B. Revolution of the earth \n"
                                        << "C. Elliptical path of the earth’s orbit\n"
                                        << "D. Parallelism of inclined axis of the earth \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'd' || ans == 'D')
                                   {
                                        cout << "Answer is correct, option D\n\n"
                                             << "Explanation : The position of the sun is annually twice overhead at Singapore because\n"
                                             << "of the parallelism of inclined axis of the earth..";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option D\n\n"
                                             << "Explanation : The position of the sun is annually twice overhead at Singapore because\n"
                                             << "of the parallelism of inclined axis of the earth..";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "5. The light of Sun takes how much time to reach to Earth" << endl;
                                   cout << "A. 8 hours 20 seconds \n"
                                        << "B. 8 minutes 20 seconds \n"
                                        << "C. 8 seconds\n"
                                        << "D. 20 seconds\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B\n\n"
                                             << "Explanation : Sunlight travels at the speed of light. Photons emitted from the surface\n"
                                             << "of the Sun need to travel across the vacuum of space to reach our eyes. The short answer \n"
                                             << "is that it takes sunlight an average of 8 minutes and 20 seconds to travel from the Sun to \n"
                                             << "the Earth.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B\n\n"
                                             << "Explanation : Sunlight travels at the speed of light. Photons emitted from the surface\n"
                                             << "of the Sun need to travel across the vacuum of space to reach our eyes. The short answer \n"
                                             << "is that it takes sunlight an average of 8 minutes and 20 seconds to travel from the Sun to \n"
                                             << "the Earth.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "6. Which of the following is the International Date line?" << endl;
                                   cout << "A. Equator\n"
                                        << "B. 0° longitude \n"
                                        << "C. 90° eastern longitude\n"
                                        << "D. 180° longitude\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'd' || ans == 'D')
                                   {
                                        cout << "Answer is correct, option D\n\n"
                                             << "Explanation : 180° longitude is the International Date line.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option D\n\n"
                                             << "Explanation : 180° longitude is the International Date line.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "7. The desert regions of the world occupy about ________ part of the land surface of the earth." << endl;
                                   cout << "A. 1/3\n"
                                        << "B. 1.6 \n"
                                        << "C. 43132\n"
                                        << "D. None of the above\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Explanation : The desert regions of the world occupy about 1/3 part\n"
                                             << "of the land surface of the earth.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Explanation : The desert regions of the world occupy about 1/3 part\n"
                                             << "of the land surface of the earth.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "8. Which planet in our solar system is nearly as big as the Earth?" << endl;
                                   cout << "A. Mercury\n"
                                        << "B. Mars \n"
                                        << "C. Venus\n"
                                        << "D. Pluto\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Explanation : Venus is nearly as big as the Earth. As it is very similar to Earth in terms\n"
                                             << "of size, average density, mass & surface gravity. It is also known as Earth’s twin.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Explanation : Venus is nearly as big as the Earth. As it is very similar to Earth in terms\n"
                                             << "of size, average density, mass & surface gravity. It is also known as Earth’s twin.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "9. The Tropic of Cancer does not pass through" << endl;
                                   cout << "A. India\n"
                                        << "B. Pakistan \n"
                                        << "C. Bangladesh\n"
                                        << "D. Myanmar\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B\n\n"
                                             << "Explanation : In Asia, Tropic of Cancer passes through Myanmar, Oman, Bangladesh, India, Saudi Arabia,\n"
                                             << "China, United Arab Emirates and Taiwan. Hence, The Tropic of cancer does not pass through Pakistan.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B\n\n"
                                             << "Explanation : In Asia, Tropic of Cancer passes through Myanmar, Oman, Bangladesh, India, Saudi Arabia,\n"
                                             << "China, United Arab Emirates and Taiwan. Hence, The Tropic of cancer does not pass through Pakistan.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "10. Day and night are formed" << endl;
                                   cout << "A. Due to the shape of the orbit of Earth\n"
                                        << "B. Due to the motion of revolution \n"
                                        << "C. Due to the speed of rotaion\n"
                                        << "D. None of these\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Explanation : The earth revolves round the sun and rotates round its own axis.\n"
                                             << "The rotation of the earth causes day and night.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Explanation : The earth revolves round the sun and rotates round its own axis.\n"
                                             << "The rotation of the earth causes day and night.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "11. What is the approximate circumference of Earth?" << endl;
                                   cout << "A. 40000 Km\n"
                                        << "B. 60000 Km \n"
                                        << "C. 80000 Km\n"
                                        << "D. 100000 Km\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Explanation : The circumference of the Earth in kilometers is 40,000 km(approx).";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Explanation : The circumference of the Earth in kilometers is 40,000 km(approx).";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "12. ‘Green House Effect’ means ________" << endl;
                                   cout << "A. Pollution in houses in tropical regions \n"
                                        << "B. Trapping of solar energy due to atmospheric carbon dioxide  \n"
                                        << "C. Trapping of solar energy due to atmospheric oxygen \n"
                                        << "D. Cultivation in green houses so as to check pollution\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Explanation : The greenhouse effect is a natural process that warms the Earth’s surface.\n"
                                             << "When the Sun’s energy reaches the Earth’s atmosphere, some of it is reflected back to space\n"
                                             << "and the rest is absorbed and re-radiated by greenhouse gases.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Explanation : The greenhouse effect is a natural process that warms the Earth’s surface.\n"
                                             << "When the Sun’s energy reaches the Earth’s atmosphere, some of it is reflected back to space\n"
                                             << "and the rest is absorbed and re-radiated by greenhouse gases.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "13. 1-degree of latitude is equal to" << endl;
                                   cout << "A. 11 Km \n"
                                        << "B. 211 Km \n"
                                        << "C. 111 Km \n"
                                        << "D. 311 Km \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Explanation : At the equator, the length of 1-degree of latitude is equal to 110.6 km (68.7 mi.)\n"
                                             << "and at the poles, the length of one of latitude is equal to 111.7 km (69.4 mi.). For our purposes,\n"
                                             << "we assume the length of one degree of latitude is 111 km. Lines of longitude, also called meridians,\n"
                                             << "run north – south.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Explanation : At the equator, the length of 1-degree of latitude is equal to 110.6 km (68.7 mi.)\n"
                                             << "and at the poles, the length of one of latitude is equal to 111.7 km (69.4 mi.). For our purposes,\n"
                                             << "we assume the length of one degree of latitude is 111 km. Lines of longitude, also called meridians,\n"
                                             << "run north – south.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "14. The core of the Earth is made up of ________" << endl;
                                   cout << "A. Mainly of iron in the liquid form \n"
                                        << "B. Mainly of nickel in the liquid form \n"
                                        << "C. Both iron and silica in the liquid form \n"
                                        << "D. Both iron and magnesium in the plastic state \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'd' || ans == 'D')
                                   {
                                        cout << "Answer is correct, option D\n\n"
                                             << "Explanation : The core of the Earth is made up of both iron and magnesium in the \n"
                                             << "plastic state. The core of the earth have two parts inner core and outer core. Above the \n"
                                             << "inner core is the outer core, a shell of liquid iron.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option D\n\n"
                                             << "Explanation : The core of the Earth is made up of both iron and magnesium in the \n"
                                             << "plastic state. The core of the earth have two parts inner core and outer core. Above the \n"
                                             << "inner core is the outer core, a shell of liquid iron.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "15. Gravitational force is maximum at which of the following place?" << endl;
                                   cout << "A. At Equator \n"
                                        << "B. At Tropic of Cancer\n"
                                        << "C. At Tropic of Capricorn \n"
                                        << "D. At Poles \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'd' || ans == 'D')
                                   {
                                        cout << "Answer is correct, option D\n\n"
                                             << "Explanation : Gravitational force is maximum at Poles. The gravitational force\n"
                                             << "is almost equal in every where in the earth. The resultant force is maximum in pole.\n"
                                             << "Since earth is rotating there is centrifugal force and due to this force is maximum at poles.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option D\n\n"
                                             << "Explanation : Gravitational force is maximum at Poles. The gravitational force\n"
                                             << "is almost equal in every where in the earth. The resultant force is maximum in pole.\n"
                                             << "Since earth is rotating there is centrifugal force and due to this force is maximum at poles.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "16. The instrument to measure the area on maps is called" << endl;
                                   cout << "A. Planimeter \n"
                                        << "B. Ideograph\n"
                                        << "C. Pantograph \n"
                                        << "D. Opisometer \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Explanation : Planimeter also called platometer, it is an instrument used\n"
                                             << "to measure an area of two dimensional shapes. eg. Area of maps.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Explanation : Planimeter also called platometer, it is an instrument used\n"
                                             << "to measure an area of two dimensional shapes. eg. Area of maps.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "17. The incoming short-wave solar radiation is balanced by an equal amount of\n"
                                        << "     long-wave radiation from earth going back to space. This is known as ________" << endl;
                                   cout << "A. Earth radiation \n"
                                        << "B. Wave balance of earth\n"
                                        << "C. Heat balance of earth \n"
                                        << "D. Radiation exchange \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Explanation : The incoming short-wave solar radiation is balanced by an equal amount\n"
                                             << "of long-wave radiation from earth going back to space. This is known as Heat balance of \n"
                                             << "earth. The earth-atmosphere energy balance is the balance between incoming energy from the\n"
                                             << "Sun and outgoing energy from the Earth.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Explanation : The incoming short-wave solar radiation is balanced by an equal amount\n"
                                             << "of long-wave radiation from earth going back to space. This is known as Heat balance of \n"
                                             << "earth. The earth-atmosphere energy balance is the balance between incoming energy from the\n"
                                             << "Sun and outgoing energy from the Earth.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "18. Which of the following layers of the earth is believed to have the heaviest mineral\n "
                                        << "     materials of highest density ?" << endl;
                                   cout << "A. Central core\n"
                                        << "B. Crust\n"
                                        << "C. Mantle \n"
                                        << "D. Both (b) and (c) \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Explanation : The layers of the earth that is believed to have the heaviest mineral \n"
                                             << "materials of highest density is Central core. Earth’s core is the very hot, very dense\n"
                                             << "center of our planet. The ball-shaped core lies beneath the cool, brittle crust and the\n"
                                             << "mostly-solid mantle.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Explanation : The layers of the earth that is believed to have the heaviest mineral \n"
                                             << "materials of highest density is Central core. Earth’s core is the very hot, very dense\n"
                                             << "center of our planet. The ball-shaped core lies beneath the cool, brittle crust and the\n"
                                             << "mostly-solid mantle.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "19. Lunar eclipse occurs on ________" << endl;
                                   cout << "A. New moon\n"
                                        << "B. Full moon\n"
                                        << "C. Half moon \n"
                                        << "D. Quarter moon \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B\n\n"
                                             << "Explanation : An eclipse of the Moon (or lunar eclipse) can only occur at Full Moon,\n"
                                             << "and only if the Moon passes through some portion of Earth’s shadow.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B\n\n"
                                             << "Explanation : An eclipse of the Moon (or lunar eclipse) can only occur at Full Moon,\n"
                                             << "and only if the Moon passes through some portion of Earth’s shadow.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "20. During Lunar eclipse, which of the following is at the centre?" << endl;
                                   cout << "A. Earth\n"
                                        << "B. Moon\n"
                                        << "C. Sun \n"
                                        << "D. Any other planet \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Explanation : Lunar eclipse takes place when Moon passes through the shadow of Earth\n"
                                             << "i.e. Earth comes between Sun and Moon. Apartial eclipse occurs if only a part of Moon\n"
                                             << "passes through the shadow.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Explanation : Lunar eclipse takes place when Moon passes through the shadow of Earth\n"
                                             << "i.e. Earth comes between Sun and Moon. Apartial eclipse occurs if only a part of Moon\n"
                                             << "passes through the shadow.";
                                   }
                                   getch();
                              }

                         } while (true);
                    }

                    else if (ch2 == 4)
                    {
                         // ****************************************** Current affairs *****************************************************************************************
                         system("cls");
                         do
                         {
                              system("cls");
                              {
                                   system("cls");
                                   cout << "1. Which technology major has announced to set up its first cloud region in Greece?" << endl;
                                   cout << "A. Amazon\n"
                                        << "B. Microsoft\n"
                                        << "C. Google \n"
                                        << "D. Meta \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Notes: Alphabet Inc’s Google has announced to set up its first cloud region\n"
                                             << "in Greece, as the country is making efforts to become a world cloud computing hub.\n"
                                             << "The deal is estimated to contribute some USD 2.13 billion to the GDP of Greece and\n"
                                             << "create some 20,000 jobs by 2030. A cloud region is based around a cluster of data\n"
                                             << "centres. Microsoft has also decided to build a data centre hub in the country.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Notes: Alphabet Inc’s Google has announced to set up its first cloud region\n"
                                             << "in Greece, as the country is making efforts to become a world cloud computing hub.\n"
                                             << "The deal is estimated to contribute some USD 2.13 billion to the GDP of Greece and\n"
                                             << "create some 20,000 jobs by 2030. A cloud region is based around a cluster of data\n"
                                             << "centres. Microsoft has also decided to build a data centre hub in the country.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "2. Indian Council for Cultural Relations (ICCR) partnered with which technology\n"
                                        << "   company to promote Sanskrit?" << endl;
                                   cout << "A. Microsoft\n"
                                        << "B. Meta\n"
                                        << "C. Twitter \n"
                                        << "D. Google \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'd' || ans == 'D')
                                   {
                                        cout << "Answer is correct, option D\n\n"
                                             << "Notes: Indian Council for Cultural Relations (ICCR) announced a collaboration \n"
                                             << "deal with Google to promote Sanskrit. ICCR and Google signed a memorandum of\n"
                                             << "understanding (MoU) to advance the tech major’s artificial intelligence\n"
                                             << "(AI)/machine learning (ML) language technology for translating Sanskrit \n"
                                             << "literature to many other languages and vice-versa.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option D\n\n"
                                             << "Notes: Indian Council for Cultural Relations (ICCR) announced a collaboration \n"
                                             << "deal with Google to promote Sanskrit. ICCR and Google signed a memorandum of\n"
                                             << "understanding (MoU) to advance the tech major’s artificial intelligence\n"
                                             << "(AI)/machine learning (ML) language technology for translating Sanskrit \n"
                                             << "literature to many other languages and vice-versa.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "3. Which city is the host of the 36th National Games of India, 2022?" << endl;
                                   cout << "A. Roorkee\n"
                                        << "B. Bengaluru\n"
                                        << "C. Ahmedabad \n"
                                        << "D. Chennai \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Notes: The Prime Minister Narendra Modi declared the 36th National Games open at\n"
                                             << "Narendra Modi Stadium in Ahmedabad. The Prime Minister also inaugurated the ‘Swarnim\n"
                                             << "Gujarat Sports University’ in Desar, Gujarat. Gujarat is hosting the National Games for\n"
                                             << "the first time. Around 15,000 sportspersons, coaches, and officials from across the country \n"
                                             << "will participate in 36 sports disciplines.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Notes: The Prime Minister Narendra Modi declared the 36th National Games open at\n"
                                             << "Narendra Modi Stadium in Ahmedabad. The Prime Minister also inaugurated the ‘Swarnim\n"
                                             << "Gujarat Sports University’ in Desar, Gujarat. Gujarat is hosting the National Games for\n"
                                             << "the first time. Around 15,000 sportspersons, coaches, and officials from across the country \n"
                                             << "will participate in 36 sports disciplines.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "4. Which state is set to set up world’s largest jungle safari park across 10,000 acres?" << endl;
                                   cout << "A. Tamil Nadu\n"
                                        << "B. Madhya Pradesh\n"
                                        << "C. Haryana \n"
                                        << "D. Nagaland \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Notes: Haryana has announced that two international firms will be hired to develop the\n"
                                             << "world’s largest jungle safari park spread across 10,000 acres in the Aravalli range. \n"
                                             << "The proposed project will be jointly developed by the Union Ministry of Environment, \n"
                                             << "Forests and Climate Change and the Haryana government. At present, the largest curated \n"
                                             << "safari park outside Africa is in Sharjah, which spans 2,000 acres.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Notes: Haryana has announced that two international firms will be hired to develop the\n"
                                             << "world’s largest jungle safari park spread across 10,000 acres in the Aravalli range. \n"
                                             << "The proposed project will be jointly developed by the Union Ministry of Environment, \n"
                                             << "Forests and Climate Change and the Haryana government. At present, the largest curated \n"
                                             << "safari park outside Africa is in Sharjah, which spans 2,000 acres.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "5. Which country is the leading exporter of Basmati Rice to the global market as of 2021-22?" << endl;
                                   cout << "A. China\n"
                                        << "B. India\n"
                                        << "C. Iran \n"
                                        << "D. Israel \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B\n\n"
                                             << "Notes: India is the leading exporter of Basmati Rice to the global market,\n"
                                             << "as it exported 3,948,161 MT of Basmati Rice worth Rs. 26,416 Crores during 2021-22. \n"
                                             << "The Indian Agricultural Research Institute (IARI) recently organised ‘Kisan Sampark Yatra’ \n"
                                             << "in Haryana and Punjab to obtain feedback on the three newly released IARI Basmati varieties. \n"
                                             << "Pusa Basmati 1847, Pusa Basmati 1885 and Pusa Basmati 1886 were by ICAR-IARI with inbuilt\n"
                                             << "resistance to Bacterial blight and blast diseases.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B\n\n"
                                             << "Notes: India is the leading exporter of Basmati Rice to the global market,\n"
                                             << "as it exported 3,948,161 MT of Basmati Rice worth Rs. 26,416 Crores during 2021-22. \n"
                                             << "The Indian Agricultural Research Institute (IARI) recently organised ‘Kisan Sampark Yatra’ \n"
                                             << "in Haryana and Punjab to obtain feedback on the three newly released IARI Basmati varieties. \n"
                                             << "Pusa Basmati 1847, Pusa Basmati 1885 and Pusa Basmati 1886 were by ICAR-IARI with inbuilt\n"
                                             << "resistance to Bacterial blight and blast diseases.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "6. Tropical Race 4 (TR4), a new fusarium species, which is on the rise in Africa, affects which plants?" << endl;
                                   cout << "A. Rice\n"
                                        << "B. Banana\n"
                                        << "C. Cotton \n"
                                        << "D. Grapes \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B\n\n"
                                             << "Notes: According to a latest research, Tropical Race 4 (TR4), a new fusarium species,\n"
                                             << "is on the rise in the African country –Mozambique. It is a fungus that affects bananas\n"
                                             << "and is found to be spreading rapidly across the world and threatening food security in Africa. \n"
                                             << "Fusarium is a filamentous fungus or a type of plant pathogen.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B\n\n"
                                             << "Notes: According to a latest research, Tropical Race 4 (TR4), a new fusarium species,\n"
                                             << "is on the rise in the African country –Mozambique. It is a fungus that affects bananas\n"
                                             << "and is found to be spreading rapidly across the world and threatening food security in Africa. \n"
                                             << "Fusarium is a filamentous fungus or a type of plant pathogen.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "7. Anopheles stephensi, which was seen in the news, is a species associated with which disease?" << endl;
                                   cout << "A. Dengue\n"
                                        << "B. Tomato flu\n"
                                        << "C. Chikungunya \n"
                                        << "D. Malaria \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'd' || ans == 'D')
                                   {
                                        cout << "Answer is correct, option D\n\n"
                                             << "Notes: The World Health Organization (WHO) has launched new initiatives to stop the spread \n"
                                             << "of invasive malaria vectors in Africa. Anopheles stephensi is the primary mosquito vector, \n"
                                             << "responsible for causing malaria in urban environments. The initiative aims to support a \n"
                                             << "regional response to Anopheles stephensi on the African continent. The WHO had also released\n"
                                             << "Global Vector Control Response 2017-2030.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option D\n\n"
                                             << "Notes: The World Health Organization (WHO) has launched new initiatives to stop the spread \n"
                                             << "of invasive malaria vectors in Africa. Anopheles stephensi is the primary mosquito vector, \n"
                                             << "responsible for causing malaria in urban environments. The initiative aims to support a \n"
                                             << "regional response to Anopheles stephensi on the African continent. The WHO had also released\n"
                                             << "Global Vector Control Response 2017-2030.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "8. Which country’s scientist has been elected as the Vice President of the International \n"
                                        << "   Astronautical Federation (IAF)?" << endl;
                                   cout << "A. China\n"
                                        << "B. Ukraine\n"
                                        << "C. India \n"
                                        << "D. Bangladesh \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Notes: Dr. A K Anil Kumar, Senior Scientist in ISRO is elected as the Vice President of the \n"
                                             << "International Astronautical Federation (IAF), during its Annual Conference held in Paris. \n"
                                             << "International Astronautical Federation (IAF) is the world’s leading space advocacy body with \n"
                                             << "433 members in 72 countries. IAF encourages development of astronautics for peaceful purposes\n"
                                             << "and supports dissemination of scientific information.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Notes: Dr. A K Anil Kumar, Senior Scientist in ISRO is elected as the Vice President of the \n"
                                             << "International Astronautical Federation (IAF), during its Annual Conference held in Paris. \n"
                                             << "International Astronautical Federation (IAF) is the world’s leading space advocacy body with \n"
                                             << "433 members in 72 countries. IAF encourages development of astronautics for peaceful purposes\n"
                                             << "and supports dissemination of scientific information.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "9. What is the name of the first indigenously developed light combat helicopters (LCH)?" << endl;
                                   cout << "A. Prachand\n"
                                        << "B. Prakash\n"
                                        << "C. Vikas \n"
                                        << "D. Pratabh \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Notes: The Indian Air Force inducted the first batch of indigenously developed Light \n"
                                             << "Combat Helicopters, named Prachand, which are capable of firing a range of missiles and \n"
                                             << "other weapons. The Light Combat Helicopters (LCH) are developed by state-run aerospace major \n"
                                             << "Hindustan Aeronautics Ltd (HAL). It has been primarily designed for deployment in high-altitude \n"
                                             << "regions. It was inducted into the IAF at a ceremony in Jodhpur.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Notes: The Indian Air Force inducted the first batch of indigenously developed Light \n"
                                             << "Combat Helicopters, named Prachand, which are capable of firing a range of missiles and \n"
                                             << "other weapons. The Light Combat Helicopters (LCH) are developed by state-run aerospace major \n"
                                             << "Hindustan Aeronautics Ltd (HAL). It has been primarily designed for deployment in high-altitude \n"
                                             << "regions. It was inducted into the IAF at a ceremony in Jodhpur.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "10. Which Union Ministry is associated with ‘YUVA 2.0’ Scheme?" << endl;
                                   cout << "A. Ministry of Education\n"
                                        << "B. Ministry of MSME\n"
                                        << "C. Ministry of Youth Affairs and Sports \n"
                                        << "D. Ministry of Commerce and Industry \n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Notes: The Ministry of Education’s Department of Higher Education inaugurated YUVA 2.0\n"
                                             << "(Young, Upcoming and Versatile Authors) on October 2. It is the Prime Minister’s Scheme \n"
                                             << "for Mentoring Young Authors. YUVA 2.0 is an author mentorship programme to train young and \n"
                                             << "aspiring writers under 30 years old in order to nurture Indian literature internationally.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Notes: The Ministry of Education’s Department of Higher Education inaugurated YUVA 2.0\n"
                                             << "(Young, Upcoming and Versatile Authors) on October 2. It is the Prime Minister’s Scheme \n"
                                             << "for Mentoring Young Authors. YUVA 2.0 is an author mentorship programme to train young and \n"
                                             << "aspiring writers under 30 years old in order to nurture Indian literature internationally.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "11. What is the minimum net worth of Regional rural banks (RRBs), to be eligible to\n"
                                        << "    list on stock exchanges?" << endl;
                                   cout << "A. Rs 100 crores\n"
                                        << "B. Rs 250 crores\n"
                                        << "C. Rs 300 crores \n"
                                        << "D. Rs 500 crores\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Notes: As per the draft guidelines issued by the Finance Ministry, Regional rural banks \n"
                                             << "(RRBs) will be eligible to list on stock exchanges and raise funds if they have net worth \n"
                                             << "of at least Rs 300 crore over the previous three years. Such banks must have a capital \n"
                                             << "adequacy of 9 per cent in each of the previous three years and recorded operating profit of \n"
                                             << "at least Rs 15 crore for a minimum of three out of the preceding five years, among other norms.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Notes: As per the draft guidelines issued by the Finance Ministry, Regional rural banks \n"
                                             << "(RRBs) will be eligible to list on stock exchanges and raise funds if they have net worth \n"
                                             << "of at least Rs 300 crore over the previous three years. Such banks must have a capital \n"
                                             << "adequacy of 9 per cent in each of the previous three years and recorded operating profit of \n"
                                             << "at least Rs 15 crore for a minimum of three out of the preceding five years, among other norms.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "12. Which state has notified safety guidelines to check industrial accidents?" << endl;
                                   cout << "A. Tamil Nadu\n"
                                        << "B. Assam\n"
                                        << "C. Andhra Pradesh \n"
                                        << "D. Kerala\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Notes: The Andhra Pradesh government notified fresh safety guidelines to institutionalise\n"
                                             << "preventive measures to check accidental leakage of toxic gases and dangerous chemicals in \n"
                                             << "factories. The new guidelines were issued under the AP Fire Service Act, 1999. In May 2020, \n"
                                             << "leak of styrene vapour from a Polymer plant near Visakhapatnam left 12 persons dead and around \n"
                                             << "1,000 people sick. There was a leak of poisonous gas from a apparel manufacturing unit two \n"
                                             << "times this year.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Notes: The Andhra Pradesh government notified fresh safety guidelines to institutionalise\n"
                                             << "preventive measures to check accidental leakage of toxic gases and dangerous chemicals in \n"
                                             << "factories. The new guidelines were issued under the AP Fire Service Act, 1999. In May 2020, \n"
                                             << "leak of styrene vapour from a Polymer plant near Visakhapatnam left 12 persons dead and around \n"
                                             << "1,000 people sick. There was a leak of poisonous gas from a apparel manufacturing unit two \n"
                                             << "times this year.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "13. Which racing driver won the Formula One Singapore Grand Prix 2022 title?" << endl;
                                   cout << "A. Sergio Perez\n"
                                        << "B. Lewis Hamilton\n"
                                        << "C. Charles Leclerc \n"
                                        << "D. Sebastien Vettel\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Notes: Red Bull’s Sergio Perez displayed prowess at the Singapore Grand Prix to win his \n"
                                             << "fourth race in Formula One. Ferrari’s Charles Leclerc finishing behind him in second, \n"
                                             << "and Carlos Sainz took third place at the Marina Bay street circuit. Sergio Pérez is a \n"
                                             << "32-year old Mexican motorsports racing driver.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Notes: Red Bull’s Sergio Perez displayed prowess at the Singapore Grand Prix to win his \n"
                                             << "fourth race in Formula One. Ferrari’s Charles Leclerc finishing behind him in second, \n"
                                             << "and Carlos Sainz took third place at the Marina Bay street circuit. Sergio Pérez is a \n"
                                             << "32-year old Mexican motorsports racing driver.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "14. Which country is the world’s largest producer and consumer of sugar in 2021-22?" << endl;
                                   cout << "A. China\n"
                                        << "B. Iran\n"
                                        << "C. India \n"
                                        << "D. Israel\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'c' || ans == 'C')
                                   {
                                        cout << "Answer is correct, option C\n\n"
                                             << "Notes: In 2021-22, India is the world’s largest producer and consumer of sugar as well \n"
                                             << "as the world’s second largest exporter of sugar. India’s sugar exports rose 57 per cent to \n"
                                             << "109.8 lakh tonnes during 2021-22 marketing year which ended September. This resulted in \n"
                                             << "foreign currency inflow worth about Rs 40,000 crore into the country.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option C\n\n"
                                             << "Notes: In 2021-22, India is the world’s largest producer and consumer of sugar as well \n"
                                             << "as the world’s second largest exporter of sugar. India’s sugar exports rose 57 per cent to \n"
                                             << "109.8 lakh tonnes during 2021-22 marketing year which ended September. This resulted in \n"
                                             << "foreign currency inflow worth about Rs 40,000 crore into the country.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "15. Who is the first Indian cricket captain to score 500 T20I runs in a calendar year?" << endl;
                                   cout << "A. Mahendra Singh Dhoni\n"
                                        << "B. Rohit Sharma\n"
                                        << "C. Virat Kohli \n"
                                        << "D. Shikhar Dhawan\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B\n\n"
                                             << "Notes: Rohit Sharma recorded his 400th appearance in the T20 International version, \n"
                                             << "as he became the first Indian player to feature in 400 T20 games. The 35-year-old opener \n"
                                             << "is also the first Indian captain to score 500 T20I runs in a calendar year. Rohit is the \n"
                                             << "first Indian skipper lead India to a T20I series win over the South African team at home.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B\n\n"
                                             << "Notes: Rohit Sharma recorded his 400th appearance in the T20 International version, \n"
                                             << "as he became the first Indian player to feature in 400 T20 games. The 35-year-old opener \n"
                                             << "is also the first Indian captain to score 500 T20I runs in a calendar year. Rohit is the \n"
                                             << "first Indian skipper lead India to a T20I series win over the South African team at home.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "16. National Payments Corporation of India has partnered with which country’s \n"
                                        << "    central bank to launch Rupay Card?" << endl;
                                   cout << "A. Egypt\n"
                                        << "B. Maldives\n"
                                        << "C. Malaysia \n"
                                        << "D. Oman\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'd' || ans == 'D')
                                   {
                                        cout << "Answer is correct, option D\n\n"
                                             << "Notes: National Payments Corporation of India and Central Bank Of Oman signed a \n"
                                             << "MoU to launch the Rupay debit card in Oman. As per the Embassy of India in Oman, \n"
                                             << "there are about 6,24,000 Indians in Oman. At present, the UAE, Bhutan and Singapore \n"
                                             << "have accepted RuPay-based cards and UPI in the country, and Nepal has allowed usage \n"
                                             << "of RuPay cards.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option D\n\n"
                                             << "Notes: National Payments Corporation of India and Central Bank Of Oman signed a \n"
                                             << "MoU to launch the Rupay debit card in Oman. As per the Embassy of India in Oman, \n"
                                             << "there are about 6,24,000 Indians in Oman. At present, the UAE, Bhutan and Singapore \n"
                                             << "have accepted RuPay-based cards and UPI in the country, and Nepal has allowed usage \n"
                                             << "of RuPay cards.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "17. Which global institution has launched a USD 6 billion financing facility to \n"
                                        << "   tackle global food crisis?" << endl;
                                   cout << "A. World Bank\n"
                                        << "B. International Finance Corporation\n"
                                        << "C. World Economic Forum \n"
                                        << "D. International Monetary Fund\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B\n\n"
                                             << "Notes: World Bank’s private sector investment arm, the International Finance Corporation \n"
                                             << "(IFC) has launched a new, USD 6 billion financing facility to tackle global food crisis. \n"
                                             << "It will support sustainable production and delivery of food stocks to countries affected \n"
                                             << "by food instability, by supporting private sector companies.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B\n\n"
                                             << "Notes: World Bank’s private sector investment arm, the International Finance Corporation \n"
                                             << "(IFC) has launched a new, USD 6 billion financing facility to tackle global food crisis. \n"
                                             << "It will support sustainable production and delivery of food stocks to countries affected \n"
                                             << "by food instability, by supporting private sector companies.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "18. India signed a deal with which country to export Pinaka missile system \n"
                                        << "    to which country for the first time?" << endl;
                                   cout << "A. Philippines\n"
                                        << "B. Armenia\n"
                                        << "C. Maldives \n"
                                        << "D. Bangladesh\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'b' || ans == 'B')
                                   {
                                        cout << "Answer is correct, option B\n\n"
                                             << "Notes: India has signed a USD 250 million deal to export arms and ammunition to Armenia, \n"
                                             << "which is currently engaged in clashes with its neighbour Azerbaijan. India will send \n"
                                             << "indigenously developed multi-barrel Pinaka launchers, anti-tank rockets, and other range \n"
                                             << "of ammunitions to Armenia, the former Soviet region. This is the first time, India is set \n"
                                             << "to export its Pinaka missile system.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option B\n\n"
                                             << "Notes: India has signed a USD 250 million deal to export arms and ammunition to Armenia, \n"
                                             << "which is currently engaged in clashes with its neighbour Azerbaijan. India will send \n"
                                             << "indigenously developed multi-barrel Pinaka launchers, anti-tank rockets, and other range \n"
                                             << "of ammunitions to Armenia, the former Soviet region. This is the first time, India is set \n"
                                             << "to export its Pinaka missile system.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "19. Which city has been named the first in the ‘Swachh Survekshan Awards 2022’? " << endl;
                                   cout << "A. Indore\n"
                                        << "B. Mysuru\n"
                                        << "C. Chennai \n"
                                        << "D. Bengaluru\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Notes: In the category of best performing states in ‘Swachh Survekshan Awards 2022’, \n"
                                             << "Indore was declared the cleanest city for sixth time in a row. It is followed by Surat \n"
                                             << "and Navi Mumbai. In the state category, Madhya Pradesh secured the first position, \n"
                                             << "followed by Chhattisgarh and Maharashtra. The 7th edition of Swachh Survekshan was \n"
                                             << "conducted to study the progress of the Swachh Bharat Mission (Urban) and rank Urban \n"
                                             << "Local Bodies (ULBs) based on various cleanliness and sanitation parameters.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Notes: In the category of best performing states in ‘Swachh Survekshan Awards 2022’, \n"
                                             << "Indore was declared the cleanest city for sixth time in a row. It is followed by Surat \n"
                                             << "and Navi Mumbai. In the state category, Madhya Pradesh secured the first position, \n"
                                             << "followed by Chhattisgarh and Maharashtra. The 7th edition of Swachh Survekshan was \n"
                                             << "conducted to study the progress of the Swachh Bharat Mission (Urban) and rank Urban \n"
                                             << "Local Bodies (ULBs) based on various cleanliness and sanitation parameters.";
                                   }
                                   getch();
                              }
                              {
                                   system("cls");
                                   cout << "20. Sukapaika River, which was seen in the news, is located in which state?" << endl;
                                   cout << "A. Odisha\n"
                                        << "B. West Bengal\n"
                                        << "C. Bihar \n"
                                        << "D. Uttarakhand\n\n";
                                   cout << "Ans = ";
                                   cin >> ans;
                                   if (ans == 'a' || ans == 'A')
                                   {
                                        cout << "Answer is correct, option A\n\n"
                                             << "Notes: The National Green Tribunal (NGT) has directed the Odisha state government \n"
                                             << "to sanction budgetary allocation of Rs 4967 lakh towards rejuvenation of Sukapaika \n"
                                             << "Drainage Channel project by March 2023. The NGT directed to rejuvenate the dead river, \n"
                                             << "to mitigate the drinking water crisis of at least three blocks of Cuttack district.";
                                   }
                                   else if (ans == '0')
                                        break;
                                   else
                                   {
                                        cout << "Ans is wrong,\n"
                                             << "correct ans is option A\n\n"
                                             << "Notes: The National Green Tribunal (NGT) has directed the Odisha state government \n"
                                             << "to sanction budgetary allocation of Rs 4967 lakh towards rejuvenation of Sukapaika \n"
                                             << "Drainage Channel project by March 2023. The NGT directed to rejuvenate the dead river, \n"
                                             << "to mitigate the drinking water crisis of at least three blocks of Cuttack district.";
                                   }
                                   getch();
                              }
                         } while (true);
                    }

                    else if (ch2 == 5)
                         break;

               } while (true);

               break;
          }

          case '0':
               break;

          default:
               cout << "wrong choice" << endl;
               break;
          }

     } while (ch >= '1' && ch <= '8');

     return 0;
}
// ctrl + a, then alt + shift + f
