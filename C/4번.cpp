#include <stdio.h>
int n;
int mini(int d[])
{
	int min=2147483647,pos=0;
	for(int i=1;i<=n;i++)
	{
		if(min>d[i])
		{
			min=d[i];
			pos=i;
		}
	}
	return pos;
}

int main()
{
	int a, b, d[1010];
 	scanf("%d", &n);
 	for(int i=1; i<=n; i++)
 	scanf("%d", &d[i]);
 	printf("%d\n", mini(d));
}

