#include <stdio.h>
int main()
{
	int a,w,h;
	for(int i=1;i<=3;i++)
	{
		scanf("%d",&a);
		if(a==1){
			scanf("%d %d",&w,&h);
			printf("�ﰢ�� ���� : %.1f\n",(float)w*h/2);
		}
		else {
			scanf("%d %d",&w,&h);
			printf("�簢�� ���� : %d\n",w*h);
		}
	}
	return 0;
}
