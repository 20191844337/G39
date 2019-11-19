// pi 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[])
{
	double pi=1.0,term=4.0/3.0,a1=1.0,a2=3.0,b=2.0;
	while(fabs(term)>=(1e-8)+1)
	{
		pi=pi*term;
		a1=a1+2;
		a2=a2+2;
		b=b+2;
		term=(b*b)/(a1*a2);
	}
	pi=pi*2;
	printf("pi=%12.10f\n",pi);

	return 0;
}

