#include<stdio.h>
void merge(int[],int[],int,int);
int main()
{
    int a[10],b[15],m,n,i;
    printf("enter the size of a is :\n");
    scanf("%d",&m);
    printf("enter the size of b is :\n");
    scanf("%d",&n);
    printf("enter the elements of a is :\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements of b is :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    merge(a,b,m,n);
    printf("after insertin array:\n");
    for(i=0;i<m+n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
void merge(int a[],int b[],int m,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        a[m+i]=b[i];
    }
}