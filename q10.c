// print reverse of a given no
#include<stdio.h>
void rev(int n);
void main()
{
 int n;
 printf("enter n");
 scanf("%d",&n);
  rev(n);
}
void rev(int n)
{
    if(n<=9)
    printf("%d",n);
    else{
    printf("%d",n%10);
   rev(n/10);}

}