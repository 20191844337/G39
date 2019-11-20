// 第五章第七题.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{	
	double a,a1=0,b=1,b1=0,c=1,c1=0;
	for(a=1;a<=100;a++){
		a1=a1+a;	
	
	}
	do{
		b1=b1+b*b;
		b=b+1;
		if(b>50)break;
	
	
	}while(b<=50);

	while(c<=10){
		c1=c1+1/c;
		c++;

	}
	printf("%lf\n",a1+b1+c1);
	return 0;
}

