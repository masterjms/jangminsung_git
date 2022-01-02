#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main()
{
	int i,j,horiz_dot=3,vertic_dot=3;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==vertic_dot && j==horiz_dot) printf("x");
			else printf("o");
		}
		printf("\n");
	}
	char ch = getch();
	while (ch == 'a'|| ch == 'd'|| ch == 'w'||ch == 's')
	{
		system("cls");
		switch(ch)
		{
			case 'a':
				horiz_dot--;
				break;
			case 'd':
				horiz_dot++;
				break;
			case 'w':
				vertic_dot--;
				break;
			case 's':
				vertic_dot++;
				break;
		}
		if(horiz_dot>5) horiz_dot=5;
		if(horiz_dot<1) horiz_dot=1;
		if(vertic_dot>5) vertic_dot=5;
		if(vertic_dot<1) vertic_dot=1;
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=5;j++)
			{
				if(i==vertic_dot && j==horiz_dot) printf("x");
				else printf("o");
			}
			printf("\n");
		}
		ch = getch();
	}
}
