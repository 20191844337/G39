// 710.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <stdio.h>
#include <string.h>
void lw(char s[], char t[])
{
    int i,j,n,k,m,word;
    char c[999];
    n=strlen(s);
    m=0;
    word=0;
    for(i=0,j=0,k=0;i<=n;i++)
      {
        if (s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
			{
               word=1;
               c[j++]=s[i];
            }
        else if (word==1)
			{
               if (j>k)
			   	{
                  for(m=0;m<j;m++)
				  t[m]=c[m];
                  t[m]='\0';
                  k=j;
            }
            word=0;
            j=0;
        }
    }
}               
 main()
{
    char a[999], b[999];
    gets(a);                                     
    lw(a, b);                             
    puts(b);                                      
    return 0;
}
