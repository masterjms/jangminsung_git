#include <stdio.h>
//매개변수 : int get_sum(int x, int y)와 같이 안에 변수가 있는 경우를 매개 변수라고 한다. 
//void 을 쓰는 이유 : 반환이 필요 없는 경우 ! 
int get_num(void); // 매개변수가 없는 함수의 경우 void를 써주어 명시. 안써줘도 되긴함. 
 
int main(void)
{
	int result;
	 result = get_num();
	 printf("반환값 : %d\n",result);
	 return 0;	
}

int get_num(void) //매개변수가 없는 함수는 주로 scanf 입력 함수가 있을 때 사용한다. 
{
	int num;
	printf("양수입력 : ");
	scanf("%d",&num);
	return num; 
}
