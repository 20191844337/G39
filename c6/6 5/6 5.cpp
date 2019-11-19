// 6 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,a[5];
	printf("please enrer 5 numbers:");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=4;i>=0;i--)
		printf("%d ",a[i]);
	printf("\n");

	return 0;
}

