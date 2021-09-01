#include <stdio.h>
int main()
{
	int h,s1,s2,i;
	scanf("%d %d %d",&h,&s1,&s2);
	for(i=h;i<90;i=i+5)
	{
		s1=s1+1;	
	}
	if(s1>s2)
		printf("win");
	else if(s1=s2)
		printf("same");
	else
		printf("lose");
	return 0;
}
