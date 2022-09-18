#include <stdio.h>
int main()
{
    int a,b,c,d;//user input valus
    printf("enter the a and b values");
    scanf("%d%d",&a,&b);//read a and b valus
    b=++a;//it is used to pre incremant 
    c=(++b)+(++b);//it is used to pre increment 
    d=(++c)+(++a);//it is used to pre increment
    printf("a value is:%d\n",a);//it is used to dasplay for a value
    printf("b value is:%d\n",b);//it is used to display for b value
    printf("c value is:%d\n",c);//it is used to display for c value
    printf("d value is:%d\n",d);//it is used to display for d value
    return 0;
}
//program to pre increment  operator
//pre increment means increas same step