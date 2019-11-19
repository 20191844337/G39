// 6 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[])
{
	int i,j,k;
	int a[100],b[100];
	for(i=1;i<=99;i++){
		a[i]=i+1;
	 for(j=1;j<sqrt(a[i]);j++){
		b[j]=j+1;
		if(a[i]%b[j]==0) break;
	 }
	 if(a[j]>=sqrt(a[i])+1)
	 {
		printf("%3d ",a[i]);
		k++;
    	if(k%10==0)
    	printf("\n");
	 }
	}
	printf("\n");

	return 0;
}

