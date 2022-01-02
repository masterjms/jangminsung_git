#include <conio.h>
#include <stdio.h>
#include <windows.h>
int main()
{
	int i,dot=3; //dot = 별의 위치 
	for(i=1;i<=5;i++)
	{
		if(dot == i) {
			printf("*");
		}
		else {
			printf(" ");
		}
	}
	
	char ch = getch(); 
	while (ch=='a'|| ch =='d')
	{
		system("cls");
		switch(ch)
		{
			case 'a':
				dot--;
				break;
			case 'd':
				dot++;
				break;
		}
		if(dot>5) dot=5;
		if(dot<1) dot=1;
		for(i=1;i<=5;i++)
		{
			if(i==dot) printf("*");
			else printf(" ");
		}
		ch = getch();
	}
	return 0;
}
