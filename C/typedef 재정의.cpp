#include <stdio.h>

struct student
{
	int num;
	double grade;
};
typedef struct student STUDENT; //typedef ����ü�̸�_ ���ڷ����̸� ->�� ���·� �������Ѵ�. 
void print_data(STUDENT *ps);

int main(void)
{
	STUDENT s1 = {315, 4.2};
	
	print_data(&s1);
	
	return 0;
}

void print_data(STUDENT *ps)
{
	printf("�й� : %d\n", ps->num);
	printf("���� : %.1lf\n", ps->grade);
}
//�Ʒ��� ���� ������� ������ �ϴ� ����� �ִ�. 
/*
typedef struct
{
	int num;
	double grade;
} STUDENT;
*/ 
