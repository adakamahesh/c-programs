#include<stdio.h>
int main()
{
    int i,j,k,l=40;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=l-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}