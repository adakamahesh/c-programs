#include <stdio.h>
int main()
{   
    int i=1,n;//input and user input values
    printf("enter the n value");
    scanf("%d",&n);//read the user input value    
    while(i<=n)//while condition
    {
    printf("%d\n",i);//it is used to display the i values
    i++;//post increment operator
    }
    return 0;
}
