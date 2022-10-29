#include<stdio.h>
int main()
{
    int n,temp,count=0;
    printf("enter a number :");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    n=temp;
    printf("digits of %d is %d",n,count);
    return 0;
}