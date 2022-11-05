#include<stdio.h>
int main()
{
    int a[15];
    int i,n;
    printf("enter the size :");
    scanf("%d",&n);
    printf("enter %d elements :\n",n);
    for(i=0;i<n;i++)
    { 
      scanf("%d",&a[i]);
    }
    printf("elements & location :\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d \t loc=%u\n",i,a[i],&a[i]);
    }
    return 0;
}