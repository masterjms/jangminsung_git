#include <stdio.h>
int main()
{
	int n,i,j;
	int a[101][101];
	int cnt=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		for(j=1;j<=n;j++)
		{
			a[i][j]=++cnt;
		}
		else
		for(j=n;j>=1;j--)
		{
			a[i][j]=++cnt;
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}

	//1472 10ÁÖÂ÷ 
	int n,m,i,j,k=0;
	int cnt=0;
	int a[101][101]={0}; 
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		k=k+1;
		if(k%2==0){
			for(j=1;j<=m;j++)
			{	
				a[i][j]=++cnt;
			}
		} else {
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
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	
	//ºø±ÝÀ¸·Î ¹è¿­ÇÏ ±â 
	int i,j,a[101][101]={0};
	int n,m,s=1,e=1,k,cnt=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<n+m;i++) //ºø±ÝÀÇ ¹Ýº¹È½¼ö 
	{
		for(j=s;j>=e;j--)
		{
			k=i+1-j;
			a[j][k]=++cnt;
			
		}
		if(i<n) s++;
		if(i>=m) e++;
	}
	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	
	// ºø±ÝÃ¤¿ì±â 
	int i,j,a[101][101]={0};
	int n,m,s=1,e=1,k,cnt=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<n+m;i++) //ºø±ÝÀÇ ¹Ýº¹È½¼ö 
	{
		for(j=s;j>=e;j--)
		{
			k=i+1-j;
			a[j][k]=++cnt;
			
		}
		if(i<=m) s++;
		if(i>n) e++;
	}
	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	//ÇÔ¼ö  
	
	
	
	
	
