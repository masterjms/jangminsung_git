#include <stdio.h>
int main()
{
	int a[101][101]={0};
	int i,j,n,cnt=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
		{
			a[i][j]=++cnt;
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
