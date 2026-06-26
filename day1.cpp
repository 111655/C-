#include <iostream>
using namespace std;
#include <conio.h>
int main()
{

    system("cls");

    cout << "#include<stdio.h> \n"
         << "#include<conio.h> \n"
         << "void main() \n"
         << "{ \n"
         << "  clrscr(); \n"
         << "  int i,n; \n"
         << "  cout<<\"table of \"; \n"
         << "  cin>>n; \n"
         << "  for( i=1; i<=10; i++) \n"
         << "  { \n"
         << "     cout<<n<<\" * \"<<i<<\" = \"<<n*i<<endl; \n"
         << "  } \n"
         << "getch(); \n"
         << "}" << endl
         << endl;
    getch();
    // ********************* area of triangle ************************

    cout << "#include<stdio.h> \n"
         << "#include<conio.h> \n"
         << "void main() \n"
         << "{ \n"
         << "  clrscr(); \n"
         << "  int b,h,area; \n"
         << "  printf( \"enter base = \");\n"
         << "  scanf(\"%d\",&b);\n"
         << "  printf( \"enter height = \");\n"
         << "  scanf(\"%d\",&h);\n"

         << "  printf( \"\\n Given, \");\n"
         << "  printf( \"\\n \\t base = %d\",b);\n"
         << "  printf( \"\\n \\t height = %d\",h;\n"
         << "  printf( \"\\n sol:,\");\n"
         << "  printf( \"\\n area of triangle = 1/2 * b * h );\n"
         << "  printf( \"\\n \\t         = 1/2 * %d * %d\",b,h);\n"

         << "  area = 0.5 * b * h;\n"
         << "  printf(\"\\n \\t area = %d\", area);\n"

         << "  getch(); \n"
         << "}";
}