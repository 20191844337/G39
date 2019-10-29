// prime.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <time.h>
#include <math.h>


 	int		is_prime(int n);

	int main()
    {
		int		n, m;
		int		total = 1;
    	long	t0, t1;


 		m = 1000000;
	
    	t0 = clock();

 	for(n=3;n<=m;n+=2) {
		if (m%1000000==0)
			printf("%d%%\r", n*100/m);
					if ( is_prime(n) ) {
						
						total ++;
			//printf("\n%-4d %d", n,total);
				}
	}

 	t1 = clock();


 		printf("\nTotal prime numbers between 2 and %d: %d\nTime used: %10.2fseconds\n", m, total, (t1 - t0)/(float)CLOCKS_PER_SEC);


 		return 0;
	}


	int		is_prime(int n)
    {
        	int		i;
			int		flag;


 		if(n%2) {
				flag = 1;
					for(i=3;i<=sqrt(n);i+=2) {
						if (n%i==0) {
				flag = 0;
				break;
						}
					}
		} else
		flag = 0;

		return flag;
	}




 	/*
	1、	找到素数的个数为78498
	2、 所用时间为19.71s
 	*/ 
