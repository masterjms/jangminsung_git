#include <stdio.h>
int main()
{
	//연습문제 90도 돌리기 
	//5,1 -> 4,1 -> 3,1 -> 2,1 -> 1,1
	//5,2 -> 4,2 -> 3,2 -> ...
	//a[j][i] 
	int a[6][6]={0};
	int i,j,cnt=0;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{
			a[i][j]=++cnt;
		}
	}
	
	for(i=1;i<=5;i++)
	{
		for(j=5;j<=1;j--)
		{
			if(a[j][i]!=0) printf("%3d",a[j][i]);
			else printf("   ");
		}
		printf("\n");
	}
	return 0;
}
