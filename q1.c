#include<stdio.h>
void printn(int n);
int main()
{
  int n;
  printf("Enter n");
  scanf("%d",&n);
  printn(n);
    return 0;
}
void printn(int n)
{
    if(n==1)
    printf("1\n");
    else
    {
  printn(n-1);
  printf("%d\n",n);
    }
}