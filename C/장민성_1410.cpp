#include <stdio.h>
#include <string.h> 
int main()
{
	char a[100000];
	int l_cnt=0,r_cnt=0;
	scanf("%s",a);
	int cnt= strlen(a);
	for(int i=0;i<cnt;i++)
	{
		if(a[i]=='(') l_cnt++;
		if(a[i]==')') r_cnt++;
	}
	printf("%d %d",l_cnt,r_cnt);
	return 0;
}
