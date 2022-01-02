#include <stdio.h>
int main()
{
	int n,m,i,j,k;
	int cnt=0;
	int a[101][101]={0};
	scanf("%d %d",&n,&m);
	int s=n,e=n;
	k=m;
	int temp=m;
	for(i=1;i<n+m;i++)
	{
		k=temp;
		for(j=e;j>=s;j--)
		{
			a[j][k]=++cnt;
			k=k+1;
		}
		if(i<n) s--;
		if(i>=m) e--;
		if(i<=n) temp--;
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
