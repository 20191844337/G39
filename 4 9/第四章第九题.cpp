// �����µھ���.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b,x1,x2,x3,x4;
	printf("����һλ������5λ��������:");
	scanf("%d",&a);
	if(a>9999)
	{
		printf("��������:\n");
		scanf("%d",&a);
	}
	if(a<=9999&&a>999)
	{
		b=4;
		x1=a%10;
		x2=(a/10)%10;
		x3=(a/100)%10;
		x4=a/1000;
		printf("����%dλ��\n",b);
		printf("�ֱ����:%d%2d%2d%2d\n",x4,x3,x2,x1);
		printf("�������:%d%d%d%d\n",x1,x2,x3,x4);
	}
	else if(a<=999&&a>99)
	{
		b=3;
		x1=a%10;
		x2=(a/10)%10;
		x3=a/100;
		printf("����%dλ��\n",b);
		printf("�ֱ����:%d%2d%2d\n",x3,x2,x1);
		printf("�������:%d%d%d\n",x1,x2,x3);
			
	}
	else if(a<=99&&a>9)
	{
		b=2;
		x1=a%10;
		x2=a/10;
		printf("����%dλ��\n",b);
		printf("�ֱ����:%d%2d\n",x2,x1);
		printf("�������:%d%d\n",x1,x2);
	}	
		
	else
	{
		b=1;
		x1=a;
		printf("����%dλ��\n",b);
		printf("�ֱ����:%d\n",x1);
		printf("�������:%d\n",x1);
	}
	return 0;
}

