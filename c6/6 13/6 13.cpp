// 6 13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
main()
{
	char a[10],b[10],c[20];
	int i,j;
	printf("���������ַ���: \n");
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
		c[i]=a[i];
	for(j=0;b[j]!='\0';j++)
		c[i+j]=b[j];
	c[i+j]='\0';
	printf("���ַ������Ӻ���ַ���Ϊ: %s\n",c);
}
