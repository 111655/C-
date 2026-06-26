#include<stdio.h>
#include<conio.h>
int main()
{
	int data[13]{11,22,30,33,40,44,55,60,66,77,60,88,99};
	int low=0;
	int high=12;
	int key=11;
	int mid;
	
	while(low<=high)
	{
		mid=((low+high)/2);
		
		if(key<data[mid])
		{
			high=mid-1;
		}
		else if(key>data[mid])
		{
			low=mid+1;
		}
		else if(key==data[mid])
		{
		  printf("found loc %d",mid+1);
		  break;	
		}
		
		
	}
	if(key!=data[mid])
		{
			printf("null");
			
		}
		
		getch();
		return 0;
}
