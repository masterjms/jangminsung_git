#include <stdio.h>

 int main(void)
 {
 	int a= 10;
 	int *pi;
 	int **ppi; //a의 주소를 나타내는 포인터의 주소 = **ppi 
 	
 	pi= &a;
 	ppi=&pi;
 }
