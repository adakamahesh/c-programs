#include<stdio.h>
void displayint(int,int);//display global declaration(or)prototype
int main()
{
    displayint(1,9);//hear function() calls
    return 0;
}
void displayint(int m,int n)//it is function execution part
{
    int i;
    for(i=m;i<=n;i++)
    {
        printf("i value is :%d\n",i);
    }
}
