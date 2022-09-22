#include<stdio.h>
int main()
{
    int i,n;//usear input values
    printf("enter n value");
    scanf("%d",&n);//read the usear input valus
    for(i=1;i<=n;i++)//for loop
    {
        if(i%2==0)//if condition
        {
            printf("%d is even number\n",i);//it is used to display even numbers
        }
    }
    return 0;
}