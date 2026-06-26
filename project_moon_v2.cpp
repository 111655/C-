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
          << "  printf( \"\\n \\t height = %d\",h);\n"
          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n area of triangle = 1/2 * b * h \");\n"
          << "  printf( \"\\n \\t         = 1/2 * %d * %d\",b,h);\n"

          << "  area = 0.5 * b * h;\n"
          << "  printf(\"\\n \\t area = %d\", area);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     //     ********************* perimeter of triangle ***************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"
          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,b,c,peri; \n"
          << "  printf( \"enter side 'a' = \");\n"
          << "  scanf(\"%d\",&a);\n"
          << "  printf( \"enter side 'b' = \");\n"
          << "  scanf(\"%d\",&b);\n"
          << "  printf( \"enter side 'c' = \");\n"
          << "  scanf(\"%d\",&c);\n"
          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t side 'a' = %d\",a);\n"
          << "  printf( \"\\n \\t side 'b' = %d\",b);\n"
          << "  printf( \"\\n \\t side 'c' = %d\",c);\n"
          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n perimeter of triangle = a + b + c \");\n"
          << "  printf( \"\\n \\t         = %d + %d + %d\",a,b,c);\n"

          << "  peri = a + b + c;\n"
          << "  printf(\"\\n \\t perimeter = %d\",peri);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     //     ********************* semi-perimeter of triangle ***************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"
          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,b,c,peri; \n"
          << "  printf( \"enter side 'a' = \");\n"
          << "  scanf(\"%d\",&a);\n"
          << "  printf( \"enter side 'b' = \");\n"
          << "  scanf(\"%d\",&b);\n"
          << "  printf( \"enter side 'c' = \");\n"
          << "  scanf(\"%d\",&c);\n"
          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t side 'a' = %d\",a);\n"
          << "  printf( \"\\n \\t side 'b' = %d\",b;\n"
          << "  printf( \"\\n \\t side 'c' = %d\",c);\n"
          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n semi-perimeter of triangle = (a + b + c)/2 \");\n"
          << "  printf( \"\\n \\t         = ( %d + %d + %d )/2 \",a,b,c);\n"

          << "  peri = (a + b + c)/2;\n"
          << "  printf(\"\\n \\t semi-perimeter = %d\",peri);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     //     ********************* area using herons formula ***************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"
          << "#include<math.h> \n"
          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,b,c,s,area; \n"
          << "  printf( \"enter semi-perimeter 's' = \");\n"
          << "  scanf(\"%d\",&s);\n"
          << "  printf( \"enter side 'a' = \");\n"
          << "  scanf(\"%d\",&a);\n"
          << "  printf( \"enter side 'b' = \");\n"
          << "  scanf(\"%d\",&b);\n"
          << "  printf( \"enter side 'c' = \");\n"
          << "  scanf(\"%d\",&c);\n"
          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n semi-perimeter 's' = %d\",s);\n"
          << "  printf( \"\\n \\t side 'a' = %d\",a);\n"
          << "  printf( \"\\n \\t side 'b' = %d\",b);\n"
          << "  printf( \"\\n \\t side 'c' = %d\",c);\n"
          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n Heron's Formula = under root(s*(s-a)*(s-b)*(s-c)) \");\n"
          << "  area = sqrt(s * (s - a) * (s - b) * (s - h));\n"
          << "  printf(\"\\n \\t semi-perimeter = %d\",area);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ********************* area of rectangle ************************

     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"
          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int l,b,area; \n"
          << "  printf( \"enter length = \");\n"
          << "  scanf(\"%d\",&l);\n"
          << "  printf( \"enter breadth = \");\n"
          << "  scanf(\"%d\",&b);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t length = %d\",l);\n"
          << "  printf( \"\\n \\t breadth = %d\",b);\n"
          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n area of rectangle = l * b \");\n"
          << "  printf( \"\\n \\t         = %d * %d\",l,b);\n"

          << "  area = l * b;\n"
          << "  printf(\"\\n \\t area = %d\", area);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;

     // ********************* perimeter of rectangle ************************

     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"
          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int l,b,peri; \n"
          << "  printf( \"enter length = \");\n"
          << "  scanf(\"%d\",&l);\n"
          << "  printf( \"enter breadth = \");\n"
          << "  scanf(\"%d\",&b);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t length = %d\",l);\n"
          << "  printf( \"\\n \\t breadth = %d\",b);\n"
          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n perimeter of rectangle = 2*(l+b) \");\n"
          << "  printf( \"\\n \\t         = 2*(%d + %d)\",l,b);\n"

          << "  peri = 2*(l+b);\n"
          << "  printf(\"\\n \\t perimeter = %d\", peri);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;

     // ********************* diagonal of rectangle ************************

     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"
          << "#include<math.h> \n"
          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int l,b,dia; \n"
          << "  printf( \"enter length = \");\n"
          << "  scanf(\"%d\",&l);\n"
          << "  printf( \"enter breadth = \");\n"
          << "  scanf(\"%d\",&b);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t length = %d\",l);\n"
          << "  printf( \"\\n \\t breadth = %d\",b);\n"
          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n diagonal of rectangle = under root(l * l + b * b) \");\n"

          << "  dia = sqrt((l * l) + (b * b));\n"
          << "  printf(\"\\n \\t diagonal = %d\", dia);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // *********************************** area of four side wall **********************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int l,b,h,area; \n"
          << "  printf( \"enter length = \");\n"
          << "  scanf(\"%d\",&l);\n"
          << "  printf( \"enter breadth = \");\n"
          << "  scanf(\"%d\",&b);\n"
          << "  printf( \"enter height = \");\n"
          << "  scanf(\"%d\",&h);\n"
          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t length = %d\",l);\n"
          << "  printf( \"\\n \\t breadth = %d\",b);\n"
          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n Area of 4 sides of wall = 2 *(l + b) * h \");\n"
          << "  printf( \"\\n \\t         = 2*(%d + %d) * %d\",l,b,h);\n"

          << "  area = 2 * (l + b) * h;\n"
          << "  printf(\"\\n \\t area = %d\", area);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ********************* area of square ************************

     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,area; \n"
          << "  printf( \"enter the value of side = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t side = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n Area of square = side * side \");\n"

          << "  area = a * a;\n"
          << "  printf(\"\\n \\t area = %d\", area);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ********************* perimeter of square ************************

     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,pm; \n"
          << "  printf( \"enter the value of side = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t side = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n Perimeter of square = 4 * side \");\n"

          << "  pm = 4 * a;\n"
          << "  printf(\"\\n \\t perimeter = %d\", pm);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ********************* diagonal of square ************************

     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"
          << "#include<math.h> \n"
          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,diag; \n"
          << "  printf( \"enter the value of side = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t side = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n diagonal = under root (2) * side \");\n"

          << "  diag = sqrt(2) * a;\n"
          << "  printf(\"\\n \\t diagonal = %d\", diag);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ********************* area of circle ************************

     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,area; \n"
          << "  printf( \"enter the value of radius = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t radius = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n area of circle = 3.14 * radius * radius \");\n"

          << "  area = 3.14 * a * a;\n"
          << "  printf(\"\\n \\t area = %d\",area);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ************************* area of semi-circle *******************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,area; \n"
          << "  printf( \"enter the value of radius = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t radius = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n area of semi-circle = (3.14 * radius * radius)1/2 \");\n"

          << "  area = (3.14 * a * a) / 0.5;\n"
          << "  printf(\"\\n \\t area = %d\",area);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ************************* area of quadrants *******************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,area; \n"
          << "  printf( \"enter the value of radius = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t radius = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n area of quadrant = (3.14 * radius * radius)/4 \");\n"

          << "  area = (3.14 * a * a) / 4;\n"
          << "  printf(\"\\n \\t area = %d\",area);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ************************* diameter of circle *******************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,dia; \n"
          << "  printf( \"enter the value of radius = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t radius = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n diameter of circle = 2 * radius \");\n"

          << "  dia = 2 * a / 4;\n"
          << "  printf(\"\\n \\t diameter = %d\",dia);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ************************* circumference of circle *******************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,cf; \n"
          << "  printf( \"enter the value of radius = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t radius = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n circumference of circle = 2 * 3.14 * radius \");\n"

          << "  cf = 2 * 3.14 * a;\n"
          << "  printf(\"\\n \\t circumference = %d\",cf);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ************************* volume of cube *******************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,vol; \n"
          << "  printf( \"enter the value of edge (a) = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t edge (a) = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n volume of cube = a * a * a \");\n"

          << "  vol = a * a * a;\n"
          << "  printf(\"\\n \\t volume = %d\",vol);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ************************* total surface of cube *******************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,total; \n"
          << "  printf( \"enter the value of edge (a) = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t edge (a) = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n total surface area of cube = 6 * a * a \");\n"

          << "  total = 6 * a * a;\n"
          << "  printf(\"\\n total surface = %d\",total);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ************************* lateral surface of cube *******************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,lateral; \n"
          << "  printf( \"enter the value of edge (a) = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t edge (a) = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n lateral surface area of cube = 4 * a * a \");\n"

          << "  lateral = 6 * a * a;\n"
          << "  printf(\"\\n lateral surface = %d\",lateral);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ************************* diagonal of cube *******************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"
          << "#include<math.h> \n"
          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,diag; \n"
          << "  printf( \"enter the value of edge (a) = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t edge (a) = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n diagonal of cube = under root (3) * a \");\n"

          << "  diag = a * sqrt(3);\n"
          << "  printf(\"\\n diagonal = %d\",diag);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ************************* diameter of sphere *******************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,dia; \n"
          << "  printf( \"enter the value of radius = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t radius = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n Diameter of a sphere = 2 * radius \");\n"

          << "  dia = 2 * a;\n"
          << "  printf(\"\\n \\t diameter = %d\",dia);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ************************* circumference of a sphere *******************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,circu; \n"
          << "  printf( \"enter the value of radius = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t radius = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n circumference of a sphere = 2 * 3.14 * radius \");\n"

          << "  circu = 2 * 3.14 * a;\n"
          << "  printf(\"\\n \\t circumference = %d\",circu);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ************************* surface area of a sphere *******************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,sur; \n"
          << "  printf( \"enter the value of radius = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t radius = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n surface area of a sphere = 4 * 3.14 * r * r \");\n"

          << "  sur = 4 * 3.14 * a * a;\n"
          << "  printf(\"\\n \\t surface area = %d\",sur);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ************************* volume of  sphere *******************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,vol; \n"
          << "  printf( \"enter the value of radius = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t radius = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n volume of a sphere = 4/3 * 3.14 * r * r * r\");\n"

          << "  vol = (1.33333 * 3.14 * a * a * a);\n"
          << "  printf(\"\\n \\t volume = %d\",vol);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ************************* radius of  sphere *******************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int a,radius; \n"
          << "  printf( \"enter the value of diameter = \");\n"
          << "  scanf(\"%d\",&a);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t diameter = %d\",a);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n radius of a sphere = d/2\");\n"

          << "  radius = a / 2;\n"
          << "  printf(\"\\n \\t radius = %d\",radius);\n"

          << "  getch(); \n"
          << "}";
     getch(); 
      // ********************* area of rhombus ************************

     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"
          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int d1,d2,area; \n"
          << "  printf( \"enter value of diagonal (d1) = \");\n"
          << "  scanf(\"%d\",&d1);\n"
          << "  printf( \"enter value of diagonal (2) = \");\n"
          << "  scanf(\"%d\",&d2);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t diagonal (d1) = %d\",d1);\n"
          << "  printf( \"\\n \\t diagonal (d2) = %d\",d2);\n"
          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n Area of rhombus = (d1 + d2) / 2 \");\n"
          << "  printf( \"\\n \\t         = (%d * %d)/2 \",d1,d2);\n"

          << "  area = (d1 + d2)/2;\n"
          << "  printf(\"\\n \\t area = %d\", area);\n"

          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ************************* perimeter of rhombus *******************
     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"

          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int s,pm; \n"
          << "  printf( \"enter the value of side (s) = \");\n"
          << "  scanf(\"%d\",&s);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t side (s) = %d\",s);\n"

          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n Perimeter of rhombus = 4 * s \");\n"

          << "  pm = 4 * s;\n"
          << "  printf(\"\\n \\t perimeter = %d\",pm);\n"

          << "  getch(); \n"
          << "}";
     getch(); 
     cout<<endl<<endl;
     // ********************* diagonal d1 of rhombus ************************

     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"
          << "#include<math.h> \n"
          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int s,d2,diag; \n"
          << "  printf( \"enter value of side (s) = \");\n"
          << "  scanf(\"%d\",&s);\n"
          << "  printf( \"enter value of diagonal (d2) = \");\n"
          << "  scanf(\"%d\",&d2);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t side (s)  = %d\",s);\n"
          << "  printf( \"\\n \\t diagonal (d2) = %d\",d2);\n"
          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n Diagonal (d1) = under root [(4*s*s)-(d2*d2)] \");\n"
          << "  diag = sqrt((4 * s * s) - (d2 * d2));\n"
          << "  printf(\"\\n \\t diagonal (d1) = %d\", diag);\n"
          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
     // ********************* diagonal d2 of rhombus ************************

     cout << "#include<stdio.h> \n"
          << "#include<conio.h> \n"
          << "#include<math.h> \n"
          << "void main() \n"
          << "{ \n"
          << "  clrscr(); \n"
          << "  int s,d1,diag; \n"
          << "  printf( \"enter value of side (s) = \");\n"
          << "  scanf(\"%d\",&s);\n"
          << "  printf( \"enter value of diagonal (d1) = \");\n"
          << "  scanf(\"%d\",&d1);\n"

          << "  printf( \"\\n Given, \");\n"
          << "  printf( \"\\n \\t side (s)  = %d\",s);\n"
          << "  printf( \"\\n \\t diagonal (d1) = %d\",d2);\n"
          << "  printf( \"\\n sol:,\");\n"
          << "  printf( \"\\n Diagonal (d2) = under root [(4*s*s)-(d1*d1)] \");\n"
          << "  diag = sqrt((4 * s * s) - (d1 * d1));\n"
          << "  printf(\"\\n \\t diagonal (d2) = %d\", diag);\n"
          << "  getch(); \n"
          << "}";
     getch();
     cout<<endl<<endl;
          



}
