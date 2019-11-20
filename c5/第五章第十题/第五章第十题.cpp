// 第五章第十题.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i;
	double p=0,denominator=1,numerator=2,t;
	for(i=1;i<=20;i++){
		p=p+numerator/denominator;
		t=numerator;
		numerator=denominator+numerator;
		denominator=t;
		
		

	}
	printf("%16.10f\n",p);
	return 0;

}

