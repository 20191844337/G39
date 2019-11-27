// 6 9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	int i,n;
	printf("数组中数据如下: \n");
	for(i=0;i<15;i++)
		printf("%5d",a[i]);
	printf("\n");
	printf("你想要查找的数字为: ");
	scanf("%d",&n);
	if((a[14]<=n)&(n<=a[0]))
	{
		if (n==a[7])
			i=8;
		else if(n<a[7])
		{
			if(n==a[11])
				i=12;
		    else if(n<a[11])
			{
				if(n==a[13])
					i=14;
				else if(n<a[13])
					i=15;
				else i=13;
			}
		    else
			{
				if(n==a[9])
					i=10;
		        else if(n<a[9])
					i=11;
				else i=9;
			}
		 }
		 else
		 {
			if(n==a[3])
			i=4;
			else if(n<a[3])
			{
				if(n==a[5])
					i=6;
				else if(n<a[5])
					i=7;
				else i=5;
			}
		    else
			{
				if(n==a[1])
					i=2;
				else if(n<a[1])
					i=3;
				else i=1;
			}
		 }
		 printf("\n");
		 printf("%d是此数组中第%d个元素的值",n,i);
		 printf("\n");
	}
	else printf("data error\n");
	return 0;

}

