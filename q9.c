// print octal of decimal no
#include<stdio.h>
void oc(int n);
void main()
{
  int n;
  printf("enter decimal no");
  scanf("%d",&n);
  oc(n);

}
void oc(int n)
{
    if(n<8)
    printf("%d",n);
    else{
  oc(n/8);
  printf("%d",n%8);
    }
}