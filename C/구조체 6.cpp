#include <stdio.h>

struct score{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score yuni = {90, 80, 70};  //구조체 선언과 초기화 
	struct score *ps = &yuni;
	
	printf("kor  : %d\n",(*ps).kor); //구조체 포인터 
	printf("eng  : %d\n",ps->eng); //위 (*ps).kor과 같은 구조체 포인터이다. -> 연산자를 사용한다. 
	printf("math : %d\n",ps->math);
	
	return 0;
}
