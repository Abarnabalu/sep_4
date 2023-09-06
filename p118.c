#include<stdio.h>
#include<string.h>
void reverse(char str[100]);
int main()
{
    char string[100];
    printf("Enter the string:\n");
    scanf("%s",string);
    reverse(string);
    return 0;
}
void reverse(char str[100])
{
    char rev[100];
    for (int i=0; i<=strlen(str); i++)
    {
        rev[i]=str[(strlen(str))-(i+1)];
        printf("%c",rev[i]);
    }
}
