#include<stdio.h>
int sum(void);
int main()
{
    sum();
    return 0;
}
int sum()
{
    int a,b,c;
    printf("enter a value :");
    scanf("%d",&a);
    printf("enter b value :");
    scanf("%d",&b);
    c=a+b;
    printf("c value is :%d",c);
    return c;
}