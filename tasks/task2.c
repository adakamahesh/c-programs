#include <stdio.h>
int num(int[5]);
int main()
{
    int i;
    int a[5] = {10, 20, 30, 40, 50}, n;
    num(a);
    printf("elements are :\n");
    for (i = 0; i <sizeof(a)/sizeof(a[0]); i++)
    {
         printf("%d\n", a[i]);
    }
}
int num(int x[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        x[i] = x[i] + 5;
    }
}