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
    if(n==rev)
    {
        printf("%d is palindrome number",n);
    }else
    {
        printf("%d is not a palindrome number",n);
    }
    return 0;
}