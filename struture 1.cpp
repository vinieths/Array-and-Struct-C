#include<stdio.h>
struct member
{
	int accountNo;
	char accountHol[50];
	float balance;
	float depamt;
	float withamt;

};
int main()
{
	struct member s1;
	scanf("%d",&s1.accountNo);
	scanf("%s",s1.accountHol);
	scanf("%f",&s1.balance);
	scanf("%f",&s1.depamt);
	scanf("%f",&s1.withamt);
	
	float afterdep,afterwith;
	afterdep=s1.balance+s1.depamt;
//	finbal=afterdep;
	afterwith=afterdep-s1.withamt;
	  
	printf("Acc.no=%d",s1.accountNo);
	printf("\nName=%s",s1.accountHol);
	printf("\nbalance=%.2f",s1.balance);
	printf("\nAfter deposit: %.2f",s1.afterdep);
	printf("\nAfter withdraw: %.2f",s1.afterwith);
}
