#include<stdio.h>
int main()
{
    int i,n,sum=0;//usear input values
    printf("enter the n value");
    scanf("%d",&n);//read user input value
    for(i=1;i<n;i++)//for loop
    {
        if(n%i==0)//if condition
        {
            printf("%d+%d=%d\n",sum,i,sum+i);//display sum values
            sum=sum+i;//logic
        }
    }
    if(sum==n)//if condition
    {
        printf("perfect number\n");//display statement
    }else//else condition
    {
        printf("not a perfect number\n");//display statement
    }
    return 0;
}