// 3 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char c1,c2;
	printf("�����������ַ�c1,c2:");
		c1=getchar( );
		c2=getchar( );
	printf("��putchar���������Ϊ:");
	putchar(c1);
	putchar(c2);
	printf("\n");
	printf("��printf���������Ϊ:");
	printf("%c%c\n",c1,c2);
	return 0;
}

