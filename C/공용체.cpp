#include <stdio.h>

union student //공용체의 예약어는 union을 사용한다. 
{
	int num;
	double grade; //union함수 변수의 크기는 가장 큰 변수 바이트를 기준으로 결정된다. 
};

int main(void)
{
	union student s1 = {315}; 
	
	printf("학번 : %d\n",s1.num);
	s1.grade = 4.4;
	printf("학점 : %.1lf\n",s1.grade);
	printf("학번 : %d\n",s1.num);   // 하나의 저장공간을 사용하기 때문에 학번이 오류가 난다. 
	
	//만약 다른 멤버를 초기화 할때는 다음과 같이 직접 지정해야한다.
	// union student a = {.grade = 3.4}; 
	return 0;
}
