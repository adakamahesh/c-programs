#include<stdio.h>
void displayfloat(void);//global declaration (or) prototype
int main()
{
    displayfloat();//function call
    displayfloat();//function call
    displayfloat();//function call
    return 0;
}
void displayfloat(void)//function execution part
{
    float i;
    for(i=0.8;i<=5;i++)
    {
        printf("i value is :%f\n",i);
    }
}