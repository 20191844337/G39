// 3 7.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

int main()
{
	float h,r,l,s,sq,vq,vz;
	float pi=3.14159;
	printf("请输入圆半径r,圆柱高h:");
	scanf("%f,%f",&r,&h);	           //要求输入圆半径和圆柱高h
	l=2*pi*r;				           //计算圆周长l
	s=pi*r*r;				           //计算圆面积s
	sq=4*pi*r*r;				       //计算圆球表面积sq
	vq=4.0/3.0*pi*r*r*r;		       //计算圆球的体积vq
	vz=pi*r*r*h;				       //计算圆柱的体积vz
	printf("圆周长为:     l=%6.2f\n",l);
	printf("圆面积为:	  s=%6.2f\n",s);
	printf("圆球表面积为: sq=%6.2f\n",sq);
	printf("圆球体积为:   vq=%6.2f\n",vq);
	printf("圆柱体积为:   vz=%6.2f\n",vz);
	return 0;
}

