#include<stdio.h>
int square(int);
int main()
{
    int a;
    printf("enter as number:");
    scanf("%d",&a);
    printf("%d",square(a));
    return 0;
}
int square(int a)
{
    int c;
    c=a*a;
    return c;
}