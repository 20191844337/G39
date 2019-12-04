// shy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h> 

int main(int argc, char* argv[])
{	
	void prime(int x);
	int n;
	printf("please input a number\n");
	scanf("%d",&n);
	prime(n);
	



	return 0;
}
void prime(int x){
	int i;
	for(i=2;i<x;i++){
		if(x%i==0){
			printf("yes");
			return;
		}
	}
	printf("no");
	

		
	
			
		
	
}