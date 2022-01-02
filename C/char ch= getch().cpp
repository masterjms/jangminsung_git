#include <conio.h>
#include <stdio.h> //글자하나만 입력받는 방법 엔터를 치지않고 글자 하나만 받을 때 사용 
int main()
{
	char ch = getch();
	switch (ch){
		case 'a':
			printf("ayo\n");
			break;
		case 'b':
			printf("byo\n");
			break;
		case 'c':
			printf("cyo\n");
			break;
		default :
			printf("elseyo");
			break;
	}
 } 
