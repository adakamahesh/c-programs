#include<stdio.h>
void print1to5(void);//global declaraction (or)protitype
int main()
{
    print1to5();//here function calling(print1to5())
    print1to5();
    return 0;
}
void print1to5(void)//it is function execution
{
    int i;
    for(i=1;i<=5;i++)//for loop
    {
        printf("i value is :%d\n",i);//it is used to display output
    }
}