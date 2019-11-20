// 第五章第六题.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double s=0,t=1,a,b,n;
	scanf("%lf%lf",&a,&b);
	for(n=a;n<=b;n++){
		t=t*n;
		s=s+t;
	
	}
	printf("%lf\n",s);
	return 0;
}

