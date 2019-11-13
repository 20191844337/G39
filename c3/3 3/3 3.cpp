// 3 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
int main()
{
	int i,j,r=0,c=0,max;
	int a[3][4]={{1,2,3,4},{6,7,8,9},{-10,10,5,-2}};
	max=a[0][0];
	for(i=0;i<=2;i++)
		for(j=0;j<=3;j++)
			if(a[i][j]>max)
			{max=a[i][j];
			r=i;
            c=j;
			}
   printf("max=%d\nr=%d\nc=%d\n",max,r,c);
	return 0;
}

