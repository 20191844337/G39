// 5 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	int a,n,i,an=0,Sn=0;
	printf("please enter a,n:");
	scanf("%d,%d",&a,&n);
    for(i=1;i<=n;i++){
		an=an+a;
		Sn=Sn+an;
		a=a*10;
	}
	printf("%d\n",Sn);

	return 0;
}

