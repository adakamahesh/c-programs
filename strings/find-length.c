#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    size_t l;
    printf("enter the name:");
    gets(s);
    l=strlen(s);
    printf("string length is:%u",l);
    return 0;
}