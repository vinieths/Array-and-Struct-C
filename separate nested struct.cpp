#include<stdio.h>
struct person
{
	char name[50];
	int accno;
	int age;

}p;
struct bank
{
	int balance;
	char bname[50];
	struct person p;
};
int main()
{
	struct bank b;
	
	scanf("%d",&b.balance);
	scanf("%d",&b.p.age);
	
	printf("%d",b.balance);
	printf("%d",b.p.age);
}
