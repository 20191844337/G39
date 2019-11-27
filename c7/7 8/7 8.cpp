// 7 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
    void add(int n);
	int m;
	printf("please enter m:");
	scanf("%d",&m);
	add(m);

	return 0;
}

void add(int n)
{
	int a,b,c,d;
	a=n/1000;
	b=(n-a*1000)/100;
	c=(n-a*1000-b*100)/10;
	d=n-a*1000-b*100-c*10;
	printf("%d %d %d %d\n",a,b,c,d);

}

