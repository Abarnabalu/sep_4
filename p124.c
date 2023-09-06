#include <stdio.h>
#include <string.h>

void duplicate_remove(char str[]);

int main()
{
    char string[90];
    printf("Enter the string:\n");
    scanf("%s", string);
    duplicate_remove(string);
    return 0;
}

void duplicate_remove(char str[])
{
    char new_str[90];
    int new_str_index = 0;
    for (int i = 0; i < 90; i++)
    {
        new_str[i] = '\0';
    }
    for (int i = 0; i < strlen(str); i++)
    {
        int duplicate = 0;
        for (int j = 0; j < strlen(new_str); j++)
        {
            if (str[i] == new_str[j])
            {
                duplicate = 1;
                break;
            }
        }
        if (duplicate==0)
        {
            new_str[new_str_index++] = str[i];
        }
    }
    printf("String after removing duplicates: %s\n", new_str);
}
