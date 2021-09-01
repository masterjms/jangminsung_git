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
				   
	struct student max; //위의 student 구조체로 묶여있으므로 자동으로 복사되어진다.
	
	max = s1;
	if(s2.grade>max.grade) max=s2;
	if(s3.grade>max.grade) max=s3;
	
	printf("학번 : %d\n",max.id);
	printf("이름 : %s\n",max.name);
	printf("학점 : %.1lf\n",max.grade);
	
	return 0;
} 
