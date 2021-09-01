#include <stdio.h>

enum season {SPRING, SUMMER, FALL, WINTER};

int main(void)
{
	enum season ss;
	char *pc = NULL;
	
	ss = SUMMER;
	switch (ss)
	{
		case SPRING:
			pc = "inline"; break;
		case SUMMER:
			pc = "swim"; break;
		case FALL:
			pc = "trip"; break;
		case WINTER:
			pc = "ski"; break;	
	}
	printf("leisure : %s\n", pc);
	
	return 0;
}
