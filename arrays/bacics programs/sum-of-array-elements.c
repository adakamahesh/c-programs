#include<stdio.h>
int main()
{
    int arr[5]={5,6,3,2,4};
    int sum=0,i;
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum is :%d\n",sum);
    return 0;
}