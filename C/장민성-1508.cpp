#include <stdio.h>
int main()
{
	int a[21][21]={0};
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i][1]);
	}
	for(i=2;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			a[j][i]=a[j][i-1]-a[j-1][i-1];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
