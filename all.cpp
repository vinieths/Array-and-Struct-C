#include<stdio.h>
int main()
{
	int c=0,siz=5;
	int arr[5]={55,65,75,85,95};
	for(int i=0;i<siz;i++)
	{
		if(arr[i]==75)
		{
		   for(int j=i;j<siz;j++)
            {
            c=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=c;
            }
            break;	
		}
			
	}
	siz--;
	for(int i=0;i<siz;i++)
	{
		
		 printf("%d",arr[i]);
		
	}
}
