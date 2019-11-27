// 7 11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	void sort(char array[]);
	char a[10];
	int i;
	printf("please enter ten characters:");
	for(i=0;i<10;i++)
	    scanf("%c",&a[i]);
	sort(a);

	return 0;
}

void sort(char array[])
{
	int i,j,t;
	for(j=0;j<9;j++){
		for(i=0;i<9-j;i++){
			if(array[i]>array[i+1])
			{
				t=array[i];
				array[i]=array[i+1];
				array[i+1]=t;
			}
		}
	}
			printf("the sorted characters:\n");
			for(i=0;i<10;i++)
				printf("%c",array[i]);
			printf("\n");
}
		

