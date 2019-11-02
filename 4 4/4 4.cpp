// 4 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b,c,t;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<b)
	{
       t=a;
	   a=b;
       b=t;
	}
	if(a<c)
	{
		t=a;
	    a=c;
		c=t;
    }
	if(b<c)
	{
		t=b;
		b=c;
		c=t;
    }
	printf("%d\n",a);
	   	
	return 0;
}

