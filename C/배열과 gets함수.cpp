#include <stdio.h>

int main(void)
{
	char input[1001]; //1000���� ���� ����. �������� \0 �� ����. 
	gets(input); // ����ڿ��� ���ڿ��� �Է¹޴´�. 
	int count = 0;
	while(input[count] != '\0')
	{
		count++;
	}
	printf("length of size : %d",count);
	return 0;
 } 
 //���� hello �� �Է��ϰ� �ȴٸ� input�迭�� 0,1,2,3,4�� ����� �Էµǰ� 5��° �濡�� \0 �� �ԷµǾ� ���� ��.
 //while�� ���ǿ��� \0 �� ������ �Լ��� Ż���϶� �Ͽ����Ƿ� �Ѿ�� �ȴ�. 
