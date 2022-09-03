#include<stdio.h>
int primeornot(int);
int main()
{
    int a,c;
    printf("enter a number:");
    scanf("%d",&a);
    c=primeornot(a);
    if(c==1)
    printf("%d is a prime number ",a);
    else
    printf("%d is not a prime number",a);
    return 0;
}
int primeornot(int a)
{
    int i;
    for(i=2;i<=a-1;i++)
    {
      if((a%i)==0)
      break;
    }
    if(i==a)
    return 1;
    else
    return 0;
}