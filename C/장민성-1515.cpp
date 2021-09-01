#include <stdio.h> 
int main()
{
	int a[27][27]={0};
	int b[27][27]={0};
	int i,j,cnt=0;
	for(i=1;i<=25;i++)
	{
		for(j=1;j<=25;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=25;i++)
	{
		for(j=1;j<=25;j++)
		{
			cnt=0;
			if(a[i-1][j-1]==1)
				cnt++;
			if(a[i-1][j]==1)
				cnt++;
			if(a[i-1][j+1]==1)
				cnt++;				
			if(a[i][j-1]==1)
				cnt++;				
			if(a[i][j+1]==1)
				cnt++;				
			if(a[i+1][j-1]==1)
				cnt++;
			if(a[i+1][j]==1)
				cnt++;				
			if(a[i+1][j+1]==1)
				cnt++;
			if(a[i][j]==1)
			{
				if(cnt>=4 || cnt<=1) b[i][j]=0;
				else if(cnt==2 || cnt==3) b[i][j]=1;
			}
			else
			{
				if(cnt==3) b[i][j]=1;
			}									
		}
	}
	for(i=1;i<=25;i++)
	{
		for(j=1;j<=25;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
