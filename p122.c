#include<stdio.h>
#include<string.h>
void vowels_capitalize(char str[]);
int main()
{
    char string[90];
    printf("enter the string:\n");
    scanf("%s",string);
    vowels_capitalize(string);
    return 0;
}
void vowels_capitalize(char str[])
{
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='a'|| str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u')
        {
            str[i]=toupper(str[i]);
        }
    }
    printf("the new string is : %s",str);
}
