// 4 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[])
{
	int w,z;
	printf("����һ��С��1000������\n");
	scanf("%d",&w);
	if(w>1000)
    {
		printf("��������һ��С��1000������\n");
		scanf("%d",&w);
    }
    z=sqrt(w);
	printf("%d\n",z);
	return 0;
}

