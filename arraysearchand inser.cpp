#include<stdio.h>
int main()
{
	int size,i;
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int key;
	scanf("%d",&key);
	for(i=0;i<size;i++)
	{
		if(key==arr[i])
		{
			printf("exits");
			break;
		}
		else
		{
			printf("Not exits");
		
		}
	}
}
