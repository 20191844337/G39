// 6 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,j,t;
	int a[5]={-6,1,4,8,15};
	printf("please enter j:");
	scanf("%d",&j);
	for(i=0;i<5;i++){
		if(j<a[i])
		{
			t=j;
			j=a[i];
			a[i]=t;
		}
	}
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("%d",j);
	printf("\n");

	return 0;
}

