#include <stdio.h>

	long long int n, m;
	long long int f(long long int n, long long int m)
	{
		long long int ans;
		if(n>m) ans=n-m;
		else ans=m-n;
		return ans;
	}
	
	int main()
	{
		scanf("%lld%lld", &n, &m);
		printf("%lld\n", f(n, m));
		return 0;
 	} 
