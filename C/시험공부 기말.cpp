#include <stdio.h>
#include <string.h>
//7,9�� 
int main()
{

	
	char ch[101];
		/*
	char a[4]="abc" ���� 0���濡 a�� ������� ����. 
	//strlen ���� 
	char name[20]={0};
	scanf("%s",&name);
	printf("%d",strlen(name));
	
	//strcmp ������ ?
	char a[20],b[20];
	scanf("%s",a);
	scnaf("%s",b);
	if(strcmp(a,b)==0) printf("same");
	else printf("different"); //strcmp(a,b)���� a��b�� ������ 0�̴�.
	
	//strcat ���Ķ� 
	char name[20];
	printf("write your name : ");
	scanf("%s",name);
	strcat(name,"loser"); //�� ������ ""�� ������Ѵ�. 
	printf("%s\n",name); 
	
	char a[20];
	scanf("%s",a);
	for(int i=1;i<=strlen(a);i++)
	{
		printf("%c\n",a[i]);
	}
	
	char a[20];
	scanf("%s",a);
	for(int i<=strlen(a);i>=1;i--)
	{
		printf("%c\n",a[i]);
	}
	
	char a[20];
	scanf("%s",a);
	for(int i=1;i<=strlen(a);i++)
	{
		if( a[i]>='A' && a[i]<='Z') printf("%c",a[i]+32);
		else if(a[i]>='a' && a[i]<='z') printf("%c",a[i]-32);
	}
	
	char a[10];
	scanf("%s",a);
	for(int i=1;i<=strlen(a);i++)
	{
		printf("'%c'\n",a[i]);
	}
	
	char a[30];
	fgets(a,sizeof(a),stdin) //sizeof�� �ڷ����� ũ�⸦ ���Ѵ�.
	printf("%s",a);
	
	char a[20];
	scanf("%s",a);
	if(strcmp(a,"love")==0) printf("i love you");
	
	char a[101];
	fgets(a,sizeof(a),stdin);
	for(int i=1;i<=strlen(a);i++)
	{
		if(a[i]!=' ') printf("%c",a[i]);
		else continue; //�������� 
	}
	
	char ch[101];
	scanf("%s",a);
	if(ch[0]=='i' && ch[1]=='o' && ch[2]=='v') printf("i love you");
	
	char ch[21];
	scanf("%s",ch);
	for(int i=0;i<strlen(ch);i++)
	{
		printf("%c",ch[i]+2);
	}
		printf("\n");
	for(int i=0;i<strlen(ch);i++)
	{
		printf("%c",(ch[i]+7)%80+48);
	}
	
	char a[100001];
	int cnt1=0,cnt2=0;
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='(') cnt1++; //cnt1=cnt1+1;
		else if(a[i]==')') cnt2++;
	}
	printf("%d,%d",cnt1,cnt2);
	*/
	
	int c=0,cc=0;
	scanf("%s",ch);
	printf("%s",ch);
	for(int i=0;i<strlen(ch);i++)
	{
		if(ch[i]=='c' || ch[i]=='C') c++;
		if((ch[i]=='c'&&ch[i+1]=='C') || (ch[i]=='C'&&ch[i+1]=='C') || (ch[i]=='C'&&ch[i+1]=='c')) cc++;
	}
	printf("%d\n%d",c,cc);
	
	return 0;
}
