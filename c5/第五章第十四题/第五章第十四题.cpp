// 第五章第十四题.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{
	float a=1.5,a1;
	for(;;){
		a1=a-(2*a*a*a-4*a*a+3*a-6)/(6*a*a-8*a+3);
		if(fabs(a1-a)<1e-5)break;
		a=a1;	
	}
	printf("%f\n",a1);
	return 0;

}

