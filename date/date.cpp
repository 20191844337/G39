// date.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
int main(int argc, char* argv[])
{
	int y,m,d,sum,leap;
	printf("please input y,m,d\n");
	for(;;){
	scanf("%d,%d,%d",&y,&m,&d);
	switch(m)
	{
	  case 1: sum=0;  break;
      case 2: sum=31; break;
      case 3: sum=59; break;
	  case 4: sum=90; break;
	  case 5: sum=120;break;
	  case 6: sum=151;break;
	  case 7: sum=181;break;
	  case 8: sum=212;break;
	  case 9: sum=243;break;
	  case 10:sum=273;break;
	  case 11:sum=304;break;
	  case 12:sum=334;break;//统计本月前的总天数
	}
    sum=sum+d; //该日期在一年中的天数等于本月前的总天数与输入的天数之和
	if(y%400==0||(y%4==0&&y%100!=0))
		leap=1;
	else
		leap=0;
	if(leap==1&&m>2)
		sum++; //若为闰年且大于二月，则增加一天
	if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d>31))
		printf("please reput:\n"); //若为1，3，5，7，8，10，12月且日期大于31，则不合法
       else	if((m==4||m==6||m==9||m==11)&&(d>30))
	        	printf("please reput:\n");//若为4，6，9，11月且日期大于30，则不合法
	   else if((leap==0&&m==2&&d>28)||(leap==1&&m==2&&d>29))
		        printf("please reput:\n");//若为2月，闰年时日期大于29或非闰年时大于28，则不合法
	   else if(m>12)
		        printf("please reput:\n");//若月份大于12，则不合法
	   else     break;
	}
	printf("It is the %dth day.\n",sum);
	return 0;
}

