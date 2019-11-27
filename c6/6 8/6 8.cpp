// 6 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,j,k,a[4][5],max,maxj,flag;
	printf("please input matrix:\n");
	for (i=0;i<4;i++)          
		for (j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	for (i=0;i<4;i++)
	{	
		max=a[i][0];             
		maxj=0;                   
		for (j=0;j<5;j++)       
			if (a[i][j]>max)
			{
				max=a[i][j];         
				maxj=j;              
			 }
			flag=1;                  
		for (k=0;k<4;k++)
			if (max>a[k][maxj])    
			{
				flag=0;            
				continue;
			}
			if(flag)                 
			{
				printf("a[%d][%d]=%d\n",i,maxj,max);   
				break;
			}
	}
	if(flag=0)                   
		printf("It is not exist!\n");
	return 0;
}

