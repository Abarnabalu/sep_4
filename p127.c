#include<stdio.h>
#include<string.h>
void length_of_last_word(char str[]);
int main()
{
    char string[100];
    printf("enter the string:\n");
    scanf("%[^\n]s",string);
    length_of_last_word(string);
    return 0;
}
void length_of_last_word(char str[])
{
    int count=0;
    for(int i=strlen(str)-1;i>= 0; i--)
    {
        if(str[i]!=' ')
        {
            count++;
        }
        else
        {
            break;
        }
    }
        printf("The length of last word is : %d",count);
}

