// 7 14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	void  average1(double str[10][5]);
    void  average2(double str[10][5]);
	void  max(double str[10][5]);
	double  s(double str[10][5]);
	int i,j;
	double a[10][5];
	for(i=0;i<10;i++){
		for(j=0;j<5;j++){
			scanf("%lf",&a[i][j]);
		}
	}
	average1(a);
	average2(a);
    max(a);
	printf("s=%lf\n",s(a));

	return 0;
}

	void  average1(double str[10][5])
	{
		int i,j;
		double sum=0.0,aver;
		printf("每个学生的平均分为：");
		for(i=0;i<10;i++){
			for(j=0;j<5;j++){
				sum=sum+str[i][j];
			}
			aver=sum/5;
			printf("%lf ",aver);
			sum=0.0;
		}
		printf("\n");
	}
    void  average2(double str[10][5])
	{
		int i,j;
		double sum=0.0,aver;
		printf("每门课程的平均分为：");
		for(j=0;j<5;j++){
			for(i=0;i<10;i++){
				sum=sum+str[i][j];
			}
			aver=sum/10;
			printf("%lf ",aver);
			sum=0.0;
		}
		printf("\n");
	}
	void max(double str[10][5])
	{
		int a,b,i,j;
		double max=str[0][0];
		for(i=0;i<10;i++){
			for(j=0;j<5;j++){
				if(str[i][j]>max)
				{
					max=str[i][j];
					a=i+1;
					b=j+1;
				}
			}
		}
		printf("最高分%lf为第%d名学生第%d门课程\n",max,a,b);
	}
	double s(double str[10][5])
	{
		int i,j;
		double s0,aver,sum=0.0,sum1=0.0,sum2=0.0;
		for(i=0;i<10;i++){
			for(j=0;j<5;j++){
				sum=sum+str[i][j];
			}
			aver=sum/5;
			sum1=sum1+aver*aver;
			sum2=sum2+aver;
			sum=0.0;
		}
		s0=sum1/10-(sum2/10)*(sum2/10);
	    return(s0);
	}
	

				
				  






		






