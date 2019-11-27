// daffodil.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <time.h>

int main(int argc, char* argv[])
{
	// 4 digits daffodil number
	int		i,j,temp;
	int		bits, powsum,count;			// bits判断数字位数
	int		n[10],pow_n[10][10];	// 数字按位拆分后的结果, n[1]对应个位，pow_n[i][j]对应数字的i的j次方
	int		t1,t2;
	count = 0;
	for(j=1;j<10;j++) 
		pow_n[0][j] = 0;

	for(i=1;i<10;i++) {
		pow_n[i][0] = 1;
		for(j=1;j<10;j++) {
			pow_n[i][j] = 1;
			for(temp=1;temp<=j;temp++)
				pow_n[i][j] =pow_n[i][j]* i;
		}
	}

	
	t1 = time(0);
	for(i=100;i<=999999999;i++) {
		if (i%100000==0)
			printf("%u%% %d\r",(int)( i*100.0/999999999), time(0)-t1 );
		if(i>=100&&i<1000) bits=3;
		else if(i>=1000&&i<10000) bits=4;
		else if(i>=10000&&i<100000) bits=5;
		else if(i>=100000&&i<1000000) bits=6;
		else if(i>=1000000&&i<10000000) bits=7;
		else if(i>=10000000&&i<100000000) bits=8;
		else if(i>=100000000&&i<1000000000) bits=9;

		temp = i;
		powsum = 0;
		for(j=1;j<=bits;j++) {
			n[j] = temp%10;
			temp =temp/10;
			powsum =powsum+pow_n[n[j]][bits];
		}
		
		if (i== powsum) {
			printf("%d\n", i);
			count ++;
		}
	}

	t2 = time(0);

	printf("\nTotal daffodil numbers found:%d\nTotal time used:%d\n",count, t2 - t1);
	return 0;
}


