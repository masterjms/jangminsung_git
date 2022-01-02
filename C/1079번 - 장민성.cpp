#include <stdio.h>
int main()
{
	char ch;
	scanf("%c ",&ch);
	while(ch != 'q')
	{
		printf("%c\n",ch);
		scanf("%c ",&ch);
	}
		printf("%c",ch);
	return 0;
} 
