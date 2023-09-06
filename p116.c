#include<stdio.h>
#include<string.h>
int main()
{
    char string[90];
    printf("enter the string:\n");
    scanf("%s",string);
    case_change(string);
    return 0;
}
void case_change(char str[90])
{
    printf("The upper case is: %s",strupr(str));
}
