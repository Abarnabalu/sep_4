#include<stdio.h>
#include<string.h>
void binary(char str1[],char str2[]);
int main()
{
    char string1[90],string2[90];
    printf("enter the strings:\n");
    scanf("%s %s",string1,string2);
    binary(string1,string2);
    return 0;
}
void binary(char str1[],char str2[])
{
    char result[90];
    result[90]=str1 | str2;
    printf("The result is %s",result);
}
