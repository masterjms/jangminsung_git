#include <stdio.h>
int main()
{
	int a[5][8]={0};
	int i,j,cnt=17;
	int s=4,e=4;
	for(i=1;i<=4;i++)
	{
		for(j=s;j<=e;j++)
		{
			a[i][j]=--cnt;
		}
		s--;
		e++;
	}
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(a[i][j]==0)
				printf("   ");
			else
				printf("%3d",a[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
