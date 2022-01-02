#include <stdio.h>
int n;
void f(int a)
{
	int i;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			printf("composite");
			return;
		}
	}
	printf("prime");
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}

