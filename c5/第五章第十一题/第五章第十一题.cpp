// 第五章第十一题.cpp : Defines the entry point for the console application.
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
	printf("第%d次反弹的高度是%lf\n",times,t);
	printf("第%d次时共经过%lf米\n",times,sum);
	return 0;
}

