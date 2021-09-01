#include <stdio.h>

struct student
{
	int num;
	double grade;
};
typedef struct student STUDENT; //typedef 구조체이름_ 새자료형이름 ->이 형태로 재정의한다. 
void print_data(STUDENT *ps);

int main(void)
{
	STUDENT s1 = {315, 4.2};
	
	print_data(&s1);
	
	return 0;
}

void print_data(STUDENT *ps)
{
	printf("학번 : %d\n", ps->num);
	printf("학점 : %.1lf\n", ps->grade);
}
//아래와 같은 방식으로 재정의 하는 방법도 있다. 
/*
typedef struct
{
	int num;
	double grade;
} STUDENT;
*/ 
