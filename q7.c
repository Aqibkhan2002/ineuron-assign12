//recursion - print square of first n natural no's
#include<stdio.h>
int sq(int n);
void main()
{
  int n;
  printf("enter n");
  scanf("%d",&n);
  printf("%d",sq(n));

}
int sq(int n)
{
    int s;
    if(n==1)
    return 1;
   s=sq(n-1)+n*n;
    return s;
}