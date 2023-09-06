#include<stdio.h>
#include<string.h>

void space_filling(char string[90],char replace,char new_char);

int main()
{
    char str1[90], character_to_be_replaced,new_character;
    printf("Enter the string\n");
    scanf("%[^\n]s ",str1);
    printf("Enter the character to be replaced:\n");
    scanf(" %c",&character_to_be_replaced);
    printf("Enter the new character:\n");
    scanf(" %c",&new_character);
    space_filling(str1,(char)character_to_be_replaced,(char)new_character);
    return 0;
}
void space_filling(char string[],char replace,char new_char)
{
    for(int i=0; i<=strlen(string); i++)
    {
        if(string[i]==replace)
        {
            string[i]=new_char;
        }

    }
    printf("The replaced string is:%s",string);
}
