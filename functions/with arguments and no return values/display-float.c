#include<stdio.h>
void displayfloat(float,float);//global declaration (or) prototype
int main()
{
    displayfloat(2.3,5.3);//function calls
    return 0;
}
void displayfloat(float m,float n)//function execution part
{
    float i;
    for(i=m;i<=n;i++)
    {
        printf("i value is :%f\n",i);
    }
}