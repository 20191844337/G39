// 3 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char c1,c2;
	printf("请输入两个字符c1,c2:");
		c1=getchar( );
		c2=getchar( );
	printf("用putchar语句输出结果为:");
	putchar(c1);
	putchar(c2);
	printf("\n");
	printf("用printf语句输出结果为:");
	printf("%c%c\n",c1,c2);
	return 0;
}

