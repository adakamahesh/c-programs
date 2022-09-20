#include <stdio.h>
int main()
{
    int i,n;//user input values
    printf("enter the i and n value");
    scanf("%d%d",&i,&n);//read user input values 
    while(i>=n)//while condition
    {
    printf("%d\n",i);//it is used to display i valus
    i--;//post decrement operator
    }
    return 0;
}
