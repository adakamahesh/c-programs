#include<stdio.h>
int main()
{
    int i,n,rev=0,r,temp;
    printf("enter a number :");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    n=temp;
    printf("reverse numbe is %d",rev);
    return 0;
}