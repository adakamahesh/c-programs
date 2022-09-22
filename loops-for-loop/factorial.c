#include<stdio.h>
int main()
{
    int i,n,fact=1;//usear input values
    printf("enter the n value");
    scanf("%d",&n);//read usear input value
    for(i=n;i>=1;i--)//for loop
    {
      fact=fact*i;  
    }
    printf("factorial is:%d",fact);//display factorial values
    return 0;
}