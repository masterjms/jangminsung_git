#include <stdio.h>
int main()
{
	//���� �� ���� 
	/*int k,m,e;
	scanf("%d %d %d",&k, &m,&e);
	int total = k+m+e;
	printf("���� : %d, ��� : %.1f", total, (double)total/3);
	��
	float a;
	//1012
	scanf("%f",&a);
	printf("%.3f",a); 
	
	//1012��	
	int y,m,d;
	scanf("%d %d %d",&y, &m, &d);
	printf("%d.%02d.%02d",y,m,d);
	
	//1076�� 
	int h,m,s;
	scanf("%d:%d:%d", &h, &m, &s);
	printf("%d",m);
	
	//1020��
	int a,b;
	scanf("%d-%d",&a,&b);
	printf("%d%d",a,b);
	
	//�� ����
	int a,b,c;
	printf("input number : ");
	scanf("%d",&a);
	if(a==1)
	{
		scanf("%d %d",&b, &c);
		printf("%d",(b*c)/2);
	} 
	else
	{
		scanf("%d %d",&b,&c);
		printf("%d",b*c);
	}
	
	//�� ����
	int a;
	scanf("%d",&a);
	if(a>0)
	{
		printf("�ڿ����Ӵ�");
	}
	else if(a<0)
	{
		printf("���� ���� ");
	}
	else
	{
		printf("0�Ӵ� ");
	}
	
	// �� ����
	int a;
	scanf("%d",&a);
	if(a%4==0 && a%100!=0 || a%400==0)
	printf("�����̴�");
	else
	printf("���� �ƴϴ� ") ;
	
	//1065��
	int a=0, b=0, c=0;
	scanf("%d %d %d",&a, &b, &c);
		if(a%2==0) printf("%d\n",a);
		if(b%2==0) printf("%d\n",b);
		if(c%2==0) printf("%d\n",c);
	
	//1067��
	int a;
	scanf("%d",&a);
	{
		if(a>=0) printf("plus\n");
		else printf("minus\n");
	} 
	{
		if(a%2==0) printf("even");
		else printf("odd");
	}

	//1154��
	int a,b;
	scanf("%d %d",&a, &b);
	if(a>b) printf("%d",a-b);
	else printf("%d",b-a); 
	
	//1159��
	int q;
	scanf("%d",&q);
	if((q>=50 && q<=70)|| q%6==0)
	printf("win");
	else
	printf("lose"); 
	
	//1163��
	int y,m,d;
	scanf("%d %d %d",&y,&m,&d);
	int result = y+m+d;
	if((result/100)%2==0)
	printf("���");
	else printf("nope"); 
	
	//1164��
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>170 && b>170 && c>170)
	printf("pass");
	else
	printf("crash");
	
	//1167��
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if((a>b && a<c) || (a>c && a<b))
	printf("%d",a);
	else if((b>a && b<c) || (b>c && b<a))
	printf("%d",b);
	else
	printf("%d",c);
	
	//1171��
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d%02d%03d",a,b,c);

	//1172��
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<=b && a<=c)
		printf("%d",a);
	else if(b<=a && b<=c)
		printf("%d",b);
	else
		printf("%d",c);
		
	if(a>=b && a<=c || a>=c && a<=b)
		printf("%d",a);
	else if(b>=a && b<=c || b>=c && b<=a)
		printf("%d",b);
	else
		printf("%d",c);
	
	if(a<=b && a>=c)
		printf("%d",a);
	else if(b<=a && b<=c)
		printf("%d",b);
	else
		printf("%d",c);
	
	//1173
	int h,m;
	scanf("%d %d",&h,&m);
	if(h!=0)
		{
			if(m>=30)
			printf("%d  %d",h,m-30);
			else
			printf("%d  %d",h-1,m+30);
		}
	else
		{
			if(m>=30)
			printf("%d  %d",h,m-30);
			else
			printf("%d  %d",23,m+30);
		}
	
	//�ܹ���
	int a;
	scanf("%d",&a);
	swich(a)
		case 0:
		printf("rkdnml");
		break;
		case 1:
		printf("qkdnl");
		break;
		case 2:
		printf("qh");
		break;
	
	//�� ����
	int a,r;
	scanf("%d",&a);
	switch(a%2)
	{
		case 0:
		printf("even");
		break;
		case 1:
		printf("odd");
	}
	
	//�ܹ���
	// 12�� 1���� ������, 2���� ȭ����...... 
	int a;
	scanf("%d",&a);
	switch(a%7)
	{
		case 0:
		printf("sunday"); 
		break;
		case 1:
		printf("monday");
		break;
		case 2:
		printf("tuesday");
		break;
		case 3:
		printf("wednesday");
		break;
		case 4:
		printf("thursday");
		break;
		case 5:
		printf("friday");
		break;
		case 6:
		printf("saturday"):
	}
	
	//�ܹ���
	int a;
	scanf("%d",&a);
	switch(a)
		{
			case 1:
			printf("jajang");
			break;
			case 2:
			printf("gun, tang");
			break;
			case 3:
			printf("tang");
			break;
			case 4:
			printf("jambong");
			break;
			default:
			printf("no food");
		}
	}
	
	//�ܹ���
	char cod;
	scanf("%c",&cod);
	switch(cod)
		{
			case 'a':
			printf("a");
			break;
			case 'b':
			printf("b");
			break;
			default:
			printf("non");
		}
	
	//�ܹ���
	int score;
	scanf("%d",&score);
	switch(score/10)
		{
			case 9:
			printf("A");
			break;
			case 8:
			printf("B");
			break;
			case 7:
			printf("C");
			break;
			default:
			printf("F");
		 } 
	
	//1161��
	int a=0,b=0;
	scanf("%d %d",&a,&b);
	{
	if(a%2==0)
	printf("¦��+");
	else
	printf("Ȧ��+");
	if(b%2==0)
	printf("¦��=");
	else
	printf("Ȧ��=");
	}
	if(a+b%2==0)
	printf("¦��");
	else
	printf("Ȧ��"); 
	
	//1230��
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>170 && b>170 && c>170)
		printf("PASS");
	else if(a<=170)
		printf("CRASH %d",a);
	else if(b<=170)
		printf("CRASH %d",b);
	else
		printf("CRASH %d",c);
	
	//1169�� 
	int a;
	scanf("%d",&a);
	if(a>12)
	printf("%2d %d",(2013-a)%100,1);
	else	
	printf("%1d %d",(2013-a)%100,3); //0�� ��� ���°�? 
	
	//1070��
	int m;
	scanf("%d",&m);
	switch(m)
	{
		case 12:
		case 1:
		case 2:
		printf("winter");
		break;
		case 3:
		case 4:
		case 5:
		printf("spring");
		break;
		default:
		printf("fall");
	}
	
	//1203��
	int b;
	scanf("%d",&b);
	if(b<=10)
	printf("nomal");
	else if(b<=20)
	printf("off");
	else
	printf("holy"); 
	
	//1204��
	int a;
	scanf("%d",&a);
	if(a<=10 || a>=14)
	switch(a%10)
	{
		case 1:
		printf("%dst",a);
		break;
		case 2:
		printf("%dnd",a);
		break;
		case 3:
		printf("%drd",a);
		break;
		default:
		printf("%dth",a);
	}
	else
	printf("%dth",a);
	
	//1206��
	int a,b;
	scanf("%d %d",&a,&b);
	if(b%a==0 && a<=b)
	printf("%d*%d=%d",a,b/a,b);
	else if(a%b==0 && a>=b)
	printf("%d*%d=%d",b,a/b,a);
	else
	printf("none");  
	
	//1207��
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int result = a+b+c+d;
	switch(result)
	{
		case 0:
		printf("mo");
		break;
		case 1:
		printf("do");
		break;
		case 2:
		printf("gea");
		break;
		case 3:
		printf("gul");
		break;
		case 4:
		printf("yut");	
	} 
	
	//1210��
	int a,b;
	scanf("%d %d",&a,&b);
	switch(a)
	{
		case 1:
		a=400;
		break;
		case 2:
		a=340;
		break;
		case 3:
		a=170;
		break;
		case 4:
		a=100;
	}
	switch(b)
	{
		case 1:
		b=400;
		break;
		case 2:
		b=340;
		break;
		case 3:
		b=170;
		break;
		case 4:
		b=100;
	}
	if(a+b>=500)
	printf("angry");
	else
	printf("nop");

	//1212��
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c)
	{
		if(a<c+b) printf("yes");
		else printf("no");
	}
	else if(b>=a && b>=c)
	{
		if(b<a+c) printf("yes");
		else printf("no");
	}
	else if(c>=a && c>=b)
	{
		if(c<a+b) printf("yes");
		else printf("no");
	}
	else  printf("no");
	
	//1214��
	int y,m;
	scanf("%d %d",&y,&m);
	if(y%400==0 || y%4==0 && y%100!=0)
	printf("%d %d",y,29);
	else
	{
	switch(m)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("%d %d",y,31);
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		printf("%d %d",y,30);
		break;
		default:
		printf("%d %d",y,28);
		}
	}
	//�������� 
	int i;
	for(i=1;i<=9;i++)
	printf("2X%d\n",i);
	
	//��������
	int i,a;
	for(i=1;i<=9;i++)
	{	
		a=i+1;
		printf("%d\n",a);
	 } 
	
	//��������
	int a,i,sum=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=sum+i;	
	}
	printf("1~%d : %d",a,sum);
	
	//��������
	int i;
	for(i=1;i<=10;i++)
	printf("%d\n",i); 
	
	//1165��
	int h,sc,i;
	scanf("%d %d",&h,&sc);
	for(i=h;i<=90;i=i+5)
	{
		sc=sc+1;
	}
	printf("%d",sc);
	
	//1072��
	int num,i;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	printf("%d\n",i);
	
	//1076��
	char ch;
	int i;
	scanf("%c",&ch);
	for(i=97;i<=ch;i++)
	printf("%c ",i);
	
	//1078��
	int a,i,sum=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i%2==0)
		sum=sum+i;
		else
		continue;	
	} 
	printf("%d",sum);
	
	//1083��
	int a,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i%3==0)
		printf("X ");
		else
		printf("%d ",i);
	} 
	
	//1088�� 
	int a,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i%3==0)
			continue; //�ٽ� �� for������ �����϶�. 
		else
			printf("%d ",i);
	}
	
	//1260��
	int a,b,i;
	int sum=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%3==0)
		sum=sum+i;
		else
		continue;
	}
	printf("%d",sum);
	
	int i,a,b;
	int sum1=0,sum2=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%2!=0)
		sum1=sum1+i;
		else
		sum2=sum2+i;
	}
	printf("%d",sum1-sum2);
	*/
	int i,sum=0;
	for(i=1;i<50;i=i+10)
	{
		if(i%2==0)
		sum=sum+1;
		else
		sum=sum+2;
	}
	printf("%d",sum);
	return 0;
}
	
