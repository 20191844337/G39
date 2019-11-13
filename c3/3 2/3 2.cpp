// 3 2.cpp : Defines the entry point for the console application.
//计算一元二次方程的根

#include "stdafx.h"
#include <math.h>
int main()
{
	double a,b,c,x1,x2,realpart,imagepart,disc;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	printf("The question");
	if(fabs(a)<=1e-6)
		printf("is not a quadratic\n");
      else
	{
		disc=b*b-4*a*c;
		if(fabs(disc)<=1e-6)
			printf("has two equal roots:%8.4f\n",-b/(2*a));
		else
			if(disc>1e-6)
			{
				x1=(-b+sqrt(disc))/(2*a);
				x2=(-b-sqrt(disc))/(2*a);
				printf("has distinct real roots:%8.4fand%8.4f\n",x1,x2);
			}
			else
			{
				realpart=-b/(2*a);
				imagepart=sqrt(-disc)/(2*a);
				printf("has complex roots:\n");
                printf("%8.4f+%8.4fi\n",realpart,imagepart);
				printf("%8.4f-%8.4fi\n",realpart,imagepart);
			}
	}
	return 0;


  
}

