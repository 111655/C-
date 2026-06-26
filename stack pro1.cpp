#include<stdio.h>
#include<conio.h>
int main()
{
	int beg=0, end=11,mid,item,loc=1; 
	mid=int ((beg+end)/2);
	int data[12]{11,22,30,33,40,44,55,60,77,80,88,99};
	item=95;
	while(beg<=end)
	{
	mid=int((beg+end)/2);
	
	if(item<data[mid])
	{
		end=mid-1;
	}
	else 
//	if(item>data[mid])
	{
		beg=mid+1;
	}
	
	
	
	if(item==data[mid])
	{
		loc=mid+1;
		printf("found loc %d",loc);
		break;
	}
//	else
//	{
//		loc= 0;
////		break;
//	}
//	if(item==data[center])
//	{
//	break;
//}
}
if (item!=data[mid])
{
	printf("null");
}
	
//	printf("%d",data[12]);
	getch();
	return 0;

}
