#include <stdio.h>
int main()
{
    int a,b,add,sub,mul,div,mdiv;//it is user defind values
    printf("enter the a and b values");
    scanf("%d%d",&a,&b);//it is used to read user defind values
    add=a+b;//add of a and b
    printf("add value is:%d\n",add);//it is used to display the add value
    sub=a-b;//sub of a and b
    printf("sub value is:%d\n",sub);//it is used to dasplay the sub value
    mul=a*b;//mul of a and b
    printf("mul value is:%d\n",mul);//it is used to display the mul value 
    div=a/b;//div of a and b
    printf("div value is:%d\n",div);//it is used to display the div value
    mdiv=a%b;//modual div of a and b
    printf("mdiv value is:%d\n",mdiv);// it is used to display reminder of div
    return 0;
}
// program of operators