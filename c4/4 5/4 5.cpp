// 4 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include <math.h>
int main(int argc, char* argv[])
{
	int n,m;
	printf("����һ��С��1000����\n");
	scanf("%d",&n);
	if(n<1000); 
	{
		printf("������С��1000����������\n");
		scanf("%d",&n);
	} 
	m=sqrt(n);
	printf("%d\n",m);
	return 0;
}
