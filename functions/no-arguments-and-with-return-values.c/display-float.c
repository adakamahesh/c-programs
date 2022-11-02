#include<stdio.h>
float sum(void);
int main()
{
    sum();
    return 0;
}
float sum()
{
    float a,b;
    printf("enter two numbers :");
    scanf("%f%f",&a,&b);
    printf("sum is :%f",a+b);
}