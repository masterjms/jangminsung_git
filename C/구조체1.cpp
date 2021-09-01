#include <stdio.h>
#pragma pack(1) //바이트 얼라이먼트를 1로 설정하면 패딩 바이트를 하지않고 구조체 전체 크기에 맞춰 할당한다.

struct student  //구조체 선언. 변수 선언 전에 구조체 선언을 해야한다. 
{
	int num;
	double grade; //이때 구조체 student형 변수 s1에는 4+8바이튼인 12바이트의 저장공간이 할당된다. 
}; //구조체 선언에는 세미콜론을 붙인다. 

int main()
{
	struct student s1; //구조체 선언 후 student형의 변수 선언. 
	
	s1.num = 2;
	s1.grade = 4.5;
	printf("%d\n",s1.num);
	printf("%.1lf",s1.grade);
	
	return 0;
}
 
 
