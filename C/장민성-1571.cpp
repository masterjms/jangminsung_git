#include <stdio.h>	
int n, k, d[1010];
int upper_bound(int x)
{
	int i,res=0,cnt=0;
	{
		for(i=1;i<=n;i++)
		{	
			if(x<d[i])
				{
					res=i;
					cnt=1;
					break;
				}	
		}
		if(cnt==0)
			res=n+1;
	}
	return res;
}
int main()
{
   scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", upper_bound(k));
}
