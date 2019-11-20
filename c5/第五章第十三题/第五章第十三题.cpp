// 第五章第十三题.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{
	double a,xn=1,xn1;
	for(;;){
		printf("input a:" );
		scanf("%lf",&a);
		if(a>=0)break;	
	}
	
	for(;;){	
		xn1=(xn+a/xn)/2;
	
		if(fabs(xn1-xn)<1e-5)break;
		xn=xn1;
	}
	printf("%.5f\n",xn1);
	return 0;

	
	
}

