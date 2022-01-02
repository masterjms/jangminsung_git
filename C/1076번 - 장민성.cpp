#include <stdio.h>
int main()
{
	char ch;
	scanf("%c", &ch);
	for(int i = 'a';i<=ch;i++)
	{
		printf("%c ",i);
	}
	return 0;
}
