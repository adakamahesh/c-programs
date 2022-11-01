#include<stdio.h>
int add(int,int);//prototype (or) global declaration
int main()
{
    int a,b,c;
    printf("enter 2 numbers :");
    scanf("%d%d",&a,&b);
    c=add(a,b);//function calls
    printf("c value is:%d",c);
    return 0;
}
int add(int x,int y)//function execution part
{
    int z;
    z=x+y;
}