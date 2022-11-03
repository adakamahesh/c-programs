#include<stdio.h>
int main()
{
    int a[6]={6,5,4,3,9,2};
    int larg,i;
    larg=a[0];
    for(i=1;i<6;i++)
    {
        if(larg<a[i])
        larg=a[i];
    }
    printf("larg num is :%d",larg);
}