// 7 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <string.h>
void input (char na[][20], int nu[]);                 
void sorts (char na[][20], int nu[]);                 
void search (char na[][20], int nu[], int x);         
int main()
{
    char name[10][20];
    int num[10], numb, i;
    input(name, num);                                 
    sorts(name, num);                                 
    for (i=0; i<10; i++){
        printf("%8s ", name[i]);
        printf("%d\n", num[i]);
    }
    printf("Input your information:");                     
    scanf("%d", &numb);
    search(name, num, numb);                          
    return 0;
}

void input (char na[][20], int nu[])
{
    int i;
    for (i=0; i<10; i++){
        printf("Input No.%d name:", i+1);
        scanf("%s", na[i]);
        printf("Input No.%d number:", i+1);
        scanf("%d", &nu[i]);
    }
}

void sorts (char na[][20], int nu[])
{
    int i, j, temp;
    char tm[20];
    for (i=0; i<10; i++)
        for (j=i+1; j<10; j++){
            if (nu[i]>nu[j]){
                temp=nu[i];
                nu[i]=nu[j];
                nu[j]=temp;
                strcpy(tm, na[i]);
                strcpy(na[i], na[j]);
                strcpy(na[j], tm);
            }
        }
}

void search (char na[][20], int nu[], int x)
{
    int low, high, mid;
    low = 0;
    high = 9;
    while (low<=high){
        mid=(low+high)/2;
        if (x>nu[mid])
            low=mid + 1;
        else if (x<nu[mid])
            high=mid-1;
        else if (x==nu[mid]){
            printf("%s\n", na[mid]);
            break;
        }
    }
    if (x!=nu[mid])
        printf("No match!\n");
}
