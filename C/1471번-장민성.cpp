#include <stdio.h>
int main()
{
	int n,i,j,cnt=0;
	int a[101][101]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
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
	return 0;
} 
