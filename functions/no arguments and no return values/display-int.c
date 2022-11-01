#include<stdio.h>
void display1to5(void);//global declaration (or) prototype
int main()
{
    display1to5();//function calls
    display1to5();//function calls
    return 0;
}
void display1to5(void)//function execution part
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("i valu is :%d\n",i);
    }
}