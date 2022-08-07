#include<stdio.h>
void even(int n);
int main()
{
   int n;
   printf("Enter n");
   scanf("%d",&n);
   even(n);
    return 0;
}
void even(int n)
{
    if(n>1)
   even(n-1);
   printf("%d",2*n);

}