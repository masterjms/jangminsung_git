#include <conio.h>
#include <stdio.h> //�����ϳ��� �Է¹޴� ��� ���͸� ġ���ʰ� ���� �ϳ��� ���� �� ��� 
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
