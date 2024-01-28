#include<stdio.h>
#include<string.h>>
int main()
{
	char str[50]="datastructure";
	int len = strlen(str);
	int count=0;
	for(int i=0;i<len;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			count=count+1;
		}
	}
	printf("No of vowels present : %d",count);
}
