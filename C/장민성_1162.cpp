#include <stdio.h>
int main()
{
	int y,m,d;
	scanf("%d %d %d",&y, &m, &d);
	int result = (y-m+d)%10;
	if(result==0)
		printf("���");
	else
		printf("�׷�����");
	
	return 0;
}
