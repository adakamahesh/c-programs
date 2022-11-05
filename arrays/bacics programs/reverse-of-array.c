#include<stdio.h>
int main()
{
    int a[6]={10,20,30,40,50,60},i,j,temp,n=6;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("rev array is :\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}