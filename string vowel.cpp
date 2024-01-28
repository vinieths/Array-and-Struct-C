#include<stdio.h>
#include<string.h>
int main()
{
	char str[50]="dtstrctr";
	int f=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			f=1;
		}
	}
		if(f==1)
		{
			printf("vowel is present");
		}
		else
		{
			printf("vowel is not present");
		}
}
