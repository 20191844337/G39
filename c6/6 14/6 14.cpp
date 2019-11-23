// 6 14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
int main(int argc, char* argv[])
{
	char s1[520],s2[520];
	printf("输入s1: ");
	gets(s1);
	printf("输入s2: ");
	gets(s2);
	int i,num=0;
	for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
	{
		printf("s1[%d]=%d\n",i,s1[i]);
		printf("s2[%d]=%d\n",i,s2[i]);
		num=num+s1[i]-s2[i];
		printf("\n");
	}
	printf("结果是: %d\n\n",num);
	return 0;
}

