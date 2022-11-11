#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
    int a,b,c;
    printf("enter a value :");
    scanf("%d",&a);
    printf("enter b value :");
    scanf("%d",&b);
    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
    c=add(a,b)+sub(a,b)+mul(a,b)+div(a,b);
    printf("add all valus is :%d",c);
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