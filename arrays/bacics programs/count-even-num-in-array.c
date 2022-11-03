#include<stdio.h>
int main()
{
    int arr[4]={5,4,2,6};
    int i,count=0;
    for(i=0;i<4;i++)
    {
        if(arr[i]%2==0)
        count++;
    }
    printf("count of even is :%d\n",count);
    return 0;
}