#include<stdio.h>
void primen(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    primen(n);
    return 0;
}
void primen(int n)
{
    int i,j,count=0;
    for(i=1;i<=(n*n);i++)
    {
      for(j=2;j<=(i-1);j++)
      {
        if((i%j)==0)
        break;
      }
      if(i==j)
      {
        printf("%d ",i);
        count++;
        if(count==n)
        break;
      }
    }
}