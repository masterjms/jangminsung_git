#include <stdio.h>
#include <string.h>
int main()
{
	//1403
	
	int i;
	char a[21];
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		printf("%c",a[i]+2);
	}
	printf("\n");
	return 0;


	/*
	//1990
	int i,s=0;
	char n[501];
	scanf("%s",n);
	for(i=0;i<strlen(n);i++)
	{
		s+=(n[i]-'0');
	}
	if(s%3==0)
	printf("%d",1);
	else
	printf("%d",0);
	*/
}
