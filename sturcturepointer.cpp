#include<stdio.h>
struct bank
{
	char name[25];
	int balance;
};
int main()
{
	struct bank b;
	struct bank *ptr;
	scanf("%d",&b.balance);
	scanf("%s",b.name);
	ptr=&b;
	printf("%d",ptr->balance);
	printf("%s",ptr->name);
}
