#include<stdio.h>
void fibonacy(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    fibonacy(n);
    return 0;
}
void fibonacy(int n)
{
    int i,a=-1,b=1,c;
    for(i=1;i<=n;i++)
    {
      c=a+b;
      a=b;
      b=c;
      printf("%d ",c);
    }
}