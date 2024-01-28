#include<stdio.h>
struct student
{
	char name[25];
	int regno;
	int avg;
}s1;
int main()
{
	scanf("%s",s1.name);
	scanf("%d",&s1.regno);
	scanf("%d",&s1.avg);
	
    printf("%s",s1.name);
	printf("%d",s1.regno);
	printf("%d",s1.avg);
}
