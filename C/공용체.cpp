#include <stdio.h>

union student //����ü�� ������ union�� ����Ѵ�. 
{
	int num;
	double grade; //union�Լ� ������ ũ��� ���� ū ���� ����Ʈ�� �������� �����ȴ�. 
};

int main(void)
{
	union student s1 = {315}; 
	
	printf("�й� : %d\n",s1.num);
	s1.grade = 4.4;
	printf("���� : %.1lf\n",s1.grade);
	printf("�й� : %d\n",s1.num);   // �ϳ��� ��������� ����ϱ� ������ �й��� ������ ����. 
	
	//���� �ٸ� ����� �ʱ�ȭ �Ҷ��� ������ ���� ���� �����ؾ��Ѵ�.
	// union student a = {.grade = 3.4}; 
	return 0;
}
