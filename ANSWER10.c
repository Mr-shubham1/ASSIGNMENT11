#include<stdio.h>
int seriessum(int);
int fact(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
     printf("%d",seriessum(n));
     return 0;
}
int seriessum(int n)
{
  int s=0,i;
  for(i=1;i<=n;i++)
  {
    s=s+(fact(i))/i;
  }
  return s;
  
}
int fact(int i)
{
    int j,f=1;
    for(j=1;j<=i;j++)
    {
      f=f*j;
    }
    return f;
}
