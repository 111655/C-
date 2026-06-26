#include<graphics.h>
#include<conio.h>

int main()
{
	int height= GetSystemMetrics(SM_CYSCREEN);
	int width= GetSystemMetrics(SM_CXSCREEN);
	
	initwindow(width, height);
//	circle(200,200,50);
//	readimagefile("myphoto.jpg" , 100,100,300,300);

//	setbkcolor(RED);
//	cleardevice();
//	setcolor(YELLOW);
//	settextstyle(BOLD_FONT, HORIZ_DIR, 5);
//	outtextxy(50,50, "HELLOW WORLD");
	
	
	
	
/*	int x=100, y=100;
	while(1)
	{
		setbkcolor(RED);
		cleardevice();
		setcolor(YELLOW);
		circle(x,y,50);
		setfillstyle(SOLID_FILL, YELLOW);
		floodfill(x,y, YELLOW);
		
		setcolor(BLUE);
		rectangle(50,50,1000,1000);
		rectangle(40,40,1010,1010);
		
		if(GetAsyncKeyState(VK_RIGHT))
		
		x+=10;
		
		else if(GetAsyncKeyState(VK_LEFT))
		
		x-=10;
		
		else if(GetAsyncKeyState(VK_UP))
		
		y-=10;
		
		else if(GetAsyncKeyState(VK_DOWN))
		
		y+=10;
		
		if(GetAsyncKeyState(VK_RETURN))
		break;
		delay(10);
		
	}*/
	
	
	
	POINT cursor;
	while(1)
	{
//		cleardevice();
		GetCursorPos(& cursor);
		setbkcolor(RED);
//		cleardevice();
		setcolor(YELLOW);
		circle(cursor.x, cursor.y, 50);
		setfillstyle(SOLID_FILL, YELLOW);
		floodfill(cursor.x, cursor.y, YELLOW);
		
		if(GetAsyncKeyState(VK_LBUTTON))
		break;
		delay(50);
		
	}
	
	closegraph();
	getch();
}
