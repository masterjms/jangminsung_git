#include <stdio.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision robot);

int main(void)
{f
	struct vision robot;
	
	printf("sight : ");
	scanf("%lf%lf",&(robot.left),&(robot.right));
	robot = exchange(robot);  //교환 함수 호출 , 구조체 변수 robot의 값이 함수의 매개 변수로 복사된다. 
	printf("changed sight : %.1lf %.1lf", robot.left,robot.right);
	
	return 0;
}

struct vision exchange(struct vision robot)
{
	double temp;
	temp=robot.left;
	robot.left=robot.right;
	robot.right=temp;
	
	return robot;
 } 
