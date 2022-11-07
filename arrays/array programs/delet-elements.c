#include<stdio.h>
int main()
{
    int a[10],i,n,loc;
    printf("enter the size of array :\n");
    scanf("%d",&n);
    printf("enter the elements in array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the delet element location:\n ");
    scanf("%d",&loc);
    for(i=loc;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("after deleting element :\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}