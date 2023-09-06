#include<stdio.h>
#include<string.h>
void substring_check(char str[],char substr[]);
int main()
{
    char string[100],sub_string[100];
    printf("enter the string\n");
    scanf("%s",string);
    printf("Enter the substring:\n");
    scanf("%s",sub_string);
    substring_check(string,sub_string);

    return 0;
}
void substring_check(char str[],char substr[])
{
    int j=0,flag;
    for(int i=0; i<=(strlen(str)-strlen(substr)); i++)
    {
        for(j=0; j<strlen(substr); j++)
        {
            if(str[i+j]!=substr[j])
            {
                flag=0;
                break;
            }
        }
        if(j==strlen(substr))
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("It is a substring");
    }
    else
    {
        printf("It is not a substring");
    }
}
