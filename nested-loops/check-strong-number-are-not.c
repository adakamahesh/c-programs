#include<stdio.h>
int main()
{
    int n,temp,fact,r,i,sum;
    printf("enter a number :");
    scanf("%d",&n);
    temp=n;
    sum=0;
    while(n>0)
    {
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    n=temp;
    if(sum==n)
    {
        printf("strong number");
    }else
    {
        printf("not a strong number");
    }
    return 0;
}