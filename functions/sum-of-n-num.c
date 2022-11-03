#include<stdio.h>
int sum(int);
int add(int);
int main()
{
    int b;
    b=sum(15);
    printf("final sum value is :%d",b);
    return 0;
}
int sum(int x)
{
    return add(x)+10;
}
int add(int x)
{
    int i,sum=0;
    for(i=1;i<=15;i++)
    {
        sum=sum+i;
    }
    printf("sum is :%d\n",sum);
    return sum;
}