#include <stdio.h>

struct student
{
	int id;
	char name[20];
	double grade;
};

int main(void)
{
	struct student s1={315, "first", 2.4},
				   s2={316, "sec", 3.4},
				   s3={317, "third",4.3};
				   
	struct student max; //���� student ����ü�� ���������Ƿ� �ڵ����� ����Ǿ�����.
	
	max = s1;
	if(s2.grade>max.grade) max=s2;
	if(s3.grade>max.grade) max=s3;
	
	printf("�й� : %d\n",max.id);
	printf("�̸� : %s\n",max.name);
	printf("���� : %.1lf\n",max.grade);
	
	return 0;
} 
