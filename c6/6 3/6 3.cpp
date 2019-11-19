// 6 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,j,sum,a[3][3];
	printf("please enter 9 numbers:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	sum=a[0][0]+a[1][1]+a[2][2]+a[0][2]+a[2][0];
	printf("%d\n",sum);


	return 0;
}

