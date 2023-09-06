#include<stdio.h>
#include<string.h>
void length(char string[10]);
int main()
{
    char str[10];
    printf("enter the string:\n");
    scanf("%s",str);
    length(str);
    return 0;
}
void length(char string[10])
{
    printf("the length of the entered string is:%d",strlen(string));
}
