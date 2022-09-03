#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    printf("hcf of %d and %d is %d ",a,b,hcf(a,b));
    return 0;
}
int hcf(int a,int b)
{
    int i,c;
    c=(b<=a?b:a);
    for(i=c;i>=1;i--)
    {
        if((a%i==0)&&(b%i)==0)
       return i;
    }
}