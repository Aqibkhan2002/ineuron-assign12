#include<stdio.h>
void revn(int n);
int main()
{
  int n;
  printf("Enter n");
  scanf("%d",&n);
  revn(n);
    return 0;
}
void revn(int n)
{
    if(n==1)
    printf("1\n");
    else
    {
  printf("%d\n",n);
  revn(n-1);
    }
}