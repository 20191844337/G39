// 7 13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

	float p(int x,int n)
	{
		float t,t1,t2;
		if(n==0)return 1;
		else if(n==1)return x;
		else
		{
			t1=(2*n-1)*x*p(x,(n-1));
			t2=(n-1)*p(x,(n-2));
			t=(t1-t2)/n;
			return t;
		}
	}
int main()
{
	int x,n;
	printf("input two int(x and n):");
	scanf("%d%d",&x,&n);
	printf("%.2f\n",p(x,n));
	return 0;
}

