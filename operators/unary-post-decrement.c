#include<stdio.h>
int main()
{
    int a,b,c,d;//user input valus
    printf("enter the a and b values");
    scanf("%d%d",&a,&b);//read a and b values
    b=(a--)-(a--);//it is used to post increment
    c=(b--)-(b--);//it is used to post increment
    d=(c--)-(a--)-(c--);//it is used to post increment  operator
    printf("a value is:%d\n",a);//it is used to display a value
    printf("b value is:%d\n",b);//it is used to display b value
    printf("c value is:%d\n",c);//it is used to display c value
    printf("d value is:%d\n",d);//it is used to display d value
    return 0;
}
//program for post decrement
//post decrement means decrese next step