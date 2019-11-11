// 4 10 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h> 

int main(int argc, char* argv[])
{
	int c;
    float I,w;
          printf("please input I:");
          scanf("%f",&I);
		  c=I/100000;
		  if(c>10) c=10;
		  switch(c)
		  {

		  case 0 :  w=0.1*I;break;
		  case 1 :  w=10000+0.075*(I-100000);break;
          case 2 :
		  case 3 :  w=10000+7500+0.05*(I-200000);break;
          case 4 :
		  case 5 :  w=10000+7500+5000+0.03*(I-400000);break;
          case 6 :
          case 7 :
          case 8 :
		  case 9 :  w=10000+7500+5000+3000+0.015*(I-600000);
		  default:  w=10000+7500+5000+3000+1500+0.01*(I-1000000);
		  }
	printf("%f\n",w);
	return 0;
}

