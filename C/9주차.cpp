#include <stdio.h>
int main()
{
	/*
	//수업문제 다이아모양 
	int a[5+1][5+1]={0};
	int cnt=0;
	int i,j,s=3,e=3;
	for(i=1;i<=5;i++)
	{
		for(j=s;j<=e;j++)
		{
			a[i][j]=++cnt;
		}
		if(i<3){
		s--;
		e++;
		} 
		else {
		s++;
		e--;
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(a[i][j]!=0)
				printf("%3d",a[i][j]);
			else
				printf("   ");
		}
		printf("\n");
	}
	
	
	
	
//연습 문제 2  모례시계모양 
	int a[5+1][5+1]={0};
	int cnt=0;
	int i,j,s=1,e=5;
	for(i=1;i<=5;i++)
	{
		for(j=s;j<=e;j++)
		{
			a[i][j]=++cnt;
		}
		if(i<3){
		s++;
		e--;
		} 
		else {
		s--;
		e++;
		}
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(a[i][j]!=0)
				printf("%3d",a[i][j]);
			else
				printf("   ");
		}
		printf("\n");
	}
	*/
	
	//연습문제 3
	//4,1
	//3,2 -> 4,2 -> 5,2
	//2,3 -> 3,3 -> 4,3 -> 5,3 -> 6,3
	
	int a[8][5]={0};
	int i,j,cnt=0,s=4,e=4;
	for(i=1;i<=4;i++)
	{
		for(j=s;j<=e;j++)
		{
			a[j][i]=++cnt;
		}
		s--;e++;
	} 
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(a[i][j]!=0)
				printf("%3d",a[i][j]);
			else
				printf("   ");
		}
		printf("\n");
	}
	return 0;
}
