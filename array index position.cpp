#include<stdio.h>
int main()
{
int size=6;
int arr[6
]={66,77,88,22,11};
for(int i=0;i<size;i++)
{
printf("%d",arr[i]);
}
int pos=3;
size++;
for(int i=size;i>=pos;i--)
{
arr[i]=arr[i-1];
}
arr[pos]=55;
for(int i=0;i<size;i++)
{
printf("%d ",arr[i]);
}
}
