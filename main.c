/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   int a,b;
   scanf("%d",&a);
   for(int j=0;j<n;j++)
   {
       if(arr[j]==a)
       {
           b=a;
       }
   }
   if(b==a)
   {
       printf("key is found : %d",a);
   }
   else
   {
       printf("key not found : %d",a);
   }
}