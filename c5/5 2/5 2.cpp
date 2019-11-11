// 5 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	int sign=1,count=0;
	double pi=0.0,n=1.0,term=1.0;
	while(fabs(term)>=1e-8)
	{
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
		count++;
	}
	pi=pi*4;
	printf("%10.8f\n",pi);
	printf("%d\n",count);
	return 0;
}
//当"fabs(term)>=1e-6时，循环500000次；
//当"fabs(term)>=1e-8时，循环50000000次

