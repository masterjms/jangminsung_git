#include <stdio.h>
//�Ű����� : int get_sum(int x, int y)�� ���� �ȿ� ������ �ִ� ��츦 �Ű� ������� �Ѵ�. 
//void �� ���� ���� : ��ȯ�� �ʿ� ���� ��� ! 
int get_num(void); // �Ű������� ���� �Լ��� ��� void�� ���־� ���. �Ƚ��൵ �Ǳ���. 
 
int main(void)
{
	int result;
	 result = get_num();
	 printf("��ȯ�� : %d\n",result);
	 return 0;	
}

int get_num(void) //�Ű������� ���� �Լ��� �ַ� scanf �Է� �Լ��� ���� �� ����Ѵ�. 
{
	int num;
	printf("����Է� : ");
	scanf("%d",&num);
	return num; 
}
