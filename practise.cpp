#include<graphics.h>
//#include<conio.h>
main()
{
	initwindow(1000,1000);
	
	
//	setcolor(RED);
//	circle(200,240,100);
//	setfillstyle(SOLID_FILL,YELLOW);
//	floodfill(200,240,RED);

//    setcolor(YELLOW);
//    rectangle(70,70,410,290);
//    setfillstyle(SOLID_FILL,BLUE);
//    floodfill(200,200,YELLOW);
    
    
//    setcolor(BLUE);
//    arc(200,200,0,180,100);
//    
    
    
//    arc(200,200,0,90,100);
//   arc(200,200,90,180,100);
//	arc(200,200,180,270,100);
//arc(200,200,270,315,100);
//arc(200,200,315,360,100);

//setcolor(RED);
//for(int i=0;i<1000;i++);
//{
//
//circle(100 + i,250,50);
//setfillstyle(SOLID_FILL,YELLOW);
//floodfill(100,250,RED);

//line(220,160,700,860);
 for(int i=260;i<=1000;i++)
    {
    	setcolor(YELLOW);
    	circle(100+i,250,200);
    	setfillstyle(SOLID_FILL,RED);
    	floodfill(100+i,250,YELLOW);
    	delay(0.00001);
//    	systrm("cls");
        cleardevice();
	}
	


	getch();
}
