#include <stdio.h>
int main()
{
	/*
	int n,m,i,j,k,s=1,e=1;
	int cnt=0;
	int a[101][101]={0};
	scanf("%d %d",&n,&m);
	for(i=1;i<n+m;i++)
	{
		for(j=s;j<=e;j++)
		{
			k=i+1-j;
			a[j][k]=++cnt;
		}
		if(i>=m) s++;
		if(i<n) e++;
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	*/
	
	//1478
	int n,m,i,j,k,s=1,e=1;
	int cnt=0;
	int a[101][101]={0};
	scanf("%d %d",&n,&m);
	k=m;
	int temp=m;
	for(i=1;i<n+m;i++)
	{
		k=temp;
		for(j=s;j<=e;j++)
		{
			k++;
			a[j][k]=++cnt;
		}
		if(i>=m) s++;
		if(i<n) e++;
		if(i<m) temp--;
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
