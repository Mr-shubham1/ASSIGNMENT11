#include<stdio.h>
int lcm(int,int);
int main()
{
    int a,b;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    printf(" lcm of %d and %d is %d", a,b,lcm(a,b));
    return 0;
}
int lcm(int a,int b)
{
    int i;
    for(i=1;i<=b;i++)
    {
        int c;
        c=a*i;
        if((c%b)==0)
        return(c);
    }
}