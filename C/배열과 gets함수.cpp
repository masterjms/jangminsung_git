#include <stdio.h>

int main(void)
{
	char input[1001]; //1000개의 문자 저장. 마지막은 \0 이 있음. 
	gets(input); // 사용자에게 문자열을 입력받는다. 
	int count = 0;
	while(input[count] != '\0')
	{
		count++;
	}
	printf("length of size : %d",count);
	return 0;
 } 
 //만약 hello 를 입력하게 된다면 input배열의 0,1,2,3,4번 방까지 입력되고 5번째 방에는 \0 이 입력되어 있을 것.
 //while문 조건에서 \0 을 만나면 함수를 탈출하라 하였으므로 넘어가게 된다. 
