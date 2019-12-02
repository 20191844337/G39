// 7 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
double x1,x2;
int main(int argc, char* argv[])
{
	double a,b,c,disc;
	void f1(double a,double b,double c);
    void f2(double a,double b,double c);
    void f3(double a,double b,double c);

	scanf("%lf,%lf,%lf",&a,&b,&c);
	printf("The question");
    if(fabs(a)<=1e-6)
		printf("is not a quadratic\n");
	else
	{
		disc=b*b-4*a*c;
		if(fabs(disc)<=1e-6)
			f1(a,b,c);
		else if(disc>1e-6) f2(a,b,c);
		else  f3(a,b,c);
	}
	
	return 0;
}
void f1(double a,double b,double c)
{
	printf("has two equal roots:%8.4f\n",-b/(2*a));
}
void f2(double a,double b,double c)
{
	double disc=b*b-4*a*c;
    x1=(-b+sqrt(disc))/(2*a);
	x2=(-b-sqrt(disc))/(2*a);
	printf("has distinct real roots:%8.4fand%8.4f\n",x1,x2);
}
void f3(double a,double b,double c)
{
	double disc=b*b-4*a*c;
	double realpart,imagepart;
	realpart=-b/(2*a);
	imagepart=sqrt(-disc)/(2*a);
	printf("has complex roots:\n");
    printf("%8.4f+%8.4fi\n",realpart,imagepart);
	printf("%8.4f-%8.4fi\n",realpart,imagepart);
}


