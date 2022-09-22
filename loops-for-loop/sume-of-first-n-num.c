#include<stdio.h>
int main()
{
    int i,n,sum=0;//usear input valus
    printf("enter the n value");
    scanf("%d",&n);//read usear input valus
    for(i=1;i<=n;i++)//for loop 
    {
        printf("%d+%d=",sum,i);//display the add sum and i values
        sum=sum+i;//we can store sum+i values into sum value
        printf("%d\n",sum);//display the sum value
    }
    printf("sum of first n numbers is :%d",sum);//display the final sum value
    return 0;
}