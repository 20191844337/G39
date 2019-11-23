// 6 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	char s1[100],s2[100];
	int i;
	printf("ÊäÈës1×Ö·û´®:\n");
	gets(s1);
	printf("ÊäÈës2×Ö·û´®:\n");
	gets(s2);
	for(i=0;i<100;i++){
	s1[i]=s2[i];
	if(s2[i]=='\0')break;
	}
	printf("s1:%s\n",s1);
	printf("s2:%s\n",s2);
}

