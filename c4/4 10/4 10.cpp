// 4 10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
    float I,w;

          scanf("%f",&I);

		   if  (I<=100000) w=0.1*I;
		   else if  (I<=200000) w=10000+0.075*(I-100000);
		   else if  (I<=400000) w=10000+7500+0.05*(I-200000);
		   else if  (I<=600000) w=10000+7500+5000+0.03*(I-400000);
		   else if  (I<=1000000)w=10000+7500+5000+3000+0.015*(I-600000);
		   else if  (I>1000000) w=10000+7500+5000+3000+1500+0.01*(I-1000000);
	printf("%f\n",w);
 

	return 0;
}

