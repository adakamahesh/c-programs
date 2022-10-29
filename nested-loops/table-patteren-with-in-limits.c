#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("enter lower limit :");
    scanf("%d",&m);
    printf("enter upper limit :");
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        printf("table :%d\n",i);
        for(j=1;j<=10;j++)
        {
            printf("%dx%d=%d\n",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}