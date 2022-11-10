#include<stdio.h>
size_t length(char[]);
int main()
{
    int s[20];
    size_t l;
    printf("enter the string :");
    gets(s);
    l=length(s);
    printf("length of string is :%u",l);
    return 0;
}
size_t length(char s[])
{
    size_t i=0;
    while(s[i]!='\0')
    {
        ++i;
    }
    return i;
}