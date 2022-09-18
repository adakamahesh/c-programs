#include <stdio.h>
int main()
{
    int a,b,c,d;//it is user input valus
    printf("enter the a and b values");
    scanf("%d%d",&a,&b);//read a and b valus
    b=--a*--a;//it is used to pre decrement
    c=(--b)-(--b)-(--a);//it is used to pre decrement 
    d=(--c)+(--a)/(--b);//it is used to pre decrement 
    printf("a value is:%d\n",a);//it is used to display a value
    printf("b value is:%d\n",b);//it is used to display b value
    printf("c value is:%d\n",c);//it is used to display c value
    printf("d value is:%d\n",d);//it is used to display d value
    return 0;
}
//program for pre decrement operator
//pre decrement means decreas same step