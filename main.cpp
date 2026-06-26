#include<graphics.h>









void rain(int speed,int drop_size)
{

   setcolor(LIGHTBLUE);

	for(int i=0;i<30;i++)
	{
		settextstyle(0,HORIZ_DIR,drop_size);
		outtextxy(speed+rand()%150,100+rand()%345,"| ");
	}
	setcolor(WHITE);
}
