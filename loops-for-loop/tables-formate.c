#include<stdio.h>
int main()
{
    int i,n;//usear input values
    printf("enter table num");
    scanf("%d",&n);//read usear input value
    for(i=1;i<=10;i++)//for loop
    {
        printf("%dx%d=%d\n",n,i,n*i);//display the table
    }
    return 0;
}