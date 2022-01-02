#include <stdio.h>
#include <string.h>
int main()
{
	/*
	//1076
	char a;
	int i;
	scanf("%c",&a);
	for(i='a';i<=a;i++)
	{
		printf("%c",i);
	}
	
	
	//1079
	char ch;
	scanf("%c",&ch);
	while(ch !='q')
	{
		printf("%c",ch);
		scanf("%c",&ch);
	}
	
	
	//1081
	int n,m;
	int i,j;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%d %d\n",i,j);
		}
	} 
	
	//1253
	int a,b,i;
	int max=0,min=0;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		max=a;
		min=b;
	} else {
		max=b;
		min=a;
	}
	for(i=min;i<=max;i++);
	{
		printf("%d ",i);
	}

	
	//1403
	int a,i,num[100]={0};
	scanf("%d",&a);
	for(i=0; i<a;i++)
	{
		scanf("%d ",num[i]);
	}
	for(i=0;i<a;i++)
	{
		printf("%d",num[i]);
		printf("%d",num[i]);
	}
	
	
	//1990
	int i,s=0;
	char n[100];
	scanf("%s",n);
	for(i=0;i<strlen(n);i++)
	{
		s=s+(n[i]-'0');
	}
	if(s%3==0) printf("1");
	else printf("0");
	*/
	
	int i,dot=3;
	for(i=1;i<=5;i++)
	{
		if(i==dot) printf("*");
		else printf(" ");
	}
	char ch= getch();
	while(ch=='a'||ch=='d')
	{
		system("cls");
		switch(ch=='a'||ch=='d')
		{
			case 'a':
				dot--;
				break;
			case 'd':
				dot++;
				break;	
		}
		if(dot>5) dot=5;
		if(dot<1) dot=1;
		for(i=1;i<=5;i++)
		{
			if(i==dot) printf("*");
			else printf(" ");
		}
		ch=getch();
	}
	
	//1093
	int n,a[1000]={0},b;
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b);
		a[b]++;
	}
	for(i=1;i<=23;i++)
	{
		a[i]
	}	
	
	
