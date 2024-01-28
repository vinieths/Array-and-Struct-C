#include<stdio.h>
int main()
{
    int siz=6,c=0;
    int arr[6]={45,65,75,85,95,55};
    for(int i=0;i<siz;i++)
    {
        if(i==3)
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
        printf("%d ",arr[i]);
    }
}
