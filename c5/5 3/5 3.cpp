// 5 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	int m,n,t;
	printf("please enter m,n:");
	scanf("%d,%d",&m,&n);
	t=m*n;
	while(m!=n)
	{
		if(m>n)
			m=m-n;
		else
			n=n-m;
	}
	t=t/m;
	printf("���Լ���ǣ�%d\n",m);
	printf("��С�������ǣ�%d\n",t);
	return 0;
}

