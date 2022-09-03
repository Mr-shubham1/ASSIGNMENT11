#include<stdio.h>
int fact(int);
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int k=0;
        
        for(j=1;j<=(2*n-1);j++)
        {
            
            if((j>=((n+1)-i))&&(j<=(i+(n-1)))&&((i+j)%2)!=0)
            {
            printf("%d",(fact(i-1))/((fact(k))*(fact(i-1-k))));
            k++;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
int fact(int a)
{
    int i,f=1;
    for(i=1;i<=a;i++)
    {
       f=f*i;
    }
    return f;
}
