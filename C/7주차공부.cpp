#include <stdio.h>
#include <string.h>
int main()
{
	/*
	//1420
	int n,i,j;
	char name[50][10]; //2���� �迭 50���� �̸��� 10ĭ�� ��� 
	int score[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",name[i]);
		scanf("%d",&score[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++) //������������ �񱳽�Ű�� ���� 
		{
			if(score[i]<score[j])
			{
				int temp=score[i];
				score[i]=score[j];
				score[j]=temp; //score i�� score j ���� �ٲ� 
				char t[10];
				strcpy(t,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],t); //�� �� ���� �̸��� ��ġ�� �� �� 
			}
		}
	}
	printf("%s",name[2]);
	return 0;
	/*
����
�������� ���� 1->10 
44 22 55 11 88
55 22 44 11 88


	//������ �迭 
	int i,j,a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(i=0;i<3;i++)
	{
		for(j=0lj<3;j++)
		{
			printf("%d ",a[i],[j]);
		}
		printf("\n");
	 } 
	
	
	int  i,j,a[3][3]={0};
	int x,y;
	scanf("%d %d",&x,&y);
	while(x<3 && y<3)
	{
	a[x][y]=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	scanf("%d %d",&x,&y);
	}
	return 0;
	
	int i,j,a[5][5]={0};
	int cnt=1;
	for(i=0;i<5;i++)
	{
		for(j=0;i<5;j++)
		{
			a[i][j]=cnt++;
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;i<5;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n")l
	}
	return 0;
	
	
	int i,j,a[5][5]={0};
	int cnt=1;
	for(i=0;i<5;i++ )
	{
		for(j=0;j<=i;j++)
		{
			a[i][j]=cnt++;
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			 printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	
	
	int i,j,a[5][5]={0};
	int cnt=1;
	for(i=0;i<5;i++)
	{
		for(j=4-i;j<5;j++)
		{
			a[i][j]=cnt++;
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=4-i;j<5;j++)
		{
			if(a[i][j]==0)
			{
				printf("   ");
			} else {
			printf("%3d",a[i][j]);
			}
			
		}
		printf("\n");
	}
	
	
	int i,j,a[5][5]={0};
	int cnt=1;
	for(i=0;i<5;i++ )
	{
		for(j=i;j>=0;j--)
		{
			a[i][j]=cnt++;
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==0)
				printf("   ");
			else
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	*/
	
	int i,j,a[6][6]={0};
	int cnt=1;
	for(i=1;i<=5;i++ )
	{
		if(i%2==1)
		{
			for(j=1;j<=5;j++)
			{
				a[i][j]=cnt++;
			}
		}
		else
		{
			for(j=5;j>=1;j--)
			{
				a[i][j]=cnt++;
			}
		}
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			 printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}

