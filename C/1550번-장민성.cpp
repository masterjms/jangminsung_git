#include <stdio.h>

long long int n;
int sqrt(long long int a)
{
	long long int i;
	for(i=0;i<=a;i++)
	{
		if(i*i==a)
		{
			return i;
		}
		else if(i*i >a)
		{
			return i-1;
		}
	}
}
int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}
