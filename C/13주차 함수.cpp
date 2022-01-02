#include <stdio.h>
//1526
void f()
{
	printf("hello");
}
int main()
{
	f();
	return 0;
}

//1530
char f()
{
	char ch='A';
	return ch;
}
int main()
{
	printf("%c",f());
	return 0;
}

//1532
long long int f()
{
	long long int a;
	a=-2147283649;
	return a;
}
int main()
{
	printf("%lld",f());
	return 0;
}

//1535
int n,d[100];
int f()
{
	int max=0,pos;
	for(int i=0;i<n;i++)
	{
		if(max<d[i])
		{
			max=d[i];
			pos=i+1;
		}
	}
	return pos;
}
int main()
{
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&d[i]);
	}
	printf("%d",f());
	return 0;	
 } 
