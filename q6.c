#include<stdio.h>
void rev(int n) ;
int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    rev(n);
    return 0;
}
void rev(int n)    
{
    if(n==1)
    printf("2\n");
    else
    {
    printf("%d\n",2*n);
    rev(n-1);
    }

}