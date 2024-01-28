#include<stdio.h>
int main()
{
	int arr[2][2][2];
	for(int tdc=0;tdc<2;tdc++)
	{
		for(int row=0;row<2;row++)
		{
			for(int col=0;col<2;col++)
			{
				scanf("%d",&arr[tdc][row][col]);
			}
		}
	}
	for(int tdc=0;tdc<2;tdc++)
	{
		for(int row=0;row<2;row++)
		{
			for(int col=0;col<2;col++)
			{
				printf("%d",arr[tdc][row][col]);
			}
		}
		printf("\n");
	}
	printf("\n");
}
