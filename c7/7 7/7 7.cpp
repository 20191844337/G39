// 7 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	void copy(char a[],char b[]);
	char a[20],b[20];
	gets(a);
	copy(a,b);

	return 0;
}

void copy(char a[],char b[])
{
	int i,j=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			b[j]=a[i];
			j++;
        	b[j]='\0';
		}
	}
   puts(b);

	
}


