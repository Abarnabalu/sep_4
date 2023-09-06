#include<stdio.h>
#include<string.h>
void copy(string1);
int main()
{
    char str1[10],str2[10];
    printf("Enter the string:\n");
    scanf("%s",str1);

    copy(str1);
    return 0;
}
void copy(string1)
{
    char string2[10];
    strcpy(string2,string1);
    printf("%s",string2);
}
