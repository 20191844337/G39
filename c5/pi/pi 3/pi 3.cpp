// pi 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[])
{
	int sign=1;
	double pi=0.0,term=1.0,n=1.0;
	while(fabs(term)>=1e-8)
	{
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
	}
	pi=pi*4;
	printf("pi=%12.10f\n",pi);

	return 0;
}

