#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[15];//user inputs
    printf("ente string s1:");
    gets(s1);//read the string 
    printf("enter string s2:");
    gets(s2);
    strcat(s1,s2);//Concatenate string (or)it is used to combain two strings
    printf("after combine two strings :%s",s1);
    return 0;
}