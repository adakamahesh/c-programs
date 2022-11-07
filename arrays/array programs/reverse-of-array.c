#include<stdio.h>
int main()
{
    int a[15],n,i,temp,j;
    printf("enter the size of array :");//it is used to user input size
    scanf("%d",&n);//it is used to read user input
    printf("enter the elements :");//it is used to user input of elements
    for(i=0;i<n;i++)//for loop
    {
        scanf("%d",&a[i]);//it is used to read input
    }
    for(i=0,j=n-1;i<j;i++,j--)//for loop
    {
        temp=a[i];
        a[i]=a[j];   //logic of rev program
        a[j]=temp;
    }
    printf("rev of array is :\n");
    for(i=0;i<n;i++)//for loop
    {
        printf("%d\n",a[i]);//it is used to display output
    }
    return 0;
}