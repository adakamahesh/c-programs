#include<stdio.h>
int sum(void);
int main()
{
    sum();
    return 0;
}
int sum()
{
    int i;
    for(i=1;i<=6;i++)
    {
        printf("i value is :%d\n",i);
    }
sum();         
}