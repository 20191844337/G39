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
	  case 12:sum=334;break;//ͳ�Ʊ���ǰ��������
	}
    sum=sum+d; //��������һ���е��������ڱ���ǰ�������������������֮��
	if(y%400==0||(y%4==0&&y%100!=0))
		leap=1;
	else
		leap=0;
	if(leap==1&&m>2)
		sum++; //��Ϊ�����Ҵ��ڶ��£�������һ��
	if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d>31))
		printf("please reput:\n"); //��Ϊ1��3��5��7��8��10��12�������ڴ���31���򲻺Ϸ�
       else	if((m==4||m==6||m==9||m==11)&&(d>30))
	        	printf("please reput:\n");//��Ϊ4��6��9��11�������ڴ���30���򲻺Ϸ�
	   else if((leap==0&&m==2&&d>28)||(leap==1&&m==2&&d>29))
		        printf("please reput:\n");//��Ϊ2�£�����ʱ���ڴ���29�������ʱ����28���򲻺Ϸ�
	   else if(m>12)
		        printf("please reput:\n");//���·ݴ���12���򲻺Ϸ�
	   else     break;
	}
	printf("It is the %dth day.\n",sum);
	return 0;
}

