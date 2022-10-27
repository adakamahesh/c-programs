#include <stdio.h>
int main()
{
    int x=2;
    for(x=2;x<=12;x++)//for loop
    {
    if(x<5)//if statement
    continue;
    printf("x value is :%d\n",x);//it is used for display output valus
    }
    return 0;
}