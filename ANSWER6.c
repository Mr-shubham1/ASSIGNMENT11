#include<stdio.h>
void primebtwn(int,int);
int main()
{
    int a,b;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    primebtwn(a,b);
    return 0;
}
 void primebtwn(int a,int b)
{
    int i,j;
    for(i=(a+1);i<=(b-1);i++)
    {
        for(j=2;j<=(i-1);j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        printf("%d ",i);
    }
}