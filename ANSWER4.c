#include<stdio.h>
int nxtprime(int);
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    printf("next prime number to %d is %d",a,nxtprime(a));
    return 0;
}
int nxtprime(int a)
{
    int i,j;
    for(i=(a+1);i<=2*a;i++)
    {
        for(j=2;j<=(i-1);j++)
       {
         if((i%j)==0)
         break;
       }
       if(i==j)
       {
         return i;
       }
    }
}