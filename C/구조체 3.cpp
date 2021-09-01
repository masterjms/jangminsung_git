#include <stdio.h>

struct profile   //student형 변수 구조체 속의 구조체 profile형 구조체를 넣기 위해서는 student형을 선언하기 전에 먼저 선언해주어야한다. 
{
	int age;
	double height;
};

struct student
{
	struct profile pf;
	int id;
	double grade;
};

int main(void)
{
	struct student yuni;
	
	yuni.pf.age = 17;
	yuni.pf.height = 160.3;
	yuni.id = 315;
	yuni.grade = 4.3;
	
	printf("나이 : %d\n",yuni.pf.age);
	printf("키   : %.1lf\n",yuni.pf.height);
	printf("학번 : %d\n",yuni.id);
	printf("학점 : %.1lf\n",yuni.grade);
	
	return 0;
}
