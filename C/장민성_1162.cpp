#include <stdio.h>
int main()
{
	int y,m,d;
	scanf("%d %d %d",&y, &m, &d);
	int result = (y-m+d)%10;
	if(result==0)
		printf("대박");
	else
		printf("그럭저럭");
	
	return 0;
}
