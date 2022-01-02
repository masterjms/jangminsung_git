#include <stdio.h>
int main()
{
	int a,b;
	int max=0, min=0;
	scanf("%d %d",&a,&b);
	if(a>b){
		max = a;
		min = b;
	} else {
		min = a;
		max = b;
	}
	
	for(int i=min;i<=max;i++)
	{
		printf("%d ",i);
	}
	return 0;
}
