#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
    int a,b;
    printf("enter a value :");
    scanf("%d",&a);
    printf("enter b value :");
    scanf("%d",&b);
    add(a,b);
    printf("add value is :%d\n",add(a,b));
    sub(a,b);
    printf("sub value is :%d\n",sub(a,b));
    mul(a,b);
    printf("mul value is :%d\n",mul(a,b));
    div(a,b);
    printf("div value is :%d\n",div(a,b));
    return 0;
}
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}
int div(int x,int y)
{
    return x/y;
}