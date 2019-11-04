// 第四章第九题.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b,x1,x2,x3,x4;
	printf("输入一位不多于5位的正整数:");
	scanf("%d",&a);
	if(a>9999)
	{
		printf("重新输入:\n");
		scanf("%d",&a);
	}
	if(a<=9999&&a>999)
	{
		b=4;
		x1=a%10;
		x2=(a/10)%10;
		x3=(a/100)%10;
		x4=a/1000;
		printf("它是%d位数\n",b);
		printf("分别输出:%d%2d%2d%2d\n",x4,x3,x2,x1);
		printf("逆序输出:%d%d%d%d\n",x1,x2,x3,x4);
	}
	else if(a<=999&&a>99)
	{
		b=3;
		x1=a%10;
		x2=(a/10)%10;
		x3=a/100;
		printf("它是%d位数\n",b);
		printf("分别输出:%d%2d%2d\n",x3,x2,x1);
		printf("逆序输出:%d%d%d\n",x1,x2,x3);
			
	}
	else if(a<=99&&a>9)
	{
		b=2;
		x1=a%10;
		x2=a/10;
		printf("它是%d位数\n",b);
		printf("分别输出:%d%2d\n",x2,x1);
		printf("逆序输出:%d%d\n",x1,x2);
	}	
		
	else
	{
		b=1;
		x1=a;
		printf("它是%d位数\n",b);
		printf("分别输出:%d\n",x1);
		printf("逆序输出:%d\n",x1);
	}
	return 0;
}

