#include <stdio.h>
#pragma pack(1) //����Ʈ ����̸�Ʈ�� 1�� �����ϸ� �е� ����Ʈ�� �����ʰ� ����ü ��ü ũ�⿡ ���� �Ҵ��Ѵ�.

struct student  //����ü ����. ���� ���� ���� ����ü ������ �ؾ��Ѵ�. 
{
	int num;
	double grade; //�̶� ����ü student�� ���� s1���� 4+8����ư�� 12����Ʈ�� ��������� �Ҵ�ȴ�. 
}; //����ü ���𿡴� �����ݷ��� ���δ�. 

int main()
{
	struct student s1; //����ü ���� �� student���� ���� ����. 
	
	s1.num = 2;
	s1.grade = 4.5;
	printf("%d\n",s1.num);
	printf("%.1lf",s1.grade);
	
	return 0;
}
 
 
