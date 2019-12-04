// 742.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>


void change(int a[3][3])
{
	int i,j, b[3][3];
	for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
	   b[j][i]=a[i][j];
    printf("变换后:\n");
	for(i=0;i<3;i++)
     { 
	   for(j=0;j<3;j++)
	   printf("%3d ",b[i][j]);
	   printf("\n");		
   	}
}
main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
	  scanf("%d",&a[i][j]);
    printf("变换前:\n");
    for(i=0;i<3;i++)
     { 
	   for(j=0;j<3;j++)
	   printf("%3d ",a[i][j]);
	   printf("\n");		
   	}
   	change(a);
   	return 0;
}
