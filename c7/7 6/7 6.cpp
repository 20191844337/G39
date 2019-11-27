// 7 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	void connect(char a[],char b[]);
	char a[20],b[20];
	gets(a);
	gets(b);
	connect(a,b);

	return 0;
}

void connect(char a[],char b[])
{
	char c[40];
	int i,j;
	for(i=0;a[i]!='\0';i++)
		c[i]=a[i];
	for(j=0;b[j]!='\0';j++)
		c[i+j]=b[j];
	c[i+j]='\0';
	puts(c);
}

