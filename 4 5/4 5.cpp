// 4 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[])
{
	int w,z;
	printf("输入一个小于1000的正数\n");
	scanf("%d",&w);
	if(w>1000)
    {
		printf("重新输入一个小于1000的正数\n");
		scanf("%d",&w);
    }
    z=sqrt(w);
	printf("%d\n",z);
	return 0;
}

