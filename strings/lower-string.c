#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("enter string :");
    gets(s);
    strlwr(s);
    printf("lower string is :%s",s);
    return 0;
}