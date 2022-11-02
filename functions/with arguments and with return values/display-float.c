#include<stdio.h>
float sum(float,float);
int main()
{
    sum(2.3,3.2);
    return 0;
}
float sum(float x,float y)
{
    printf("sum is :%f",x+y);
    return x+y;
}