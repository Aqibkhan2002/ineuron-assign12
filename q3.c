#include<stdio.h>   
void oddn(int n);
int main()
{
   int n;
  printf("Enter n");
  scanf("%d",&n);
  oddn(n);
   return 0;
}
void oddn(int n)
{
    if(n==1)
    printf("1\n");
    else
    {
  oddn(n-1);
  printf("%d\n",2*n-1);
    }
}