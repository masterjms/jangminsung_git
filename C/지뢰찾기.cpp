#include <stdio.h>
int main()
{
	int a[11][11]={0}; //끝쪽에 배열을 하나 추가해서 끝 자리를 입력했을때 오류 안나게함. 
	int i,j,r,c,cnt=0;
	int dx[8]={-1,-1,-1,0,0,1,1,1};
	int dy[8]={-1,0,1,-1,1,-1,0,1};
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&r,&c);
	if(a[r][c]==1)
	{
			printf("-1");
	}
	else
	{
		for(i=0;i<8;i++)
		{
			if(a[r+dx[i]][c+dy[i]]==1) cnt++;
		}
		/*
		if(a[r-1][c-1]==1) cnt++;
		if(a[r-1][c]==1) cnt++; 
		if(a[r-1][c+1]==1) cnt++; 
		if(a[r][c-1]==1) cnt++;  
		if(a[r][c+1]==1) cnt++; 
		if(a[r+1][c-1]==1) cnt++; 
		if(a[r+1][c]==1) cnt++;
		if(a[r+1][c+1]==1) cnt++;
		*/   
		printf("%d",cnt); 
	}
	return 0;
}
