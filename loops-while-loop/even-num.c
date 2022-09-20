//while loop: it is used to reexecut the while block untill condition will be false
#include <stdio.h>
int main()
{
    int i,n;//user input valus
    printf("enter the i and n value");
    scanf("%d%d",&i,&n);//read user input valus
    while(i<=n)//while conditon for range
    {
        if(i%2==0)//if condition for even numbers
        {
          printf("even number is:%d\n",i);
        }
    i++;
    }
    return 0;
}
