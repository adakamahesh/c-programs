#include<stdio.h>
int main()
{
    int a[10],n,i,ele,loc;
    printf("enter the size of array :");//it is user input of size
    scanf("%d",&n);//it is used to read user input
    printf("enter the elements is :");//it is user input of elements
    for(i=0;i<n;i++)//for loop
    {
        scanf("%d",&a[i]);//read user input values
    }
    printf("enter the element to insert :");//it is used to enter insert elements
    scanf("%d",&ele);//it is used read insert elements
    printf("enter the location to insert :");//it is used to location of inserting elements
    scanf("%d",&loc);//it is used to read the insert elements
    for(i=n-1;i>=loc;i--)//for loop
    {
        a[i+1]=a[i];//logic
    }
    a[loc]=ele;//logic
    printf("after inserting of elements :\n");
    for(i=0;i<=n;i++)//for loop
    {
        printf("%d\n",a[i]);//it is used to display out put after insert
    }
    return 0;
}