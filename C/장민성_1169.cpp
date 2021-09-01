#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int year = 2013-a;
	if(year>=2000)
		printf("%02d %d",year%100,3);
	else
		printf("%02d %d",year%100,1);
	
	return 0;
 } 
