#include<stdio.h>
int main()
{
    int a[10],i,n,found=0,ele;
    printf("enter the size of array :\n");
    scanf("%d",&n);
    printf("enter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the serching elements :\n");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            printf("element is found @ loc is :%d\n",i);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("element is not found");
    }
    return 0;
}