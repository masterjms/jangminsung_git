#include <stdio.h>
int main()
{
	int a[101][101]={0};
	int n,i,j,cnt=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
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
	return 0;
} 
