// student2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define N 100

struct Student
{
	char name[10];
	int number;
	double grade[10];
}stu[N];
int main(int argc, char* argv[])
{
	int m,quit_flag=0;
	char choice;
	void print_menu();
	void input(struct Student s[]);
	void sort(struct Student s[]);
	void average1(struct Student s[]);
	void average2(struct Student s[]);
	void search(struct Student s[],int m);
	void sort1(struct Student s[]);
	void sort2(struct Student s[]);
	void save();
    while(!quit_flag){
		print_menu();
		choice=getch();
		switch(choice){
		case '1':
	        input(stu);
			break;
        case '2':
	        sort(stu);
			break;
        case '3':		
	        average1(stu);
			break;
        case '4':
	        average2(stu);
			break;
		case '5':
	        printf("please enter a number:");
	        scanf("%d",&m);
	        search(stu,m);
			break;
		case '6':
		    sort1(stu);
			break;
		case '7':
            sort2(stu);
			break;
		case '8':
	        save();
			break;
		case '9':
			quit_flag=1;
			break;
		}
	}
	
	return 0;
}

void print_menu()
{
	system("cls");
	printf("1. input\n");
	printf("2. sort\n");
	printf("3. average1\n");
	printf("4. average2\n");
	printf("5. search\n");
	printf("6. sort1\n");
	printf("7. sort2\n");
	printf("8. save\n");
	printf("9. exit\n");
}

void input(struct Student s[])
{
	int index;
    printf("Please enter index of students:\n");
	scanf("%d",&index);
	printf("no:");
	scanf("%d",&s[index].number);
	printf("name:");
	scanf("%s",&s[index].name);
    printf("input the grade of the student:");
	scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&s[index].grade[0],&s[index].grade[1],&s[index].grade[2],&s[index].grade[3],&s[index].grade[4],&s[index].grade[5],&s[index].grade[6],&s[index].grade[7],&s[index].grade[8],&s[index].grade[9]);
	
}
void sort(struct Student s[])
{
	int i,j;
	struct Student t;
	for(i=0;i<N-1;i++){
		for(j=1;j<N;j++){
			if(s[i].number>s[j].number)
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
}
void average1(struct Student s[])
{
	int i,j;
	double n,sum=0.0;
	for(i=0;i<10;i++){
		printf("average score of %dth subject:",i+1);
		for(j=0;j<N;j++){
		    sum=sum+s[j].grade[i];
		}
			n=sum/100.0;
			sum=0.0;
			printf("%lf",n);
	}
}

void average2(struct Student s[])
{
	int i;
	double n,sum;
	for(i=0;i<N;i++){
	    printf("total and average score of %dth student:",i+1);
		sum=s[i].grade[0]+s[i].grade[1]+s[i].grade[2]+s[i].grade[3]+s[i].grade[4]+s[i].grade[5]+s[i].grade[6]+s[i].grade[7]+s[i].grade[8]+s[i].grade[9];
        n=sum/10;
		printf("%lf,%lf\n",sum,n);
	}
}
void search(struct Student s[],int m)
{
	int x=0,y=99,z;
    while(x<=y)
	{
	  z=(x+y)/2;
	  if(m>s[z].number)
		x=z+1;
	  else if(m<s[z].number) y=z-1;
	  else if(m==s[z].number)
	  {
			  printf("the score of the student:");
			  printf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf\n",s[z].grade[0],s[z].grade[1],s[z].grade[2],s[z].grade[3],s[z].grade[4],s[z].grade[5],s[z].grade[6],s[z].grade[7],s[z].grade[8],s[z].grade[9]);
		 
		  break;
	  }
	}
	if(m!=s[z].number)
		printf("error\n");
}
void sort1(struct Student s[])
{
	int i,j;
	double sum,f[10];
    struct Student t;
	for(i=0;i<N;i++){
		sum=s[i].grade[0]+s[i].grade[1]+s[i].grade[2]+s[i].grade[3]+s[i].grade[4]+s[i].grade[5]+s[i].grade[6]+s[i].grade[7]+s[i].grade[8]+s[i].grade[9];
		f[i]=sum;
		sum=0.0;
	}
	for(i=0;i<N-1;i++){
		for(j=0;j<N;j++){
			if(f[i]<f[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	printf("the sorted :");
	for(i=0;i<N;i++){
		printf("%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",s[i].name,s[i].number,s[i].grade[0],s[i].grade[1],s[i].grade[2],s[i].grade[3],s[i].grade[4],s[i].grade[5],s[i].grade[6],s[i].grade[7],s[i].grade[8],s[i].grade[9]);
	}
}
void sort2(struct Student s[])
{
	int i,j,k,m;
	double t;
	for(i=0;i<10;i++){
		for(j=0;j<N-1;j++){
			m=i;
			for(k=j+1;k<N;k++){
				if(s[j].grade[i]<s[k].grade[i])
				{
					m=k;
				}
				if(m!=j)
				{
				    t=s[j].grade[i];
					s[j].grade[i]=s[k].grade[i];
					s[k].grade[i]=t;
				}
			}
		}
	}
	for(i=0;i<10;i++){
        printf("the sorted grade of %dth subject:",i+1);
	    for(j=0;j<N;j++){
			printf("%lf",s[j].grade[i]);
		}
	}
}			

void save()
{
	FILE*fp;
	int i;
	if((fp=fopen("stu.dat","wb"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	for(i=0;i<N;i++){
		if(fwrite(&stu[i],sizeof(struct Student),1,fp)!=1)
		printf("file write error\n");
	}
		fclose(fp);
}









	
				
			
			  




