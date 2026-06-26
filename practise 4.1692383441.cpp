#include<graphics.h>




int main()
{
	int width= GetSystemMetrics(SM_CXSCREEN);
	int height= GetSystemMetrics(SM_CYSCREEN);
	initwindow(width, height);
	
	for(int i=0;i<=300;i++)
	{
		int s=4;
		cleardevice();
		line(0,600,1650,600);			// road
		line(10 + i+s, 600,30 + i,550);   // f leg
		line(50 + i+s,600,30 + i,550);	// s leg
		line(30 + i,550,30 + i,500);	// body
		line(10 + i,540,30 + i,500);    // f hand
		line(50 + i,540,30 + i,500);	// s hand
		circle(30 + i,470,30);			// head
		
		delay(10);
	
	}
	for(int i=0;i<=300;i++)
	{
		cleardevice();
		line(0,600,1650,600);			// road
		line(10 + i, 600,30 + i,550);   // f leg
		line(50 + i,600,30 + i,550);	// s leg
		line(30 + i,550,30 + i,500);	// body
		line(10 + i,540,30 + i,500);    // f hand
		line(50 + i,540,30 + i,500);	// s hand
		circle(30 + i,470,30);			// head
		
		delay(10);
	
	}
	
	
//	closegraph();
	getch();
}
