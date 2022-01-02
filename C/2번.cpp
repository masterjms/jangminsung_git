#include <stdio.h>
int main()
{
	int a[101][101]={0};
	int n,m,i,j,cnt=0;
	scanf("%d %d",&n,&m);
	int s=n,e=n,k;
	for(i=1;i<n+m;i++)
	{
		for(j=s;j>=e;j--)
		{
			k=8-j-i;
			a[j][k]=++cnt;
		}
		if(i>=m) s--;
		if(i< n) e--;
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
