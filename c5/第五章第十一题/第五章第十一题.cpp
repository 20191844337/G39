// �����µ�ʮһ��.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double height=100,i,sum=0,t;
	int	times;
	//for(;;){
		printf("please input times: ");
		scanf("%d",&times);
	//	if(times>1)break;
//	}
	for(i=1;i<=times;i++){
		sum=sum+height;
		t=height;
		height=height/2;			
	
	}
	printf("��%d�η����ĸ߶���%lf\n",times,t);
	printf("��%d��ʱ������%lf��\n",times,sum);
	return 0;
}

