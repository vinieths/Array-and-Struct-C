#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]="datastructure implementations";
	int len=strlen(str);
	printf("original string : %s\n len: %d\n ",str,len);
	int count=0;
	for(int i=0;i<len;i++)
	{
		if(str[i]=='a')
		{
			count++;
			for(int pos=i;pos<len;pos++)
			{
				str[pos]==str[pos+1];
			}
			len--;
			i--;
		}
	}
	printf("%d",count);
}
