// pi 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[])
{
	double pi=1.0,term=1.0/3.0,a=1.0,b=3.0;
	while(fabs(term)>=1e-8)
	{
		pi=pi+term;
		a=a+1;
		b=b+2;
		term=term*a/b;
	
	}
	pi=pi*2;
	printf("pi=%12.10f\n",pi);

	return 0;
}

