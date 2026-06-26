#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<math.h>
#include<unistd.h>
using namespace std;

int main()
{
    system("cls");
    char ch;
    int ch2,ch4,ch5;
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

        cout<< endl<<endl;

        cout<< "Press '0' to Exit"<<endl;
        // cout<< endl;
        cout<< "Enter your choice"<<endl;
        cin>> ch;

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
				cout << "5. Division "<< endl;
                cout << "6. Table "<< endl; 
				cout << endl;
                cout<<"for back press 0 "<<endl;
				cout << "Enter your choice" << endl;
				cin >> ch2;

				
				if(ch2==1)
                {

                    // ------------------------------ Numbers from 1 to 100 -------------------------------
				
                    system("cls");
                    cout<<"Number from 1 to 100 "<<endl<<endl;
                    cout<<"1. ONE             "<<"11. ELEVEN         "<<"21. TWENTY-ONE       "<<"31. THIRTY-ONE      "<<"41. FORTY-ONE    "<<endl;
                    cout<<"2. TWO             "<<"12. TWELVE         "<<"22. TWENTY-TWO       "<<"32. THIRTY-TWO      "<<"42. FORTY-TWO    "<<endl;
                    cout<<"3. THREE           "<<"13. THIRTEEN       "<<"23. TWENTY-THREE     "<<"33. THIRTY-THREE    "<<"43. FORTY-THREE  "<<endl;
                    cout<<"4. FOUR            "<<"14. FOURTEEN       "<<"24. TWENTY-FOUR      "<<"34. THIRTY-FOUR     "<<"44. FORTY-FOUR   "<<endl;
                    cout<<"5. FIVE            "<<"15. FIFTEEN        "<<"25. TWENTY-FIVE      "<<"35. THIRTY-FIVE     "<<"45. FORTY-FIVE   "<<endl;
                    cout<<"6. SIX             "<<"16. SIXTEEN        "<<"26. TWENTY-SIX       "<<"36. THIRTY-SIX      "<<"46. FORTY-SIX    "<<endl;
                    cout<<"7. SEVEN           "<<"17. SEVENTEEN      "<<"27. TWENTY-SEVEN     "<<"37. THIRTY-SEVEN    "<<"47. FORTY-SEVEN  "<<endl;
                    cout<<"8. EIGHT           "<<"18. EIGHTEEN       "<<"28. TWENTY-EIGHT     "<<"38. THIRTY-EIGHT    "<<"48. FORTY-EIGHT  "<<endl;
                    cout<<"9. NINE            "<<"19. NINETEEN       "<<"29. TWENTY-NINE      "<<"39. THIRTY-NINE     "<<"49. FORTY-NINE   "<<endl;
                    cout<<"10. TEN            "<<"20. TWENTY         "<<"30. THIRTY           "<<"40. FOURTY          "<<"50. FIFTY        "<<endl;

                    cout<<"\n\n\n";

                    cout<<"51. FIFTY-ONE      "<<"61. SIXTY-ONE      "<<"71. SEVENTY-ONE      "<<"81. EIGHTY-ONE      "<<"91. NINETY-ONE    "<<endl;
                    cout<<"52. FIFTY-TWO      "<<"62. SIXTY-TWO      "<<"72. SEVENTY-TWO      "<<"82. EIGHTY-TWO      "<<"92. NINETY-TWO    "<<endl;
                    cout<<"53. FIFTY-THREE    "<<"63. SIXTY-THREE    "<<"73. SEVENTY-THREE    "<<"83. EIGHTY-THREE    "<<"93. NINETY-THREE  "<<endl;
                    cout<<"54. FIFTY-FOUR     "<<"64. SIXTY-FOUR     "<<"74. SEVENTY-FOUR     "<<"84. EIGHTY-FOUR     "<<"94. NINETY-FOUR   "<<endl;
                    cout<<"55. FIFTY-FIVE     "<<"65. SIXTY-FIVE     "<<"75. SEVENTY-FIVE     "<<"85. EIGHTY-FIVE     "<<"95. NINETY-FIVE   "<<endl;
                    cout<<"56. FIFTY-SIX      "<<"66. SIXTY-SIX      "<<"76. SEVENTY-SIX      "<<"86. EIGHTY-SIX      "<<"96. NINETY-SIX    "<<endl;
                    cout<<"57. FIFTY-SEVEN    "<<"67. SIXTY-SEVEN    "<<"77. SEVENTY-SEVEN    "<<"87. EIGHTY-SEVEN    "<<"97. NINETY-SEVEN  "<<endl;
                    cout<<"58. FIFTY-EIGHT    "<<"68. SIXTY-EIGHT    "<<"78. SEVENTY-EIGHT    "<<"88. EIGHTY-EIGHT    "<<"98. NINETY-EIGHT  "<<endl;
                    cout<<"59. FIFTY-NINE     "<<"69. SIXTY-NINE     "<<"79. SEVENTY-NINE     "<<"89. EIGHTY-NINE     "<<"99. NINETY-NINE   "<<endl;
                    cout<<"60. SIXTY          "<<"70. SEVENTY        "<<"80. EIGHTY           "<<"90. NINTY           "<<"100. HUNDRED      "<<endl;

                    getch();
                    system("cls");
                    
                }

                else if(ch2==2)
                {
                    // ------------------------------------ Addition ----------------------------------------
                    
                    system ("cls");
                   

                    cout<<"Enter First No : " ;
                    cin>>a;
                    cout<<"Enter Second No : ";
                    cin>>b;
                    s=a+b;
                
                    cout<<a  <<" + " << b <<" = "<<s<<endl<<endl;
                    getch();
                    cout<<"Examples:"<<endl;
                    cout<<"\t        "<<a+6<<"\t        "<<a+4<<"\t         "<<a+7<<"\t         "<<a+5<<"\t        "<<a+10<<endl;
                    cout<<"\t      + "<<b+3<<"\t      + "<<b+1<<"\t       + "<<b+9<<"\t       + "<<b+8<<"\t      + "<<b+9<<endl;
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    cout<<"\t        "<<a+6+b+3<<"\t        "<<a+4+b+1<<"\t         "<<a+7+b+9<<"\t         "<<a+5+b+8<<"\t        "<<a+10+b+9<<endl;
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    cout<<endl<<endl;
                    getch();
                    cout<<"Revision:"<<endl;

                
                    cout<<"\t        "<<a+5<<"\t        "<<a+2<<"\t         "<<a+1<<"\t         "<<a+7<<"\t        "<<a+6<<endl;
                    cout<<"\t      + "<<b+3<<"\t      + "<<b+4<<"\t       + "<<b+3<<"\t       + "<<b+3<<"\t      + "<<b+1<<endl;
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    cout<<endl<<endl;
                    cout<<"\t        "<<a+15<<"\t        "<<a+12<<"\t         "<<a+11<<"\t         "<<a+17<<"\t        "<<a+16<<endl;
                    cout<<"\t      + "<<b+13<<"\t      + "<<b+14<<"\t       + "<<b+13<<"\t       + "<<b+13<<"\t      + "<<b+11<<endl;
                    cout<<"              --------       --------         --------        --------       --------"<<endl;
                    cout<<"              --------       --------         --------        --------       --------"<<endl;
                    cout<<endl<<endl;
                    cout<<"\t     a) "<<a+2<<" + "<<b+1<<" = "<<"\t      b)  "<<a+4<<" + "<<b+2<<" = "<<"\t        c) "<<a+3<<" + "<<b+5<<" = "<<"\t      d) "<<a+4<<" + "<<b+1<<" = "<<endl; 
                    cout<<endl<<endl;
                    cout<<"\t     e) "<<a+10<<" + "<<b+12<<" = "<<"\t      f)  "<<a+14<<" + "<<b+12<<" = "<<"\t        g) "<<a+13<<" + "<<b+15<<" = "<<"\t      h) "<<a+14<<" + "<<b+11<<" = "<<endl; 
                    cout<<endl<<endl;
                    cout<<"\t     i) "<<a+21<<" + "<<b+31<<" = "<<"\t      j)  "<<a+14<<" + "<<b+22<<" = "<<"\t        k) "<<a+31<<" + "<<b+25<<" = "<<"\t      l) "<<a+24<<" + "<<b+21<<" = "<<endl;                    

                
                    

                    getch();
                    system("cls");

                }

                else if(ch2==3)
                {
                    // --------------------------------------- Substraction --------------------------------------
                   system ("cls");
                    cout<<"Enter First No : " ;
                    cin>>a;
                    cout<<"Enter Second No : ";
                    cin>>b;
                    s=a-b;
                
                    cout<<a  <<" - " << b <<" = "<<s<<endl<<endl;
                    getch();
                    cout<<"Example:"<<endl;
                    cout<<"\t        "<<a+3<<"\t        "<<a+7<<"\t         "<<a+9<<"\t         "<<a<<"\t        "<<a+2<<endl;
                    cout<<"\t      - "<<b+8<<"\t      - "<<b+3<<"\t       - "<<b+5<<"\t       - "<<b+4<<"\t      - "<<b+7<<endl;
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    cout<<"\t        "<<(a+3)-(b+8)<<"\t        "<<(a+7)-(b+3)<<"\t         "<<(a+9)-(b+5)<<"\t         "<<a-(b+4)<<"\t        "<<(a+2)-(b+7)<<endl;
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    
                    getch();
                    cout<<"Revision:"<<endl;

                
                    cout<<"\t        "<<a+5<<"\t        "<<a+2<<"\t         "<<a+1<<"\t         "<<a+7<<"\t        "<<a+6<<endl;
                    cout<<"\t      - "<<b+3<<"\t      - "<<b+4<<"\t       - "<<b+3<<"\t       - "<<b+3<<"\t      - "<<b+1<<endl;
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    cout<<endl<<endl;
                    cout<<"\t        "<<a+15<<"\t        "<<a+12<<"\t         "<<a+11<<"\t         "<<a+17<<"\t        "<<a+16<<endl;
                    cout<<"\t      - "<<b+13<<"\t      - "<<b+14<<"\t       - "<<b+13<<"\t       - "<<b+13<<"\t      - "<<b+11<<endl;
                    cout<<"              --------       --------         --------        --------       --------"<<endl;
                    cout<<"              --------       --------         --------        --------       --------"<<endl;
                    cout<<endl<<endl;
                    cout<<"\t     a) "<<a+2<<" - "<<b+1<<" = "<<"\t      b)  "<<a+4<<" - "<<b+2<<" = "<<"\t        c) "<<a+3<<" - "<<b+5<<" = "<<"\t      d) "<<a+4<<" - "<<b+1<<" = "<<endl; 
                    cout<<endl<<endl;
                    cout<<"\t     e) "<<a+10<<" - "<<b+12<<" = "<<"\t      f)  "<<a+14<<" - "<<b+12<<" = "<<"\t        g) "<<a+13<<" - "<<b+15<<" = "<<"\t      h) "<<a+14<<" - "<<b+11<<" = "<<endl; 
                    cout<<endl<<endl;
                    cout<<"\t     i) "<<a+21<<" - "<<b+31<<" = "<<"\t      j)  "<<a+14<<" - "<<b+22<<" = "<<"\t        k) "<<a+31<<" - "<<b+25<<" = "<<"\t      l) "<<a+24<<" - "<<b+21<<" = "<<endl;                    


                    getch();
                    system("cls");
 
                }

                else if(ch2==4)
                {
                    // --------------------------------------- Multiplication --------------------------------------
                  system ("cls");
                    cout<<"Enter First No : " ;
                    cin>>a;
                    cout<<"Enter Second No : ";
                    cin>>b;
                    s=a*b;
                
                    cout<<a  <<" x " << b <<" = "<<s<<endl<<endl;
                    getch();
                    cout<<"Revision:"<<endl;

                
                    cout<<"\t        "<<a+5<<"\t        "<<a+2<<"\t         "<<a+1<<"\t         "<<a+7<<"\t        "<<a+6<<endl;
                    cout<<"\t      x "<<b+3<<"\t      x "<<b+4<<"\t       x "<<b+3<<"\t       x "<<b+3<<"\t      x "<<b+1<<endl;
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    cout<<endl<<endl;
                    cout<<"\t        "<<a+15<<"\t        "<<a+12<<"\t         "<<a+11<<"\t         "<<a+17<<"\t        "<<a+16<<endl;
                    cout<<"\t      x "<<b+13<<"\t      x "<<b+14<<"\t       x "<<b+13<<"\t       x "<<b+13<<"\t      x "<<b+11<<endl;
                    cout<<"              --------       --------         --------        --------       --------"<<endl;
                    cout<<"              --------       --------         --------        --------       --------"<<endl;
                    cout<<endl<<endl;
                    cout<<"\t     a) "<<a+2<<" x "<<b+1<<" = "<<"\t      b)  "<<a+4<<" x "<<b+2<<" = "<<"\t        c) "<<a+3<<" x "<<b+5<<" = "<<"\t      d) "<<a+4<<" x "<<b+1<<" = "<<endl; 
                    cout<<endl<<endl;
                    cout<<"\t     e) "<<a+10<<" x "<<b+12<<" = "<<"\t      f)  "<<a+14<<" x "<<b+12<<" = "<<"\t        g) "<<a+13<<" x "<<b+15<<" = "<<"\t      h) "<<a+14<<" x "<<b+11<<" = "<<endl; 
                    cout<<endl<<endl;
                    cout<<"\t     i) "<<a+21<<" x "<<b+31<<" = "<<"\t      j)  "<<a+14<<" x "<<b+22<<" = "<<"\t        k) "<<a+31<<" x "<<b+25<<" = "<<"\t      l) "<<a+24<<" x "<<b+21<<" = "<<endl;                    


                    getch();
                    system("cls"); 
                }
                    
                else if(ch2==5)
                {
                    // ------------------------------------- Division -----------------------------------------
                    system ("cls");
                    cout<<"Enter First No : " ;
                    cin>>a;
                    cout<<"Enter Second No : ";
                    cin>>b;
                    s=b/a;
                
                    cout<<b<<" / "<<a<<" = "<<s <<endl<<endl;
                    getch();
                    cout<<"Exaples:-"<<endl;
                    cout<<"\t    "<<a<<" ) "<<b+8<<" ( "<<(b+8)/a<<"\t   "<<a+1<<" ) "<<b+5<<" ( "<<(b+5)/(a+1)<<"\t    "<<a+2<<" ) "<<b+22<<" ( "<<(b+22)/(a+2)<<"\t    "<<a+3<<" ) "<<b+35<<" ( "<<(b+35)/(a+3)<<"\t   "<<a+4<<" ) "<<b+32<<" ( "<<(b+32)/(a+4)<<endl;
 
                    cout<<"\t        "<<b+8<<"\t       "<<b+5<<"\t        "<<b+22<<"\t        "<<b+35<<"\t       "<<b+32<<"   "<<endl;
                
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    cout<<"\t        "<<"xx"<<"\t       "<<"xx"<<"\t        "<<"xx"<<"\t        "<<"xx"<<"\t       "<<"xx"<<"   "<<endl;
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    cout<<endl<<endl;
                    getch();
                    
                    cout<<"Revision:"<<endl;

                
                    int temp;
                    temp=a;
                    a=b;
                    b=temp;

                    cout<<"\t    "<<a-4<<" ) "<<b+16<<" ( "<<"\t   "<<a-2<<" ) "<<b+62<<" ( "<<"\t    "<<a<<" ) "<<b+88<<" ( "<<"\t    "<<a+1<<" ) "<<b+42<<" ( "<<"\t   "<<a+2<<" ) "<<b+22<<" ( "<<endl;
                    cout<<endl<<endl;
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    cout<<endl<<endl;
                    cout<<"\t    "<<a-2<<" ) "<<b+38<<" ( "<<"\t   "<<a+5<<" ) "<<b+72<<" ( "<<"\t    "<<a-6<<" ) "<<b+34<<" ( "<<"\t    "<<a+2<<" ) "<<b+46<<" ( "<<"\t   "<<a+1<<" ) "<<b+75<<" ( "<<endl;
                    cout<<endl<<endl;
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    cout<<"            --------       --------         --------        --------       --------"<<endl;
                    cout<<endl<<endl;
                    cout<<"\t     a) "<<a+26<<" / "<<b+2<<" = "<<"\t      b)  "<<a+2<<" / "<<b+4<<" = "<<"\t        c) "<<a+5<<" / "<<b+3<<" = "<<"\t      d) "<<a+54<<" / "<<b+6<<" = "<<endl; 
                    cout<<endl<<endl;
                    cout<<"\t     e) "<<a+39<<" / "<<b+5<<" = "<<"\t      f)  "<<a+14<<" / "<<b+2<<" = "<<"\t        g) "<<a+15<<" / "<<b+3<<" = "<<"\t      h) "<<a+11<<" / "<<b+5<<" = "<<endl; 
                    cout<<endl<<endl;
                    cout<<"\t     i) "<<a+70<<" / "<<b+6<<" = "<<"\t      j)  "<<a+22<<" / "<<b+4<<" = "<<"\t        k) "<<a+17<<" / "<<b+1<<" = "<<"\t      l) "<<a+35<<" / "<<b+7<<" = "<<endl;  

                    cout<<endl;

                    getch();
                    system("cls");
                }  

                else if(ch2==6)
                {
                    // ------------------------------------- Table  -----------------------------------------
                    system ("cls");
                    float n;
                    int ch3;
                    do
                    {
                        system("cls");
                    cout<<"1. For learning"<<endl;
                    cout<<"2. For revision"<<endl<<endl;
                    cout<<"For back press '0'"<<endl;

                    cout<<"Enter your choise"<<endl;
                    cin>>ch3;

                    if(ch3==1)
                    {
                        system("cls");
                        cout<<"Table of ";
                        cin>>n;
                        for(int i=1;i<=10;i++)
                        {
                            cout<<n<<" * "<<i<<" = "<<n*i<<endl;
                        }
                        getch();
                        
                    }

                    else if(ch3==2)
                    {
                        system("cls");
                        cout<<"Table of ";
                        cin>>n;
                        for(int i=1;i<=10;i++)
                        {
                            cout<<n<<" * "<<i<<" = "<<n*i<<endl;
                            sleep(2);
                        }
                        getch();
                    }
                    else if(ch3==0)
                    break;
                    } while (ch3>=1 && ch3<=2);
                    

                    
                    

                    getch();
                    system("cls");
                }  


                


                } while (ch2>=1 && ch2<= 6);
                break;
            }

            //********************************* Class '2' ***************************************
            case '2':
            {
                system("cls");
                cout<<"Chapter 1: What is long, What is round"<<endl;
                cout<<"Chapter 2: Counting in groups"<<endl;
                cout<<"Chapter 3: How much can you carry"<<endl;
                cout<<"Chapter 4: Counting in tens"<<endl;
                cout<<"Chapter 5: Patterns"<<endl;
                cout<<"Chapter 6: Footprints"<<endl;
                cout<<"Chapter 7: Jugs and mugs"<<endl;
                cout<<"Chapter 8: My funday"<<endl;

                getch();
                system("cls");
                cout<<endl;
                cout<<"Question Practise:-"<<endl<<endl;
                cout<<" Fill in the blanks:"<<endl<<endl;
                cout<<"1. 100 + 60 + 3 = .........."<<endl;
                cout<<"2. 15 + 3 = .........."<<endl;
                cout<<"3. 2 x 8 = .........."<<endl;
                cout<<"4. 2 hundred + 4 tens + 5 ones = .........."<<endl;
                cout<<"5. 8 - ...... = 7"<<endl;
                cout<<"6. 12 - 10 = .........."<<endl<<endl;
                cout<<"Match:"<<endl<<endl;
                cout<<"7. 6 + 10                          3 x 2"<<endl;
                cout<<"8. Sixty                              60"<<endl;
                cout<<"9. * * *   * * *                     715"<<endl;
                cout<<"10 Seven hundred fifteen              60"<<endl<<endl;
                
                cout<<"11. Give the number that comes after.:"<<endl<<endl;
                cout<<"a. 172 ......."<<endl;
                cout<<"b. 169 ......."<<endl<<endl;
                cout<<"c. 187 ......."<<endl<<endl;
                cout<<"d. 192 ......."<<endl<<endl;
                cout<<"e. 158 ......."<<endl<<endl;
                cout<<"12. Write the number name"<<endl;
                cout<<"a. 54 - ...................."<<endl;
                cout<<"b. 63 - ...................."<<endl;
                cout<<"c. 93 - ...................."<<endl;
                cout<<"d. 25 - ...................."<<endl;
                cout<<"e. 72 - ...................."<<endl<<endl;

                cout<<"13. Write the numeral"<<endl<<endl;
                cout<<"a. Six hundred seventy         ........................"<<endl;
                cout<<"b. One thousand                ........................"<<endl;
                cout<<"c. Two hundread ten            ........................"<<endl;
                cout<<"d. Nine hundred fourteen       ........................"<<endl;
                cout<<"e. Eight hundred ninety two    ........................"<<endl<<endl;
                
                cout<<"14. Fill in the blanks:-"<<endl;

                cout<<"a. 879  ____  ____  882  ____ ____"<<endl;
                cout<<"b. 436  ____  ____  439  ____ ____"<<endl;
                cout<<"c.  76  ____  ____   79  ____ ____"<<endl;
                cout<<"d.  42  ____  ____   45  ____ ____"<<endl;
                cout<<"e. 994  ____  ____  997  ____ ____"<<endl;
                cout<<"f.  82  ____  ____   79  ____ ____"<<endl;
                cout<<"g.  46  ____  ____   43  ____ ____"<<endl;
                cout<<"h.  93  ____  ____   90  ____ ____"<<endl<<endl;

                cout<<"15. What come before:-"<<endl<<endl;
                cout<<"a.   ____  82"<<endl;
                cout<<"b.   ____  39"<<endl;
                cout<<"c.   ____  79"<<endl;
                cout<<"d.   ____  45"<<endl;
                cout<<"e.   ____  97"<<endl;
                cout<<"f.   ____  79"<<endl;
                cout<<"g.   ____  43"<<endl;
                cout<<"h.   ____  90"<<endl<<endl;

                cout<<"16. What come After:-"<<endl<<endl;
                cout<<"a.   79  ____ "<<endl;
                cout<<"b.   36  ____ "<<endl;
                cout<<"c.   76  ____ "<<endl;
                cout<<"d.   42  ____ "<<endl;
                cout<<"e.   94  ____ "<<endl;
                cout<<"f.   82  ____ "<<endl;
                cout<<"g.   46  ____ "<<endl;
                cout<<"h.   93  ____ "<<endl<<endl;


                
                


                
                 getch();
                break;
            }

            //******************************** Class '3' ****************************************
            case '3':
            {
                system("cls");
                cout<<"good morning";

                break;
            }

            //******************************* Class '4' ****************************************
            case '4':
            {
                system("cls");
                cout<<"good afternoom";

                break;
            } 

            //******************************** Class '5' ****************************************
            case '5':
            {
                system("cls");
                cout<<"good evening";

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

                cout << "Press '0' to Exit" << endl;
		        cout << endl;
		        cout << "Enter your choice" << endl;
		        cin >> ch4;

                if(ch4==1)
                {
                    system("cls");
                    do
                    {
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

                        if(ch5==1)
                        {
                            // ******************** 1 area ***********************
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

                        else if(ch5==2)
                        {
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

                        else if(ch5==3)
                        {
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

                            

                            getch();
                        
                        }

                        else if(ch5==4)
                        {
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
                             getch();
                            
                        }
                        
                        else if(ch5==5)
                            break;
                        
                        } while (ch5>=1  &&  ch5<=5);
                
                    
                }

                else if(ch4==2)
                {
                    system("cls");
                    do
                    {
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

                        if(ch5==1)
                        {
                            system("cls");



                            getch();

                        }

                         else if(ch5==2)
                         {
                             system("cls");
         
         
         
                             getch();
                             
                         }

                          else if(ch5==3)
                         {
                             system("cls");
         
         
         
                             getch();
                             
                         }

                          else if(ch5==4)
                         {
                             system("cls");
         
         
         
                             getch();
                             
                         }
                         else if(ch5==5)
                            break;
                        


                    } while (ch5>=1  &&  ch5<=5);
                    



                    getch();
                    break;
                }

                else if(ch4==3)
                {
                    system("cls");



                    getch();
                    break;
                }

                else if(ch4==4)
                {
                    system("cls");



                    getch();
                    break;
                }

                else if(ch4==5)
                {
                    system("cls");


                    getch();
                    break;
                }
		             


               } while (ch4>=1  && ch4<=5);
               

                break;
            }

            //******************************** Calculation *************************************
            case '7':
            {
                system("cls");
                cout<<"bad night";

                break;
            }

            //*******************************  Qiuz *******************************************
            case '8':
            {
                system("cls");
                cout<<"hello every one";

                break;
            }

            case '0':
            break;



            default:
            cout<<"wrong choice"<<endl;
            break;
        }       

        
    } while (ch>= '1'  && ch<= '8'); 
    
    return 0;
     
}

