#include<stdio.h>
void displaychar(void);//global declaration (or) prototype
int main()
{
    displaychar();//function calls
    displaychar();//function calls
    return 0;
}
void displaychar(void)//function execution part
{
    printf("mahesh\n");
    printf("jayy\n");
}