#include <stdio.h>
int main()
{
	//1093
	int n,i,a;
	int d[24]={0};
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a);
		d[a]++;
	}
	for(i=1;i<=23;i++)
	{
		printf("%d",d[i]);
	}
	return 0;
	
	
	//1402
	int a;
	int n[1000]={0};
	scanf("%d",&a);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&d[i]);
	}
	for(i=,;i>=1;i--)
	{
		printf("%d",d[i]);
	}
	
	
	//1409
	int a[11];
	int i,n;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	printf("%d",a[n]);
	
	//1410
	char a[1000];
	int cnt1=0,cnt2=0;
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='(') cnt1++;
		if(a[i]==')') cnt2++;
	}
	printf("%d %d",cnt1,cnt2);
	 
	
}
