#include <stdio.h>

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[20];
};

int main(void)  //구조체 배열 
{
	struct address list[5] = {
		{"fisrt", 23 , "111-111", "sanbon"},
		{"second", 24 ,"222-222", "gunpo"},
		{"thrid" ,25 , "333-333", "seoul"},
		{"forth", 26, "444-444", "ansan"},
		{"fifth", 27 , "555-555", "surisan"}
	};
	
	printf("     name    age    tel      address\n");
	printf("-----------------------------------------\n");
	int i;
	for(i=0;i<5;i++)
	{
		printf("%10s%5d%10s%10s\n",list[i].name,list[i].age,list[i].tel,list[i].addr);
	}
	
	return 0;
} 
