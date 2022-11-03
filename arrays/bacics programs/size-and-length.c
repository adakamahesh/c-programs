#include<stdio.h>
int main()
    {
        int arr[5];
        printf("size :%d\n",sizeof(arr));
        printf("length :%d\n",sizeof(arr)/sizeof(arr[0]));
        return 0;
    }