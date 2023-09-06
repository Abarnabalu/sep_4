#include<stdio.h>
#include<string.h>
void sort(char str[]);
int main()
{
    char string[90];
    printf("enter the string:\n");
    scanf("%s",string);
    sort(string);
    return 0;
}
void sort(char str[])
{
    char temp;
    for (int i=0; i<strlen(str)-1; i++)
    {
        for(int j=i+1; j<=strlen(str)-1; j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("The sorted string is: %s",str);
}
