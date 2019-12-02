// 7 16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
	int change(char str[]);
	char a[20];
	printf("请输入一个十六进制数：");
	gets(a);
	printf("十进制数为：%d\n",change(a));

	return 0;
}

int change(char str[])
{
	int i,k=1,n,sum=0;
	n=strlen(str);
	for(i=n-1;i>=0;i--){
		if(str[i]>='0'&&str[i]<='9')
			sum=sum+(str[i]-'0')*k;
		else if(str[i]>='A'&&str[i]<='Z')
			sum=sum+(str[i]-'A'+10);
		else if(str[i]>='a'&&str[i]<='z')
            sum=sum+(str[i]-'a'+10);
		k=k*16;
	}
	return(sum);
}






