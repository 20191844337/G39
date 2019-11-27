// 7 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	int maxgys(int x,int y);
	int mingbs(int x,int y);
	int a,b;
	printf("please input a,b:");
	scanf("%d,%d",&a,&b);
	printf("a,b的最大公约数是%d\n",maxgys(a,b));
	printf("a,b的最小公倍数是%d\n",mingbs(a,b));

	return 0;
}

int maxgys(int x,int y)
{
   while(x!=y)
	{
		if(x>y)
			x=x-y;
		else
			y=y-x;
	}
   return(x);
}
int mingbs(int x,int y)
{
	int z;
	z=x*y/maxgys(x,y);
	return(z);
}

