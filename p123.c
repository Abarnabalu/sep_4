#include<stdio.h>
#include<string.h>
void keyword_or_not(char str[]);
int main()
{
    char string[90];
    printf("enter the string:\n");
    scanf("%s",string);
    keyword_or_not(string);
    return 0;
}
void keyword_or_not(char str[])
{
    if(strcmp(str, "auto") == 0 || strcmp(str, "break") == 0 || strcmp(str, "case") == 0 || strcmp(str, "char") == 0 || strcmp(str, "const") == 0 || strcmp(str, "continue") == 0 || strcmp(str, "default") == 0 || strcmp(str, "do") == 0 || strcmp(str, "double") == 0 || strcmp(str, "else") == 0 || strcmp(str, "enum") == 0 || strcmp(str, "extern") == 0 || strcmp(str, "float") == 0 || strcmp(str, "for") == 0 || strcmp(str, "goto") == 0 || strcmp(str, "if") == 0 || strcmp(str, "int") == 0 || strcmp(str, "long") == 0 || strcmp(str, "register") == 0 || strcmp(str, "return") == 0 || strcmp(str, "short") == 0 || strcmp(str, "signed") == 0 || strcmp(str, "sizeof") == 0 || strcmp(str, "static") == 0 || strcmp(str, "struct") == 0 || strcmp(str, "switch") == 0 || strcmp(str, "typedef") == 0 || strcmp(str, "union") == 0 || strcmp(str, "unsigned") == 0 || strcmp(str, "void") == 0 || strcmp(str, "volatile") == 0 || strcmp(str, "while") == 0)
    {
        printf("The string is a keyword ");
    }
    else
    {
        printf("The string is not a keyword ");
    }
}
