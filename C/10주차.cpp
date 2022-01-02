#include <stdio.h>
int main()
{
	//1468
	int n,i,j;
	int cnt=0;
	int a[101][101]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			for(j=1;j<=n;j++)
			{
				a[i][j]=++cnt;
			}
		}
		else 
		{
			for(j=n;j>=1;j--)
			{
				a[i][j]=++cnt;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	//1478
	int n,i,j;
	int cnt=0;
	int a[101][101]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			for(j=1;j<=n;j++)
			{
				a[j][i]=++cnt;
			}
		}
		else 
		{
			for(j=n;j>=1;j--)
			{
				a[j][i]=++cnt;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	//1472
	int n,m,i,j,k=0;
	int cnt=0;
	int a[101][101]={0};
	scanf("%d %d",&n,&m);
	for(i=n;i>=1;i--)
	{
		k=k+1;
		if(k%2==0)
		{
			for(j=1;j<=m;j++)
			{
				a[i][j]=++cnt;
			}
		}
		else
		{
			for(j=m;j>=1;j--)
			{
				a[i][j]=++cnt;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	return 0;
}
