// 3 7.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

int main()
{
	float h,r,l,s,sq,vq,vz;
	float pi=3.14159;
	printf("������Բ�뾶r,Բ����h:");
	scanf("%f,%f",&r,&h);	           //Ҫ������Բ�뾶��Բ����h
	l=2*pi*r;				           //����Բ�ܳ�l
	s=pi*r*r;				           //����Բ���s
	sq=4*pi*r*r;				       //����Բ������sq
	vq=4.0/3.0*pi*r*r*r;		       //����Բ������vq
	vz=pi*r*r*h;				       //����Բ�������vz
	printf("Բ�ܳ�Ϊ:     l=%6.2f\n",l);
	printf("Բ���Ϊ:	  s=%6.2f\n",s);
	printf("Բ������Ϊ: sq=%6.2f\n",sq);
	printf("Բ�����Ϊ:   vq=%6.2f\n",vq);
	printf("Բ�����Ϊ:   vz=%6.2f\n",vz);
	return 0;
}

