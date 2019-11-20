// 第五章第九题.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,j,a,b,p,temp;
	for(;;){
		printf("input two number:");
		scanf("%d%d",&a,&b);
		if(a!=b)break;
	}
	if(a>b)
	{	
		temp=a;
		a=b;
		b=temp;	
	}
	
	for(i=a;i<=b;i++){
		p=0;
		for(j=1;j<i;j++){
			if(i%j==0)
				p=p+j;		
		}
		if(p==i)
		{
			printf("%d its factors are ",i);
			for(j=1;j<i;j++){
					if(i%j==0)
						printf("%-4d",j);
			}printf("\n");
		}
		
		

	}
	printf("\n");

	return 0;
}

