#include <stdio.h>
int main()
{
	int n,m,i,j,cnt=0,k=0;
	int a[101][101]={0};
	scanf("%d %d",&n,&m);
	for(i=n;i>=1;i--)
	{
		k=k+1;
		if(k%2!=0)
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
	}
	return 0;
}
