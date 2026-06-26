#include<graphics.h>

int main()
{
	int height=GetSystemMetrics(SM_CYSCREEN);
	int width=GetSystemMetrics(SM_CXSCREEN);
	
	initwindow(width,height);
	return 0;
}
