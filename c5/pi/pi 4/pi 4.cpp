// pi 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[])
{
	double pi=0.0,term=1.0,n=1.0;
	while(fabs(term)>=1e-8)
	{
		pi=pi+term;
		n=n+2;
		term=1/(n*n);
	}
	pi=sqrt(pi*8);
	printf("%12.10f\n",pi);

	return 0;
}

