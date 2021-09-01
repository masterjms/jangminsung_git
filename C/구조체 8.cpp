#include <stdio.h>

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[20];
};

void print_list(struct address *lp);

int main(void)
{
	printf("     name    age    tel      address\n");
	printf("-----------------------------------------\n");
	
	struct address list[5] = {
		{"fisrt", 23 , "111-111", "sanbon"},
		{"second", 24 ,"222-222", "gunpo"},
		{"thrid" ,25 , "333-333", "seoul"},
		{"forth", 26, "444-444", "ansan"},
		{"fifth", 27 , "555-555", "surisan"}
	};
	
	print_list(list);
	
	return 0;
} 

void print_list(struct address *lp)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%10s%5d%10s%10s\n", (lp+i)->name, (lp+i)->age, (lp+i)->tel, (lp+i)->addr);
	}
}
