#include <stdio.h>

struct score{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score yuni = {90, 80, 70};  //����ü ����� �ʱ�ȭ 
	struct score *ps = &yuni;
	
	printf("kor  : %d\n",(*ps).kor); //����ü ������ 
	printf("eng  : %d\n",ps->eng); //�� (*ps).kor�� ���� ����ü �������̴�. -> �����ڸ� ����Ѵ�. 
	printf("math : %d\n",ps->math);
	
	return 0;
}
