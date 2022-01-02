#include <stdio.h>
#include <string.h>
int main()
{
	char a[20];
	int n[10]={0};
	int i,j;
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		n[a[i]-'0']++;
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d ",i);
		if(n[i]==0) printf("-");
		
		for(j=1;j<=n[i];j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
