#include<stdio.h>
int main()
{
    int i,n,sum,limit;
    printf("enter the limit :");
    scanf("%d",&limit);
    for(n=1;n<=limit;n++)
    {
        sum=0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==n)
        {
            printf("%d is perfect number\n",n);
        }
    }
    return 0;
}