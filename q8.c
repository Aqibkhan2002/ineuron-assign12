// print binary of decimal no
#include<stdio.h>
void bi(int n);
void main()
{
  int n;
  printf("enter decimal no");
  scanf("%d",&n);
  bi(n);

}
void bi(int n)
{
    if(n==1)
    printf("1");
    else{
  bi(n/2);
  printf("%d",n%2);
    }
}