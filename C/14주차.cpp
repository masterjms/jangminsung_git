#include <stdio.h>

//1558
long long int n;
long long int f(long long int n)
{
	long long int ans=0;
	while(n!=0)
	{
		ans=ans*10+n%10;
		n=n/10;
	}
	return ans;
}
int main()
{
	scanf("%lld",&n);
	printf("%lld\n",f(n));
}

//1564

int a,b;
gcd(int x, int y)
{
	int i;
	for(i=x;i>=1;i--)
	{
		if(x%1==0 && y%i==0)
		return i;
	}
}
int main()
{
	scanf("%d%d",&a,&b);
	printf("%d\n",gcd(a,b));
}

//1581 포인터 
// int *pa;  pa = &a, *pa=10 

void myswap(int *a,int *b)
{
	if(*a >*b)
	{
		int temp =*a;
		*a=*b;
		*b=temp;
	}
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	myswap(&a,&b);
	printf("%d %d",a,b);
}

//1610

char a[100];
char mysubstr(char *str, int start, int count)
{
	return str[start];
}
int main()
{
	int s,e,i;
	scanf("%s",a);
	scanf("%d %d",&s,&e);
	for(i=s;i<s+e;i++)
	printf("%c",mysubstr(a,i,1));
	return 0;
}

//1567

int  n,a,b,d[1010];

long long int subsetsum(int a, int b)
{
	long long int sum=0;
	for(int i=a;i<=b;i++)
	{
		sum=sum+d[i];
	}
	return sum;
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&d[i]);
	}
	scanf("%d%d",&a,&b);
	printf("%lld",subsetsum(a,b));
}

//지역변수로 d를 선언안하고 main 안에 선언한 경우 
int  n,a,b;

long long int subsetsum(int a, int b,int d[])
{
	long long int sum=0;
	for(int i=a;i<=b;i++)
	{
		sum=sum+d[i];
	}
	return sum;
}
int main()
{
	int d[1010]={0}; 
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&d[i]);
	}
	scanf("%d%d",&a,&b);
	printf("%lld",subsetsum(a,b,d)); //d만 적어주면 d배열의 첫번째 방을 의미한다. 
}

//재귀함수 
void fruit(void);
int main()
{
  	fruit();
	return 0;
}
void fruit(void)
{
	printf("apple\n");
	fruit();
}

//재귀함수 예시 
void fruit(int count)
{
	printf("apple\n");
	if(count==3) return;
	fruit(count+1);
	printf("%d\n",count);
} 
int main()
{
 	fruit(1);
 	return 0;
}

//ex)
void f(int n)
{
	if(n==0) return;
	f(n-1);
	printf("%d\n",n);
}
int main()
{
	int n;
	scanf("%d",&n);
	f(n);
	return 0;
}

//팩토리얼 
#include <stdio.h>

void f(int n)
{
	if(n==0) return 1;
	return n*f(n-1);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
	return 0;
}


