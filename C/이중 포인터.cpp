#include <stdio.h>

 int main(void)
 {
 	int a= 10;
 	int *pi;
 	int **ppi; //a�� �ּҸ� ��Ÿ���� �������� �ּ� = **ppi 
 	
 	pi= &a;
 	ppi=&pi;
 }
