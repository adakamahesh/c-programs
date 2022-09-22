#include<stdio.h>
int main()
{
    int i,n,count=0;//usear input values
    printf("enter the n value");
    scanf("%d",&n);//read usear input values
    for(i=1;i<=n;i++)//for loop
    {
        if(n%i==0)//if condition
        {
            count++;//post increment operator
        }
    }
    if(count==2)//if condition
    {
        printf("prime number",i);//display statement
    }
    else//else condition
    {
        printf("not a prime number",i);//display statement
    }
        
    return 0;
}