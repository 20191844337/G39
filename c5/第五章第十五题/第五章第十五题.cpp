// 第五章第十五题.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{
	float a=-10,b=10,mid;
	for(;;){
		mid=(a+b)/2;
		if(fabs(a-b)<1e-6)break;
		if((2*mid*mid*mid-4*mid*mid+3*mid-6)<1e-6)
			a=mid;
		else b=mid;
		
	}

	printf("%f\n",a);
	return 0;
}

