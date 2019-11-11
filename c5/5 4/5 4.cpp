// 5 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	int l=0,s=0,n=0,o=0;
	char c;
    while((c=getchar())!='\n')
	{
	 if((c>='A'&&c<='Z')||(c>'a'&&c<'z'))
		l++;
	 else if(c==' ') s++;
	 else if(c>='0'&&c<='9') n++;
	 else   o++;
	}
    printf("letters=%d\n",l);
	printf("space=%d\n",s);
	printf("numbers=%d\n",n);
	printf("others=%d\n",o);
	return 0;
}

