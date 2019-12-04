// 7 12.cpp : Defines the entry point for the console application.
//用牛顿迭代法求根

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	double solut(double a,double b,double c,double d);
	double a,b,c,d;
	printf("input a,b,c,d:");
	scanf("%f,%f,%f,%f",&a,&b,&c,&d);
	printf("x=%10.7f\n",solut(a,b,c,d));

	return 0;
}

double solut(double a,double b,double c,double d)
{
	double x=1,x0,f,f1;
	do
	{
		x0=x;
		f=((a*x0+b)*x0+c)*x0+d;
		f1=(3*a*x0+2*b)*x0+c;
		x=x0-f/f1;
	}
	while(fabs(x-x0)>=1e-3);
	return(x);
}



