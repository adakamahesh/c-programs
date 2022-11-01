#include<stdio.h>
void displaychar(char*);//global declaration(or)prototype
int main()
{
    displaychar("mahesh\n");//function calls
    displaychar("mani\n");//function calls
    return 0;
}
void displaychar(char* s)//function execution part 
{
    printf(" char is :%s",s);
}