#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
		
	if(a%2==0)
		printf("¦��+");
	else
		printf("Ȧ��+");
		
	if (b%2==0)
		printf("¦��=");
	else
		printf("Ȧ��="); 
		
	if(a+b%2==0)
		printf("¦��");
	else
		printf("Ȧ��"); 
	
	return 0;
}
