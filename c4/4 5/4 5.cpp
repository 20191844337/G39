// 4 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include <math.h>
int main(int argc, char* argv[])
{
	int n,m;
	printf("输入一个小于1000的数\n");
	scanf("%d",&n);
	if(n<1000); 
	{
		printf("该数不小于1000请重新输入\n");
		scanf("%d",&n);
	} 
	m=sqrt(n);
	printf("%d\n",m);
	return 0;
}
