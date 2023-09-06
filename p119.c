#include<stdio.h>
#include<string.h>
void frequency(char str[],char character);
int main()
{
    char string[100],character_to_be_checked;
    printf("Enter the string:\n ");
    scanf("%s",string);
    printf("Enter the character to be checked:\n ");
    scanf(" %c",&character_to_be_checked);
    frequency(string,character_to_be_checked);
    return 0;
}
void frequency(char str[],char character)
{
    int count=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]==character)
        {
            count++;
        }
    }
    printf("The frequency of %c is %d",character,count);
}
