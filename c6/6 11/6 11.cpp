// 6 11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>



int main(int argc, char* argv[])

{

	char a[5]={'*','*','*','*','*'};

	int i,j,k;

	char space=' ';

	for(i=0;i<5;i++)

	{

		printf("\n");

		printf("	");

		for(j=0;j<i;j++)

			printf("%c",space);

			for(k=0;k<5;k++)

				printf("%c",a[k]);

	}

	printf("\n");

	return 0;

}
