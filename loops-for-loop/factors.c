#include<stdio.h>
int main()
{
    int i,n;//user input valus
    printf("enter the n value");
    scanf("%d",&n);//read the usear input value
    for(i=1;i<=n;i++)//for loop
    {
        if(n%i==0)//if condition
        {
            printf("%d is a facter\n",i);//display facters
        }
    }
    return 0;
}