#include <stdio.h>
#include <windows.h> //화면 지우기 위한 라이브러리 
#include <conio.h>
int main()
{
	printf("helloworld");
	char ch = getch();
	system("cls");
	printf("the word is changed!!");
	return 0;
}
