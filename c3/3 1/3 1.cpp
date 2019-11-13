// 3 1.cpp : Defines the entry point for the console application.
//²ÂÊý³ÌÐò

#include "stdafx.h"
#include <conio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
	int i,a,count=0;
	long c0,c1;
	srand((unsigned)time(0));
	   i=rand();
	   c0=clock();
       for(;;){
		   scanf("%d",&a);
		   if(a<0)
			   break;
		   count++;
		   if(a<i) 
			   printf("small\n");
		   else if(a>i) printf("big\n");
		   else{
			   printf("success\n");
		   }
	   }
	   c1=clock();
	   printf("%d\t%d\n",count,(c1-c0)/(float)CLOCKS_PER_SEC);


	return 0;
}


