#include<stdio.h>
int main()
{
    int valuetodelete,size=5,pos;
    printf("Enter the value to delete : ");
    int arr[size]={1,2,3,4,5};
    scanf("%d",&valuetodelete);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==valuetodelete)
        {
            pos=i;
            break;
        }
    }
    printf("Positon%d",pos);
    for(int i=pos;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    printf("\nArray after deletion\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
